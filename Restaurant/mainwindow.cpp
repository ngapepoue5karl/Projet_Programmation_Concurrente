#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Establish database connection
    if (connectionDatabase()) {
        loadMenuData();        // Load menu data into the UI
        loadIngredientsData(); // Load ingredients data into the UI
        loadInventoryData();
        loadRecipeData();
    }
}

MainWindow::~MainWindow()
{
    delete ui;

    // Close the database connection
    if (db.isOpen()) {
        db.close();
    }
}

bool MainWindow::connectionDatabase() {
    QString dbPath = QCoreApplication::applicationDirPath() + QDir::separator() + "Base_de_données.db";

    // Check if the database file exists
    if (!QFile::exists(dbPath)) {
        qDebug() << "Database file not found at:" << dbPath;
        return false;
    }

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la BD !:" << db.lastError().text();
        return false;
    }

    qDebug() << "Database connected successfully!";
    return true;
}

void MainWindow::loadMenuData() {
    // SQL query to fetch only the 'nom' column from the 'menu' table
    QSqlQuery query("SELECT nom FROM menu");

    if (!query.exec()) {
        qDebug() << "Failed to retrieve data from the menu table:" << query.lastError().text();
        return;
    }

    // Clear the QListWidget before loading new data
    ui->listWidget_4->clear();

    while (query.next()) {
        // Retrieve the 'nom' column value
        QString menuName = query.value(0).toString();

        // Add the menu name to the QListWidget
        QListWidgetItem *item = new QListWidgetItem(menuName, ui->listWidget_4);
        ui->listWidget_4->addItem(item);
    }

    qDebug() << "Menu data loaded successfully.";
}

void MainWindow::loadIngredientsData() {
    // SQL query to fetch ingredients data
    QSqlQuery query("SELECT nom, quantite FROM ingredients");

    if (!query.exec()) {
        qDebug() << "Failed to retrieve data from the ingredients table:" << query.lastError().text();
        return;
    }

    // Clear the QListWidget before loading new data
    ui->listWidget_3->clear();

    while (query.next()) {
        QString ingredientItem = QString("%1 : %2")
        .arg(query.value(0).toString()) // Nom
            .arg(query.value(1).toString()); // Quantite

        // Add the item to the QListWidget
        QListWidgetItem *item = new QListWidgetItem(ingredientItem, ui->listWidget_3);
        ui->listWidget_3->addItem(item);
    }

    qDebug() << "Ingredients data loaded successfully.";
}

void MainWindow::loadInventoryData() {
    // SQL query to fetch 'nom_item' and 'quantite' from the 'inventaire' table
    QSqlQuery query("SELECT nom_item, quantite FROM inventaire");

    if (!query.exec()) {
        qDebug() << "Failed to retrieve data from the inventaire table:" << query.lastError().text();
        return;
    }

    // Clear the QListWidget before loading new data
    ui->listWidget_5->clear();

    while (query.next()) {
        // Retrieve 'nom_item' and 'quantite' values from the query result
        QString itemName = query.value(0).toString();
        QString itemQuantity = query.value(1).toString();

        // Combine 'nom_item' and 'quantite' in the format "nom_item : quantite"
        QString displayText = itemName + " : " + itemQuantity;

        // Add the formatted string as an item to the QListWidget
        QListWidgetItem *item = new QListWidgetItem(displayText, ui->listWidget_5);
        ui->listWidget_5->addItem(item);
    }

    qDebug() << "Inventory data loaded successfully.";
}

void MainWindow::loadRecipeData() {
    // SQL query to fetch menu name, ingredient name, and required quantity from the recipe table
    QString queryStr = R"(
        SELECT m.nom, i.nom, r.quantite_necessaire
        FROM recette r
        JOIN menu m ON r.menu_id = m.menu_id
        JOIN ingredients i ON r.ingredient_id = i.ingredient_id
    )";

    QSqlQuery query(queryStr);

    if (!query.exec()) {
        qDebug() << "Failed to retrieve recipe data:" << query.lastError().text();
        return;
    }

    // Clear the listWidget_2 before loading new data
    ui->listWidget_2->clear();

    // Variable to store current menu name
    QString currentMenu;
    QListWidgetItem *menuItem = nullptr;

    while (query.next()) {
        QString menuName = query.value(0).toString();
        QString ingredientName = query.value(1).toString();
        int quantityRequired = query.value(2).toInt();

        // If the menu name changes, add the new menu name as a header in the list
        if (menuName != currentMenu) {
            currentMenu = menuName;
            menuItem = new QListWidgetItem(menuName + " - Recette", ui->listWidget_2);
            ui->listWidget_2->addItem(menuItem);
        }

        // Display the ingredient and quantity in the format "ingredient_name : quantity"
        QString recipeItemText = ingredientName + " : " + QString::number(quantityRequired);
        QListWidgetItem *ingredientItem = new QListWidgetItem(recipeItemText, ui->listWidget_2);
        ui->listWidget_2->addItem(ingredientItem);
    }

    qDebug() << "Recipe data loaded successfully.";
}

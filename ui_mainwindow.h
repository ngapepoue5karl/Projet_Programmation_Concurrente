/********************************************************************************
** Form generated from reading UI file 'mainwindowCXstCZ.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWCXSTCZ_H
#define MAINWINDOWCXSTCZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *Projet;
    QFrame *Suivi_cuisine;
    QListView *Recette_de_cuisine;
    QListView *Suivi_ingredients;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *Suivi_global;
    QLabel *label_15;
    QLabel *label_16;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QFrame *Suivi_restaurant;
    QListWidget *listWidget;
    QLabel *label_7;
    QTextBrowser *textBrowser;
    QLabel *label_8;
    QWidget *widget;
    QFrame *Restaurant;
    QFrame *Salle_de_restauration;
    QFrame *Cuisine;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QTimeEdit *Timer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1844, 806);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Projet = new QFrame(centralwidget);
        Projet->setObjectName("Projet");
        Projet->setGeometry(QRect(10, 10, 1511, 751));
        Projet->setStyleSheet(QString::fromUtf8("QFrame  {  \n"
"	\n"
"	\n"
"	background-color: rgb(181, 181, 181);\n"
"border :2px solid  rgb(85, 0, 0) ;\n"
"border-radius : 20px;\n"
"}\n"
"QLabel{\n"
"border :0px;\n"
"}\n"
""));
        Projet->setFrameShape(QFrame::Shape::StyledPanel);
        Projet->setFrameShadow(QFrame::Shadow::Raised);
        Suivi_cuisine = new QFrame(Projet);
        Suivi_cuisine->setObjectName("Suivi_cuisine");
        Suivi_cuisine->setGeometry(QRect(10, 70, 151, 591));
        Suivi_cuisine->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/recette.jpg);"));
        Suivi_cuisine->setFrameShape(QFrame::Shape::StyledPanel);
        Suivi_cuisine->setFrameShadow(QFrame::Shadow::Raised);
        Recette_de_cuisine = new QListView(Suivi_cuisine);
        Recette_de_cuisine->setObjectName("Recette_de_cuisine");
        Recette_de_cuisine->setGeometry(QRect(10, 30, 131, 221));
        Suivi_ingredients = new QListView(Suivi_cuisine);
        Suivi_ingredients->setObjectName("Suivi_ingredients");
        Suivi_ingredients->setGeometry(QRect(10, 330, 131, 221));
        label_9 = new QLabel(Suivi_cuisine);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 310, 141, 21));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        label_10 = new QLabel(Suivi_cuisine);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 10, 121, 21));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        Suivi_global = new QFrame(Projet);
        Suivi_global->setObjectName("Suivi_global");
        Suivi_global->setGeometry(QRect(170, 670, 1161, 71));
        Suivi_global->setFrameShape(QFrame::Shape::StyledPanel);
        Suivi_global->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(Suivi_global);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 10, 211, 31));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_16 = new QLabel(Suivi_global);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(410, 10, 201, 20));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        lcdNumber = new QLCDNumber(Suivi_global);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(290, 10, 64, 23));
        lcdNumber_2 = new QLCDNumber(Suivi_global);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(290, 40, 64, 23));
        label_17 = new QLabel(Suivi_global);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(190, 40, 101, 21));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_18 = new QLabel(Suivi_global);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(230, 10, 51, 31));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_19 = new QLabel(Suivi_global);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(620, 10, 51, 21));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_20 = new QLabel(Suivi_global);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(760, 40, 51, 21));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_21 = new QLabel(Suivi_global);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(760, 10, 51, 21));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        label_22 = new QLabel(Suivi_global);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(620, 40, 51, 21));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe Script\";"));
        lcdNumber_3 = new QLCDNumber(Suivi_global);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(660, 10, 64, 23));
        lcdNumber_4 = new QLCDNumber(Suivi_global);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(660, 40, 64, 23));
        lcdNumber_5 = new QLCDNumber(Suivi_global);
        lcdNumber_5->setObjectName("lcdNumber_5");
        lcdNumber_5->setGeometry(QRect(800, 10, 64, 23));
        lcdNumber_6 = new QLCDNumber(Suivi_global);
        lcdNumber_6->setObjectName("lcdNumber_6");
        lcdNumber_6->setGeometry(QRect(800, 40, 64, 23));
        Suivi_restaurant = new QFrame(Projet);
        Suivi_restaurant->setObjectName("Suivi_restaurant");
        Suivi_restaurant->setGeometry(QRect(1340, 80, 161, 581));
        Suivi_restaurant->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/menu.jpg);"));
        Suivi_restaurant->setFrameShape(QFrame::Shape::StyledPanel);
        Suivi_restaurant->setFrameShadow(QFrame::Shadow::Raised);
        listWidget = new QListWidget(Suivi_restaurant);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 30, 141, 211));
        label_7 = new QLabel(Suivi_restaurant);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 10, 71, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        textBrowser = new QTextBrowser(Suivi_restaurant);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 270, 141, 301));
        label_8 = new QLabel(Suivi_restaurant);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 250, 121, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        widget = new QWidget(Projet);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 230, 120, 80));
        Restaurant = new QFrame(Projet);
        Restaurant->setObjectName("Restaurant");
        Restaurant->setGeometry(QRect(170, 80, 1161, 581));
        Restaurant->setFrameShape(QFrame::Shape::StyledPanel);
        Restaurant->setFrameShadow(QFrame::Shadow::Raised);
        Salle_de_restauration = new QFrame(Restaurant);
        Salle_de_restauration->setObjectName("Salle_de_restauration");
        Salle_de_restauration->setGeometry(QRect(570, 0, 591, 581));
        Salle_de_restauration->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/sol_cuisine.jpg);"));
        Salle_de_restauration->setFrameShape(QFrame::Shape::StyledPanel);
        Salle_de_restauration->setFrameShadow(QFrame::Shadow::Raised);
        Cuisine = new QFrame(Restaurant);
        Cuisine->setObjectName("Cuisine");
        Cuisine->setGeometry(QRect(0, 0, 551, 581));
        Cuisine->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/sol_cuisine.jpg);"));
        Cuisine->setFrameShape(QFrame::Shape::StyledPanel);
        Cuisine->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(Projet);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 10, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/music_pause_stop_control_icon_229126.png);"));
        pushButton_2 = new QPushButton(Projet);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 10, 51, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/arrow_forward_right_fast_icon_229133.png);"));
        pushButton_3 = new QPushButton(Projet);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 10, 51, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/video_music_player_play_icon_229094.png);"));
        pushButton_4 = new QPushButton(Projet);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(610, 10, 51, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug/Assets/control-stop_icon-icons.com_66496.png);"));
        label_11 = new QLabel(Projet);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 60, 71, 16));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        label_12 = new QLabel(Projet);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(360, 60, 71, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        label_13 = new QLabel(Projet);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(480, 60, 71, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        label_14 = new QLabel(Projet);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(610, 60, 71, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe Script\";"));
        Timer = new QTimeEdit(Projet);
        Timer->setObjectName("Timer");
        Timer->setGeometry(QRect(1370, 30, 118, 22));
        Timer->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1844, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "INGREDIENTS", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "RECETTES", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "NOMBRE DE COMMANDES :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "OCCUPATION DES TABLES :", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "EN ATTENTE", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "SERVIES", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "DE 2", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "DE 8", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "DE 6", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "DE 4", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "COUVERTS", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "PAUSE", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "SPEED", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWCXSTCZ_H

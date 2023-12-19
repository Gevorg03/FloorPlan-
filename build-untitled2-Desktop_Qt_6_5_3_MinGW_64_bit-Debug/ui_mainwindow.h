/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_floor1;
    QPushButton *pushButton_floor2;
    QLabel *label_ned_logo;
    QLabel *label_ysuib_logo;
    QLabel *label_ysu_img;
    QTabWidget *tabWidget_floorplan;
    QWidget *tab;
    QLabel *label_tab_floorplan1;
    QPushButton *pushButton_3;
    QPushButton *btn_in;
    QPushButton *btn_out;
    QLabel *label_room_name;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_29a;
    QPushButton *pushButton_30;
    QPushButton *pushButton_58;
    QPushButton *pushButton_31;
    QPushButton *pushButton_library;
    QPushButton *pushButton_wc_m;
    QPushButton *pushButton_wc_w1;
    QPushButton *pushButton_wc_w2;
    QPushButton *pushButton_computer_room;
    QPushButton *pushButton_xerox;
    QPushButton *pushButton_bujket;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *tab_floorplan2;
    QLabel *label_tab_floorplan2;
    QPushButton *btn_in2;
    QPushButton *btn_out2;
    QLabel *label_room_name2;
    QPushButton *pushButton_48;
    QPushButton *pushButton_49;
    QPushButton *pushButton_47;
    QPushButton *pushButton_51;
    QPushButton *pushButton_50;
    QPushButton *pushButton_52;
    QPushButton *pushButton_52a;
    QPushButton *pushButton_53;
    QPushButton *pushButton_54;
    QPushButton *pushButton_54a;
    QPushButton *pushButton_55;
    QPushButton *pushButton_57;
    QPushButton *pushButton_56;
    QPushButton *pushButton_46;
    QPushButton *pushButton_59;
    QPushButton *btn_left;
    QPushButton *btn_right;
    QPushButton *pushButton_45;
    QPushButton *pushButton_44;
    QPushButton *pushButton_41;
    QPushButton *pushButton_40;
    QPushButton *pushButton_39;
    QPushButton *pushButton_38;
    QLabel *label_restart_logo;
    QScrollArea *area;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *label_varchakan_bajin;
    QComboBox *tnorinutyun;
    QLabel *label_bajinner;
    QComboBox *karucvatsqayin;
    QLabel *label_dekan;
    QComboBox *dekanatner;
    QLabel *label_lsaranner;
    QComboBox *lsaranner;
    QLabel *label_ambionner;
    QComboBox *ambionner;
    QLabel *label_ayl;
    QComboBox *varchakan;
    QLabel *label_kentronner;
    QComboBox *kentronner;
    QLabel *label_tntesakan;
    QComboBox *tntesakan;
    QLabel *label;
    QPushButton *library;
    QPushButton *bujket;
    QPushButton *computer_room;
    QPushButton *xerox;
    QPushButton *wc;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_ru;
    QPushButton *pushButton_hy;
    QPushButton *pushButton_en;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1564, 1145);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_floor1 = new QPushButton(centralwidget);
        pushButton_floor1->setObjectName("pushButton_floor1");
        pushButton_floor1->setMaximumSize(QSize(150, 40));
        pushButton_floor1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(112, 146, 190);\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton_floor1);

        pushButton_floor2 = new QPushButton(centralwidget);
        pushButton_floor2->setObjectName("pushButton_floor2");
        pushButton_floor2->setMaximumSize(QSize(150, 40));
        pushButton_floor2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(112, 146, 190);\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton_floor2);


        gridLayout->addLayout(verticalLayout_3, 3, 5, 1, 1);

        label_ned_logo = new QLabel(centralwidget);
        label_ned_logo->setObjectName("label_ned_logo");
        label_ned_logo->setEnabled(true);
        label_ned_logo->setMaximumSize(QSize(268, 78));
        label_ned_logo->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ned.png")));
        label_ned_logo->setScaledContents(true);

        gridLayout->addWidget(label_ned_logo, 3, 2, 1, 1);

        label_ysuib_logo = new QLabel(centralwidget);
        label_ysuib_logo->setObjectName("label_ysuib_logo");
        label_ysuib_logo->setMaximumSize(QSize(86, 81));
        label_ysuib_logo->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysu.png")));
        label_ysuib_logo->setScaledContents(true);

        gridLayout->addWidget(label_ysuib_logo, 3, 0, 1, 1);

        label_ysu_img = new QLabel(centralwidget);
        label_ysu_img->setObjectName("label_ysu_img");
        label_ysu_img->setMaximumSize(QSize(210, 156));
        label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_1.png")));
        label_ysu_img->setScaledContents(true);

        gridLayout->addWidget(label_ysu_img, 3, 6, 1, 1);

        tabWidget_floorplan = new QTabWidget(centralwidget);
        tabWidget_floorplan->setObjectName("tabWidget_floorplan");
        tabWidget_floorplan->setMaximumSize(QSize(16777215, 16777215));
        tabWidget_floorplan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none;"));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_tab_floorplan1 = new QLabel(tab);
        label_tab_floorplan1->setObjectName("label_tab_floorplan1");
        label_tab_floorplan1->setGeometry(QRect(-15, -10, 1221, 561));
        label_tab_floorplan1->setStyleSheet(QString::fromUtf8(""));
        label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/floor1.png")));
        label_tab_floorplan1->setScaledContents(true);
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 80, 91, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;"));
        btn_in = new QPushButton(tab);
        btn_in->setObjectName("btn_in");
        btn_in->setGeometry(QRect(460, 440, 100, 41));
        btn_in->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        btn_out = new QPushButton(tab);
        btn_out->setObjectName("btn_out");
        btn_out->setGeometry(QRect(640, 440, 100, 41));
        btn_out->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        label_room_name = new QLabel(tab);
        label_room_name->setObjectName("label_room_name");
        label_room_name->setGeometry(QRect(320, 320, 561, 111));
        label_room_name->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"font: 700 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"text-align: center;"));
        label_room_name->setAlignment(Qt::AlignCenter);
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(270, 160, 57, 61));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(330, 180, 61, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_19 = new QPushButton(tab);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(540, 40, 41, 81));
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_21 = new QPushButton(tab);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(620, 40, 41, 81));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_28 = new QPushButton(tab);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(840, 160, 101, 61));
        pushButton_28->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_29 = new QPushButton(tab);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(1050, 220, 61, 61));
        pushButton_29->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_29a = new QPushButton(tab);
        pushButton_29a->setObjectName("pushButton_29a");
        pushButton_29a->setGeometry(QRect(1120, 220, 51, 61));
        pushButton_29a->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_30 = new QPushButton(tab);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(1080, 300, 91, 51));
        pushButton_30->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_58 = new QPushButton(tab);
        pushButton_58->setObjectName("pushButton_58");
        pushButton_58->setGeometry(QRect(910, 430, 61, 61));
        pushButton_58->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_31 = new QPushButton(tab);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(980, 390, 61, 101));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_library = new QPushButton(tab);
        pushButton_library->setObjectName("pushButton_library");
        pushButton_library->setGeometry(QRect(500, 150, 201, 61));
        pushButton_library->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_wc_m = new QPushButton(tab);
        pushButton_wc_m->setObjectName("pushButton_wc_m");
        pushButton_wc_m->setGeometry(QRect(940, 230, 31, 51));
        pushButton_wc_m->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_wc_w1 = new QPushButton(tab);
        pushButton_wc_w1->setObjectName("pushButton_wc_w1");
        pushButton_wc_w1->setGeometry(QRect(990, 230, 51, 51));
        pushButton_wc_w1->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_wc_w2 = new QPushButton(tab);
        pushButton_wc_w2->setObjectName("pushButton_wc_w2");
        pushButton_wc_w2->setGeometry(QRect(420, 160, 21, 61));
        pushButton_wc_w2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_computer_room = new QPushButton(tab);
        pushButton_computer_room->setObjectName("pushButton_computer_room");
        pushButton_computer_room->setGeometry(QRect(810, 80, 121, 61));
        pushButton_computer_room->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_xerox = new QPushButton(tab);
        pushButton_xerox->setObjectName("pushButton_xerox");
        pushButton_xerox->setGeometry(QRect(270, 250, 61, 41));
        pushButton_xerox->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_bujket = new QPushButton(tab);
        pushButton_bujket->setObjectName("pushButton_bujket");
        pushButton_bujket->setGeometry(QRect(470, 150, 21, 61));
        pushButton_bujket->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-12, -5, 221, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1200, 10, 49, 581));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget_floorplan->addTab(tab, QString());
        tab_floorplan2 = new QWidget();
        tab_floorplan2->setObjectName("tab_floorplan2");
        label_tab_floorplan2 = new QLabel(tab_floorplan2);
        label_tab_floorplan2->setObjectName("label_tab_floorplan2");
        label_tab_floorplan2->setGeometry(QRect(-30, -30, 1251, 601));
        label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/floor2_L.png")));
        label_tab_floorplan2->setScaledContents(true);
        btn_in2 = new QPushButton(tab_floorplan2);
        btn_in2->setObjectName("btn_in2");
        btn_in2->setGeometry(QRect(460, 440, 100, 41));
        btn_in2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        btn_out2 = new QPushButton(tab_floorplan2);
        btn_out2->setObjectName("btn_out2");
        btn_out2->setGeometry(QRect(640, 440, 100, 41));
        btn_out2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        label_room_name2 = new QLabel(tab_floorplan2);
        label_room_name2->setObjectName("label_room_name2");
        label_room_name2->setGeometry(QRect(320, 320, 561, 111));
        label_room_name2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"font: 700 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"text-align: center;"));
        label_room_name2->setAlignment(Qt::AlignCenter);
        pushButton_48 = new QPushButton(tab_floorplan2);
        pushButton_48->setObjectName("pushButton_48");
        pushButton_48->setGeometry(QRect(609, 10, 41, 91));
        pushButton_48->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_49 = new QPushButton(tab_floorplan2);
        pushButton_49->setObjectName("pushButton_49");
        pushButton_49->setGeometry(QRect(1050, 490, 41, 91));
        pushButton_49->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_47 = new QPushButton(tab_floorplan2);
        pushButton_47->setObjectName("pushButton_47");
        pushButton_47->setGeometry(QRect(609, 143, 41, 71));
        pushButton_47->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_51 = new QPushButton(tab_floorplan2);
        pushButton_51->setObjectName("pushButton_51");
        pushButton_51->setGeometry(QRect(680, 70, 131, 61));
        pushButton_51->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_50 = new QPushButton(tab_floorplan2);
        pushButton_50->setObjectName("pushButton_50");
        pushButton_50->setGeometry(QRect(680, 140, 101, 61));
        pushButton_50->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_52 = new QPushButton(tab_floorplan2);
        pushButton_52->setObjectName("pushButton_52");
        pushButton_52->setGeometry(QRect(820, 70, 61, 61));
        pushButton_52->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_52a = new QPushButton(tab_floorplan2);
        pushButton_52a->setObjectName("pushButton_52a");
        pushButton_52a->setGeometry(QRect(890, 70, 51, 61));
        pushButton_52a->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_53 = new QPushButton(tab_floorplan2);
        pushButton_53->setObjectName("pushButton_53");
        pushButton_53->setGeometry(QRect(850, 160, 91, 41));
        pushButton_53->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_54 = new QPushButton(tab_floorplan2);
        pushButton_54->setObjectName("pushButton_54");
        pushButton_54->setGeometry(QRect(1050, 190, 61, 61));
        pushButton_54->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_54a = new QPushButton(tab_floorplan2);
        pushButton_54a->setObjectName("pushButton_54a");
        pushButton_54a->setGeometry(QRect(1120, 190, 61, 61));
        pushButton_54a->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_55 = new QPushButton(tab_floorplan2);
        pushButton_55->setObjectName("pushButton_55");
        pushButton_55->setGeometry(QRect(1090, 280, 91, 41));
        pushButton_55->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_57 = new QPushButton(tab_floorplan2);
        pushButton_57->setObjectName("pushButton_57");
        pushButton_57->setGeometry(QRect(920, 330, 61, 131));
        pushButton_57->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_56 = new QPushButton(tab_floorplan2);
        pushButton_56->setObjectName("pushButton_56");
        pushButton_56->setGeometry(QRect(990, 370, 51, 91));
        pushButton_56->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_46 = new QPushButton(tab_floorplan2);
        pushButton_46->setObjectName("pushButton_46");
        pushButton_46->setGeometry(QRect(570, 10, 41, 91));
        pushButton_46->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_59 = new QPushButton(tab_floorplan2);
        pushButton_59->setObjectName("pushButton_59");
        pushButton_59->setGeometry(QRect(1000, 490, 41, 91));
        pushButton_59->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        btn_left = new QPushButton(tab_floorplan2);
        btn_left->setObjectName("btn_left");
        btn_left->setGeometry(QRect(460, 440, 100, 41));
        btn_left->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        btn_right = new QPushButton(tab_floorplan2);
        btn_right->setObjectName("btn_right");
        btn_right->setGeometry(QRect(640, 440, 100, 41));
        btn_right->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border: none;\n"
"border-radius: 3px;\n"
"background-color: rgb(112, 146, 190);"));
        pushButton_45 = new QPushButton(tab_floorplan2);
        pushButton_45->setObjectName("pushButton_45");
        pushButton_45->setGeometry(QRect(520, 10, 41, 91));
        pushButton_45->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_44 = new QPushButton(tab_floorplan2);
        pushButton_44->setObjectName("pushButton_44");
        pushButton_44->setGeometry(QRect(520, 160, 81, 51));
        pushButton_44->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_41 = new QPushButton(tab_floorplan2);
        pushButton_41->setObjectName("pushButton_41");
        pushButton_41->setGeometry(QRect(440, 60, 71, 71));
        pushButton_41->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_40 = new QPushButton(tab_floorplan2);
        pushButton_40->setObjectName("pushButton_40");
        pushButton_40->setGeometry(QRect(390, 70, 41, 61));
        pushButton_40->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_39 = new QPushButton(tab_floorplan2);
        pushButton_39->setObjectName("pushButton_39");
        pushButton_39->setGeometry(QRect(260, 70, 121, 61));
        pushButton_39->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_38 = new QPushButton(tab_floorplan2);
        pushButton_38->setObjectName("pushButton_38");
        pushButton_38->setGeometry(QRect(260, 140, 81, 61));
        pushButton_38->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        tabWidget_floorplan->addTab(tab_floorplan2, QString());

        gridLayout->addWidget(tabWidget_floorplan, 14, 0, 1, 7);

        label_restart_logo = new QLabel(centralwidget);
        label_restart_logo->setObjectName("label_restart_logo");
        label_restart_logo->setMaximumSize(QSize(180, 72));
        label_restart_logo->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/restart.png")));
        label_restart_logo->setScaledContents(true);

        gridLayout->addWidget(label_restart_logo, 3, 1, 1, 1);

        area = new QScrollArea(centralwidget);
        area->setObjectName("area");
        area->setMaximumSize(QSize(300, 16777215));
        area->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 185, 196);\n"
"\n"
"\n"
""));
        area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 298, 1082));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(280, 104));
        pushButton->setMaximumSize(QSize(280, 300));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(../img/Logo/ssc.png)"));

        verticalLayout->addWidget(pushButton);

        label_varchakan_bajin = new QLabel(scrollAreaWidgetContents_2);
        label_varchakan_bajin->setObjectName("label_varchakan_bajin");
        label_varchakan_bajin->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_varchakan_bajin);

        tnorinutyun = new QComboBox(scrollAreaWidgetContents_2);
        tnorinutyun->setObjectName("tnorinutyun");
        tnorinutyun->setMaximumSize(QSize(280, 16777215));
        tnorinutyun->setStyleSheet(QString::fromUtf8("#tnorinutyun{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#tnorinutyun::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(tnorinutyun);

        label_bajinner = new QLabel(scrollAreaWidgetContents_2);
        label_bajinner->setObjectName("label_bajinner");
        label_bajinner->setMaximumSize(QSize(280, 16777215));
        label_bajinner->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_bajinner);

        karucvatsqayin = new QComboBox(scrollAreaWidgetContents_2);
        karucvatsqayin->setObjectName("karucvatsqayin");
        karucvatsqayin->setMaximumSize(QSize(280, 16777215));
        karucvatsqayin->setStyleSheet(QString::fromUtf8("#karucvatsqayin{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#karucvatsqayin::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(karucvatsqayin);

        label_dekan = new QLabel(scrollAreaWidgetContents_2);
        label_dekan->setObjectName("label_dekan");
        label_dekan->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_dekan);

        dekanatner = new QComboBox(scrollAreaWidgetContents_2);
        dekanatner->setObjectName("dekanatner");
        dekanatner->setMaximumSize(QSize(280, 16777215));
        dekanatner->setStyleSheet(QString::fromUtf8("#dekanatner{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#dekanatner::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(dekanatner);

        label_lsaranner = new QLabel(scrollAreaWidgetContents_2);
        label_lsaranner->setObjectName("label_lsaranner");
        label_lsaranner->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_lsaranner);

        lsaranner = new QComboBox(scrollAreaWidgetContents_2);
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->addItem(QString());
        lsaranner->setObjectName("lsaranner");
        lsaranner->setMaximumSize(QSize(280, 16777215));
        lsaranner->setStyleSheet(QString::fromUtf8("#lsaranner{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#lsaranner::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical{\n"
"border: none;\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical{\n"
"border: none;\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical{\n"
"border: none;\n"
"background-color: transparent;\n"
"}\n"
""));

        verticalLayout->addWidget(lsaranner);

        label_ambionner = new QLabel(scrollAreaWidgetContents_2);
        label_ambionner->setObjectName("label_ambionner");
        label_ambionner->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(label_ambionner);

        ambionner = new QComboBox(scrollAreaWidgetContents_2);
        ambionner->setObjectName("ambionner");
        ambionner->setMaximumSize(QSize(280, 16777215));
        ambionner->setStyleSheet(QString::fromUtf8("#ambionner{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#ambionner::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(ambionner);

        label_ayl = new QLabel(scrollAreaWidgetContents_2);
        label_ayl->setObjectName("label_ayl");
        label_ayl->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_ayl);

        varchakan = new QComboBox(scrollAreaWidgetContents_2);
        varchakan->setObjectName("varchakan");
        varchakan->setMaximumSize(QSize(280, 16777215));
        varchakan->setStyleSheet(QString::fromUtf8("#varchakan{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#varchakan::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(varchakan);

        label_kentronner = new QLabel(scrollAreaWidgetContents_2);
        label_kentronner->setObjectName("label_kentronner");
        label_kentronner->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_kentronner);

        kentronner = new QComboBox(scrollAreaWidgetContents_2);
        kentronner->setObjectName("kentronner");
        kentronner->setMaximumSize(QSize(280, 16777215));
        kentronner->setStyleSheet(QString::fromUtf8("#kentronner{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#kentronner::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(kentronner);

        label_tntesakan = new QLabel(scrollAreaWidgetContents_2);
        label_tntesakan->setObjectName("label_tntesakan");
        label_tntesakan->setMaximumSize(QSize(280, 16777215));
        label_tntesakan->setStyleSheet(QString::fromUtf8("color:  rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_tntesakan);

        tntesakan = new QComboBox(scrollAreaWidgetContents_2);
        tntesakan->setObjectName("tntesakan");
        tntesakan->setMaximumSize(QSize(280, 16777215));
        tntesakan->setStyleSheet(QString::fromUtf8("#tntesakan{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#tntesakan::drop-down{\n"
"border: 0px;\n"
"}\n"
"\n"
"QListView{\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"QListView:item{\n"
"margin: 1px 0px 1px 0px;\n"
"}"));

        verticalLayout->addWidget(tntesakan);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 7));

        verticalLayout->addWidget(label);

        library = new QPushButton(scrollAreaWidgetContents_2);
        library->setObjectName("library");
        library->setMaximumSize(QSize(280, 16777215));
        library->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout->addWidget(library);

        bujket = new QPushButton(scrollAreaWidgetContents_2);
        bujket->setObjectName("bujket");
        bujket->setMaximumSize(QSize(280, 16777215));
        bujket->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout->addWidget(bujket);

        computer_room = new QPushButton(scrollAreaWidgetContents_2);
        computer_room->setObjectName("computer_room");
        computer_room->setMaximumSize(QSize(280, 16777215));
        computer_room->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout->addWidget(computer_room);

        xerox = new QPushButton(scrollAreaWidgetContents_2);
        xerox->setObjectName("xerox");
        xerox->setMaximumSize(QSize(280, 16777215));
        xerox->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout->addWidget(xerox);

        wc = new QPushButton(scrollAreaWidgetContents_2);
        wc->setObjectName("wc");
        wc->setMaximumSize(QSize(280, 16777215));
        wc->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(65, 136, 188);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;\n"
"border-radius: 3px;"));

        verticalLayout->addWidget(wc);

        area->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(area, 3, 7, 12, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_ru = new QPushButton(centralwidget);
        pushButton_ru->setObjectName("pushButton_ru");

        verticalLayout_2->addWidget(pushButton_ru);

        pushButton_hy = new QPushButton(centralwidget);
        pushButton_hy->setObjectName("pushButton_hy");

        verticalLayout_2->addWidget(pushButton_hy);

        pushButton_en = new QPushButton(centralwidget);
        pushButton_en->setObjectName("pushButton_en");

        verticalLayout_2->addWidget(pushButton_en);


        gridLayout->addLayout(verticalLayout_2, 3, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1564, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_floorplan->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_floor1->setText(QCoreApplication::translate("MainWindow", "1-\325\253\325\266 \325\260\325\241\326\200\325\257", nullptr));
        pushButton_floor2->setText(QCoreApplication::translate("MainWindow", "2-\326\200\325\244 \325\260\325\241\326\200\325\257", nullptr));
        label_ned_logo->setText(QString());
        label_ysuib_logo->setText(QString());
        label_ysu_img->setText(QString());
        label_tab_floorplan1->setText(QString());
        pushButton_3->setText(QString());
        btn_in->setText(QCoreApplication::translate("MainWindow", "\325\206\325\245\326\200\325\275", nullptr));
        btn_out->setText(QCoreApplication::translate("MainWindow", "\324\264\325\270\326\202\326\200\325\275", nullptr));
        label_room_name->setText(QString());
        pushButton_11->setText(QString());
        pushButton_10->setText(QString());
        pushButton_19->setText(QString());
        pushButton_21->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        pushButton_29a->setText(QString());
        pushButton_30->setText(QString());
        pushButton_58->setText(QString());
        pushButton_31->setText(QString());
        pushButton_library->setText(QString());
        pushButton_wc_m->setText(QString());
        pushButton_wc_w1->setText(QString());
        pushButton_wc_w2->setText(QString());
        pushButton_computer_room->setText(QString());
        pushButton_xerox->setText(QString());
        pushButton_bujket->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        tabWidget_floorplan->setTabText(tabWidget_floorplan->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_tab_floorplan2->setText(QString());
        btn_in2->setText(QCoreApplication::translate("MainWindow", "\325\206\325\245\326\200\325\275", nullptr));
        btn_out2->setText(QCoreApplication::translate("MainWindow", "\324\264\325\270\326\202\326\200\325\275", nullptr));
        label_room_name2->setText(QString());
        pushButton_48->setText(QString());
        pushButton_49->setText(QString());
        pushButton_47->setText(QString());
        pushButton_51->setText(QString());
        pushButton_50->setText(QString());
        pushButton_52->setText(QString());
        pushButton_52a->setText(QString());
        pushButton_53->setText(QString());
        pushButton_54->setText(QString());
        pushButton_54a->setText(QString());
        pushButton_55->setText(QString());
        pushButton_57->setText(QString());
        pushButton_56->setText(QString());
        pushButton_46->setText(QString());
        pushButton_59->setText(QString());
        btn_left->setText(QCoreApplication::translate("MainWindow", "\325\201\325\241\325\255 \325\264\325\241\325\275", nullptr));
        btn_right->setText(QCoreApplication::translate("MainWindow", "\324\261\325\273 \325\264\325\241\325\275", nullptr));
        pushButton_45->setText(QString());
        pushButton_44->setText(QString());
        pushButton_41->setText(QString());
        pushButton_40->setText(QString());
        pushButton_39->setText(QString());
        pushButton_38->setText(QString());
        tabWidget_floorplan->setTabText(tabWidget_floorplan->indexOf(tab_floorplan2), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_restart_logo->setText(QString());
        pushButton->setText(QString());
        label_varchakan_bajin->setText(QCoreApplication::translate("MainWindow", "\325\217\325\266\326\205\326\200\325\253\325\266\325\270\326\202\325\251\325\265\325\270\326\202\325\266", nullptr));
        label_bajinner->setText(QCoreApplication::translate("MainWindow", "\324\277\325\241\325\274\325\270\326\202\326\201\325\276\325\241\325\256\326\204\325\241\325\265\325\253\325\266 \325\275\325\277\325\270\326\200\325\241\325\242\325\241\325\252\325\241\325\266\325\270\326\202\325\264\325\266\325\245\326\200", nullptr));
        label_dekan->setText(QCoreApplication::translate("MainWindow", "\324\264\325\245\325\257\325\241\325\266 / \324\264\325\245\325\257\325\241\325\266\325\241\325\266\325\277\325\266\325\245\326\200", nullptr));
        label_lsaranner->setText(QCoreApplication::translate("MainWindow", "\324\274\325\275\325\241\326\200\325\241\325\266\325\266\325\245\326\200", nullptr));
        lsaranner->setItemText(0, QCoreApplication::translate("MainWindow", "10", nullptr));
        lsaranner->setItemText(1, QCoreApplication::translate("MainWindow", "11", nullptr));
        lsaranner->setItemText(2, QCoreApplication::translate("MainWindow", "19", nullptr));
        lsaranner->setItemText(3, QCoreApplication::translate("MainWindow", "21", nullptr));
        lsaranner->setItemText(4, QCoreApplication::translate("MainWindow", "28", nullptr));
        lsaranner->setItemText(5, QCoreApplication::translate("MainWindow", "29", nullptr));
        lsaranner->setItemText(6, QCoreApplication::translate("MainWindow", "29\324\261", nullptr));
        lsaranner->setItemText(7, QCoreApplication::translate("MainWindow", "30", nullptr));
        lsaranner->setItemText(8, QCoreApplication::translate("MainWindow", "31", nullptr));
        lsaranner->setItemText(9, QCoreApplication::translate("MainWindow", "38", nullptr));
        lsaranner->setItemText(10, QCoreApplication::translate("MainWindow", "39", nullptr));
        lsaranner->setItemText(11, QCoreApplication::translate("MainWindow", "40", nullptr));
        lsaranner->setItemText(12, QCoreApplication::translate("MainWindow", "41", nullptr));
        lsaranner->setItemText(13, QCoreApplication::translate("MainWindow", "44", nullptr));
        lsaranner->setItemText(14, QCoreApplication::translate("MainWindow", "45", nullptr));
        lsaranner->setItemText(15, QCoreApplication::translate("MainWindow", "46", nullptr));
        lsaranner->setItemText(16, QCoreApplication::translate("MainWindow", "47", nullptr));
        lsaranner->setItemText(17, QCoreApplication::translate("MainWindow", "48", nullptr));
        lsaranner->setItemText(18, QCoreApplication::translate("MainWindow", "50", nullptr));
        lsaranner->setItemText(19, QCoreApplication::translate("MainWindow", "51", nullptr));
        lsaranner->setItemText(20, QCoreApplication::translate("MainWindow", "52", nullptr));
        lsaranner->setItemText(21, QCoreApplication::translate("MainWindow", "52\324\261", nullptr));
        lsaranner->setItemText(22, QCoreApplication::translate("MainWindow", "53", nullptr));
        lsaranner->setItemText(23, QCoreApplication::translate("MainWindow", "54", nullptr));
        lsaranner->setItemText(24, QCoreApplication::translate("MainWindow", "54\324\261", nullptr));
        lsaranner->setItemText(25, QCoreApplication::translate("MainWindow", "55", nullptr));
        lsaranner->setItemText(26, QCoreApplication::translate("MainWindow", "56", nullptr));
        lsaranner->setItemText(27, QCoreApplication::translate("MainWindow", "57", nullptr));
        lsaranner->setItemText(28, QCoreApplication::translate("MainWindow", "58", nullptr));

        label_ambionner->setText(QCoreApplication::translate("MainWindow", "\324\261\325\264\325\242\325\253\325\270\325\266\325\266\325\245\326\200", nullptr));
        label_ayl->setText(QCoreApplication::translate("MainWindow", "\325\216\325\241\326\200\325\271\325\241\325\257\325\241\325\266 \325\275\325\277\325\270\326\200\325\241\325\242\325\241\325\252\325\241\325\266\325\266\325\270\326\202\325\264\325\266\325\245\326\200", nullptr));
        label_kentronner->setText(QCoreApplication::translate("MainWindow", "\325\210\325\271 \326\206\325\270\326\200\325\264\325\241\325\254 \325\257\326\200\325\251\325\241\325\257\325\241\325\266 \325\257\325\245\325\266\325\277\326\200\325\270\325\266\325\266\325\245\326\200", nullptr));
        label_tntesakan->setText(QCoreApplication::translate("MainWindow", "\325\217\325\266\325\277\325\245\325\275\325\241\325\257\325\241\325\266 \325\264\325\241\325\275\325\253 \325\245\325\266\325\251\325\241\325\257\325\241\325\274\325\270\326\202\326\201\325\276\325\241\325\256\326\204\325\266\325\245\326\200", nullptr));
        label->setText(QString());
        library->setText(QCoreApplication::translate("MainWindow", "\324\263\326\200\325\241\325\244\325\241\326\200\325\241\325\266", nullptr));
        bujket->setText(QCoreApplication::translate("MainWindow", "\324\262\325\270\326\202\325\252\325\257\325\245\325\277", nullptr));
        computer_room->setText(QCoreApplication::translate("MainWindow", "\325\200\325\241\325\264\325\241\325\257\325\241\326\200\325\243\325\271\325\241\325\265\325\253\325\266 \325\275\326\200\325\241\325\260", nullptr));
        xerox->setText(QCoreApplication::translate("MainWindow", "\325\212\325\241\325\277\325\263\325\245\325\266\325\241\325\260\325\241\325\266\325\264\325\241\325\266 \325\275\325\245\325\266\325\265\325\241\325\257", nullptr));
        wc->setText(QCoreApplication::translate("MainWindow", "\325\215\325\241\325\266\325\260\325\241\325\266\325\243\325\270\326\202\325\265\326\201 ", nullptr));
        pushButton_ru->setText(QCoreApplication::translate("MainWindow", "ru", nullptr));
        pushButton_hy->setText(QCoreApplication::translate("MainWindow", "hy", nullptr));
        pushButton_en->setText(QCoreApplication::translate("MainWindow", "en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

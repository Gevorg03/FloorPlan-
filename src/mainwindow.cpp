#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include "studentssmartclub.h"
#include <QTimer>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    Constants& constants = Constants::getInstance();
    std::string in = "";
    std::string out = "";
    std::string roomName = "";
    std::string language = "hy";
    ui->setupUi(this);
    setComboBoxLanguages("hy");
    ui->tabWidget_floorplan->tabBar()->hide(); //hide tabbar items
    ui->statusbar->hide(); // hide the status bar scroll
    ui->area->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setInAndOutButtonsVisibility(false); // by default hide in and out buttons
    setRoomNameVisibility(false, ""); // by default hide the room's name
    ui->tabWidget_floorplan->setCurrentIndex(0); // Set the first tab in the tab bar as the default.
    setLeftAndRightButtonsVisibility(false); // by default hide in and out buttons
    timer = new QTimer(this); // Allocate timer on heap
    QObject::connect(timer, &QTimer::timeout, this, [=](){
        ui->tabWidget_floorplan->setCurrentIndex(0);
        setInAndOutButtonsVisibility(false);
        setRoomNameVisibility(false, "");
        setInAndOutButtonsVisibility2(false);
        setRoomNameVisibility2(false, "");
        setLeftAndRightButtonsVisibility(false);
        ui->label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_1.png")));
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/floor2_L.png")));
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/floor1.png")));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_floor1_clicked()
{
    ui->tabWidget_floorplan->setCurrentIndex(0);
    ui->label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_1.png")));
    ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/floor1.png")));
    startTimer();
}


void MainWindow::on_pushButton_floor2_clicked()
{
    ui->tabWidget_floorplan->setCurrentIndex(1);
    ui->label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_2.png")));
    ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/floor2_L.png")));
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    setLeftAndRightButtonsVisibility(true);
    startTimer();
}

void MainWindow::setInAndOutButtonsVisibility(bool isVisibile){
    ui->btn_in->setVisible(isVisibile);
    ui->btn_out->setVisible(isVisibile);
}


void MainWindow::setInAndOutButtonsVisibility2(bool isVisibile){
    ui->btn_in2->setVisible(isVisibile);
    ui->btn_out2->setVisible(isVisibile);
}

void MainWindow::setLeftAndRightButtonsVisibility(bool isVisibile){
    ui->btn_left->setVisible(isVisibile);
    ui->btn_right->setVisible(isVisibile);
}

void MainWindow::setRoomNameVisibility(bool isVisibile, std::string roomName){
    ui->label_room_name->setVisible(isVisibile);
    if (language == "en") {
        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tnorinutyunEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.karucvatsqayinEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.dekanatnerEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.ambionnerEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.varchakanEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.kentronnerEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tntesakanEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.buttonsEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
    }
    else if (language == "ru") {
        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tnorinutyunEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.karucvatsqayinEn[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.dekanatnerRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.ambionnerRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.varchakanRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.kentronnerRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tntesakanRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.buttonsRu[i];
                ui->label_room_name->setText(QString::fromStdString(roomName));
                return;
            }
        }
    };
    ui->label_room_name->setText(QString::fromStdString(roomName));


}

void MainWindow::setRoomNameVisibility2(bool isVisibile, std::string roomName){
    ui->label_room_name2->setVisible(isVisibile);
    if (language == "en") {
        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tnorinutyunEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.karucvatsqayinEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.dekanatnerEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.ambionnerEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.varchakanEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.kentronnerEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tntesakanEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.buttonsEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
    }
    else if (language == "ru") {
        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tnorinutyunEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.karucvatsqayinEn[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.dekanatnerRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.ambionnerRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.varchakanRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.kentronnerRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.tntesakanRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(roomName)) {
                std::string roomName = constants.buttonsRu[i];
                ui->label_room_name2->setText(QString::fromStdString(roomName));
                return;
            }
        }
    };
    ui->label_room_name2->setText(QString::fromStdString(roomName));


}

void MainWindow::translateButtonsText(std::string language) {
    if (language == "hy") {
        ui->library->setText(QString::fromStdString(constants.buttonsHy[0]));
        ui->bujket->setText(QString::fromStdString(constants.buttonsHy[1]));
        ui->computer_room->setText(QString::fromStdString(constants.buttonsHy[2]));
        ui->xerox->setText(QString::fromStdString(constants.buttonsHy[3]));
        ui->wc->setText(QString::fromStdString(constants.buttonsHy[4]));
        ui->pushButton_floor1->setText(QString::fromStdString(constants.buttonsHy[5]));
        ui->pushButton_floor2->setText(QString::fromStdString(constants.buttonsHy[6]));
        ui->btn_in->setText(QString::fromStdString(constants.buttonsHy[7]));
        ui->btn_in2->setText(QString::fromStdString(constants.buttonsHy[7]));
        ui->btn_out->setText(QString::fromStdString(constants.buttonsHy[8]));
        ui->btn_out2->setText(QString::fromStdString(constants.buttonsHy[8]));
        ui->btn_left->setText(QString::fromStdString(constants.buttonsHy[9]));
        ui->btn_right->setText(QString::fromStdString(constants.buttonsHy[10]));
    }
    else if (language == "ru") {
        ui->library->setText(QString::fromStdString(constants.buttonsRu[0]));
        ui->bujket->setText(QString::fromStdString(constants.buttonsRu[1]));
        ui->computer_room->setText(QString::fromStdString(constants.buttonsRu[2]));
        ui->xerox->setText(QString::fromStdString(constants.buttonsRu[3]));
        ui->wc->setText(QString::fromStdString(constants.buttonsRu[4]));
        ui->pushButton_floor1->setText(QString::fromStdString(constants.buttonsRu[5]));
        ui->pushButton_floor2->setText(QString::fromStdString(constants.buttonsRu[6]));
        ui->btn_in->setText(QString::fromStdString(constants.buttonsRu[7]));
        ui->btn_in2->setText(QString::fromStdString(constants.buttonsRu[7]));
        ui->btn_out->setText(QString::fromStdString(constants.buttonsRu[8]));
        ui->btn_out2->setText(QString::fromStdString(constants.buttonsRu[8]));
        ui->btn_left->setText(QString::fromStdString(constants.buttonsRu[9]));
        ui->btn_right->setText(QString::fromStdString(constants.buttonsRu[10]));
    }
    else if (language == "en") {
        ui->library->setText(QString::fromStdString(constants.buttonsEn[0]));
        ui->bujket->setText(QString::fromStdString(constants.buttonsEn[1]));
        ui->computer_room->setText(QString::fromStdString(constants.buttonsEn[2]));
        ui->xerox->setText(QString::fromStdString(constants.buttonsEn[3]));
        ui->wc->setText(QString::fromStdString(constants.buttonsEn[4]));
        ui->pushButton_floor1->setText(QString::fromStdString(constants.buttonsEn[5]));
        ui->pushButton_floor2->setText(QString::fromStdString(constants.buttonsEn[6]));
        ui->btn_in->setText(QString::fromStdString(constants.buttonsEn[7]));
        ui->btn_in2->setText(QString::fromStdString(constants.buttonsEn[7]));
        ui->btn_out->setText(QString::fromStdString(constants.buttonsEn[8]));
        ui->btn_out2->setText(QString::fromStdString(constants.buttonsEn[8]));
        ui->btn_left->setText(QString::fromStdString(constants.buttonsEn[9]));
        ui->btn_right->setText(QString::fromStdString(constants.buttonsEn[10]));
    }
}

void MainWindow::disableLeftPartButtons(bool isDisable){
    // Disable left part buttons

    ui->pushButton_38->setEnabled(isDisable);
    ui->pushButton_39->setEnabled(isDisable);
    ui->pushButton_40->setEnabled(isDisable);
    ui->pushButton_41->setEnabled(isDisable);
    ui->pushButton_44->setEnabled(isDisable);
    ui->pushButton_45->setEnabled(isDisable);
    ui->pushButton_46->setEnabled(isDisable);
    ui->pushButton_47->setEnabled(isDisable);
    ui->pushButton_48->setEnabled(isDisable);
}

void MainWindow::disableRightPartButtons(bool isDisable) {
    // Disable right part buttons

    ui->pushButton_50->setEnabled(isDisable);
    ui->pushButton_51->setEnabled(isDisable);
    ui->pushButton_52->setEnabled(isDisable);
    ui->pushButton_52a->setEnabled(isDisable);
    ui->pushButton_53->setEnabled(isDisable);
    ui->pushButton_54->setEnabled(isDisable);
    ui->pushButton_54a->setEnabled(isDisable);
    ui->pushButton_55->setEnabled(isDisable);
    ui->pushButton_56->setEnabled(isDisable);
    ui->pushButton_57->setEnabled(isDisable);
}


void MainWindow::startTimer(){
    timer->setSingleShot(true); // Set to single shot mode
    timer->start(timeoutDuration); // Start the timer
}

std::string MainWindow::removeNewLines(std::string text) {
    size_t found = text.find("\n");
    while (found != std::string::npos) {
        text.erase(found, 1); // Erase the newline character
        found = text.find("\n", found); // Find the next occurrence
    }
    return text;
}


void MainWindow::configureMainWindow(std::string floorplanImgPath) {
    ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8(floorplanImgPath)));
    ui->label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_1.png")));
    ui->tabWidget_floorplan->setCurrentIndex(0);
    setLeftAndRightButtonsVisibility(false);
    startTimer();
}

void MainWindow::configureMainWindow2(std::string floorplanImgPath) {
    ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8(floorplanImgPath)));
    ui->label_ysu_img->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ysuib_2.png")));
    ui->tabWidget_floorplan->setCurrentIndex(1);
    setLeftAndRightButtonsVisibility(false);
    startTimer();
}

void MainWindow::handleInOutClick(std::string text) {
    setInAndOutButtonsVisibility(true);
    in = text;
    out = text;
}

void MainWindow::handleInOutClick2(std::string text) {
    setInAndOutButtonsVisibility2(true);
    in = text;
    out = text;
}

void MainWindow::setTnorinutyunComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 4; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->tnorinutyun->count() != 4) {
            ui->tnorinutyun->addItem(QString());
        }
        ui->tnorinutyun->setItemText(i, qStr);
    }
}

void MainWindow::setKarucvatsqayinComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 7; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->karucvatsqayin->count() != 7) {
            ui->karucvatsqayin->addItem(QString());
        }
        ui->karucvatsqayin->setItemText(i, qStr);
    }
}

void MainWindow::setDekanatnerComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 5; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->dekanatner->count() != 5) {
            ui->dekanatner->addItem(QString());
        }
        ui->dekanatner->setItemText(i, qStr);
    }
}

void MainWindow::setAmbionnerComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 7; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->ambionner->count() != 7) {
            ui->ambionner->addItem(QString());
        }
        ui->ambionner->setItemText(i, qStr);
    }
}

void MainWindow::setVarchakanComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 6; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->varchakan->count() != 6) {
            ui->varchakan->addItem(QString());
        }
        ui->varchakan->setItemText(i, qStr);
    }
}

void MainWindow::setKentronnerComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 3; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->kentronner->count() != 3) {
            ui->kentronner->addItem(QString());
        }
        ui->kentronner->setItemText(i, qStr);
    }
}

void MainWindow::setTntesakanComboBoxText(const std::vector<std::string>& vector) {
    for(int i = 0; i < 3; ++i) {
        QString qStr = QString::fromStdString(vector[i]);
        if (ui->tntesakan->count() != 3) {
            ui->tntesakan->addItem(QString());
        }
        ui->tntesakan->setItemText(i, qStr);
    }
}

void MainWindow::setComboBoxLanguages(std::string language) {
    if (language == "hy") {
        setTnorinutyunComboBoxText(constants.tnorinutyunHy);
        setKarucvatsqayinComboBoxText(constants.karucvatsqayinHy);
        setDekanatnerComboBoxText(constants.dekanatnerHy);
        setAmbionnerComboBoxText(constants.ambionnerHy);
        setVarchakanComboBoxText(constants.varchakanHy);
        setKentronnerComboBoxText(constants.kentronnerHy);
        setTntesakanComboBoxText(constants.tntesakanHy);
    } else if (language == "en") {
        setTnorinutyunComboBoxText(constants.tnorinutyunEn);
        setKarucvatsqayinComboBoxText(constants.karucvatsqayinEn);
        setDekanatnerComboBoxText(constants.dekanatnerEn);
        setAmbionnerComboBoxText(constants.ambionnerEn);
        setVarchakanComboBoxText(constants.varchakanEn);
        setKentronnerComboBoxText(constants.kentronnerEn);
        setTntesakanComboBoxText(constants.tntesakanEn);
    } else if (language == "ru") {
        setTnorinutyunComboBoxText(constants.tnorinutyunRu);
        setKarucvatsqayinComboBoxText(constants.karucvatsqayinRu);
        setDekanatnerComboBoxText(constants.dekanatnerRu);
        setAmbionnerComboBoxText(constants.ambionnerRu);
        setVarchakanComboBoxText(constants.varchakanRu);
        setKentronnerComboBoxText(constants.kentronnerRu);
        setTntesakanComboBoxText(constants.tntesakanRu);
    }
}

void MainWindow::on_tnorinutyun_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow2("../img/FloorTwo/ynd_in.png");
        setRoomNameVisibility2(true, "Ընդունարան (Տն․/ Փոխտն․)");
        handleInOutClick2("ynd");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 1:
        configureMainWindow2("../img/FloorTwo/tn_in.png");
        setRoomNameVisibility2(true, "Տնօրեն (Ա․ Մակարյան)");
        handleInOutClick2("tn");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 2:
        configureMainWindow2("../img/FloorTwo/phtn_in.png");
        setRoomNameVisibility2(true, "Փոխտնօրեն (Մ․ Օթարյան)");
        handleInOutClick2("phtn");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 3:
        configureMainWindow2("../img/FloorTwo/nd_in.png");
        setRoomNameVisibility2(true, "Նիստերի դահլիճ");
        handleInOutClick2("nd");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    }
}


void MainWindow::on_dekanatner_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow("../img/FloorOne/tft.png");
        setRoomNameVisibility(true, "Տնտեսագիտության ֆակուլտետի դեկան");
        setInAndOutButtonsVisibility(false);
        break;
    case 1:
        configureMainWindow2("../img/FloorTwo/tfd.png");
        setRoomNameVisibility2(true, "Տնտեսագիտության ֆակուլտետի դեկանատ");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        setInAndOutButtonsVisibility2(false);
        break;
    case 2:
        configureMainWindow("../img/FloorOne/hgfd_in.png");
        setRoomNameVisibility(true, "Հումանիտար գիտությունների ֆակուլտետի դեկան");
        handleInOutClick("hgfd");
        break;
    case 3:
        configureMainWindow("../img/FloorOne/hgd_in.png");
        setRoomNameVisibility(true, "Հումանիտար գիտությունների ֆակուլտետի դեկանատ");
        handleInOutClick("hgd");
        break;
    case 4:
        configureMainWindow("../img/FloorOne/hgfdt_in.png");
        setRoomNameVisibility(true, "Հումանիտար գիտությունների\n ֆակուլտետի դեկանի տեղակալ");
        handleInOutClick("hgfdt");
        break;
    }
}


void MainWindow::on_ambionner_activated(int index)
{

    switch (index) {
    case 0:
        configureMainWindow2("../img/FloorTwo/yta.png");
        setRoomNameVisibility2(true, "Ընդհանուր տնտեսագիտության ամբիոն");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 1:
        configureMainWindow("../img/FloorOne/ola_in.png");
        setRoomNameVisibility(true, "Օտար լեզուների ամբիոն");
        handleInOutClick("ola");
        break;
    case 2:
        configureMainWindow("../img/FloorOne/hla_in.png");
        setRoomNameVisibility(true, "Հայոց լեզվի ամբիոն");
        handleInOutClick("hla");
        break;
    case 3:
        configureMainWindow("../img/FloorOne/fla.png");
        setRoomNameVisibility(true, "Ֆրանսերեն լեզվի ամբիոն");
        setInAndOutButtonsVisibility(false);
        break;
    case 4:
        configureMainWindow2("../img/FloorTwo/40.png");
        setRoomNameVisibility2(true, "Տուրիզմի կառավարման և\n մշակութաբանության ամբիոն");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 5:
        configureMainWindow("../img/FloorOne/mha.png");
        setRoomNameVisibility(true, "Մանկավարժության և հոգեբանության ամբիոն");
        setInAndOutButtonsVisibility(false);
        break;
    case 6:
        configureMainWindow("../img/FloorOne/hpha.png");
        setRoomNameVisibility(true, "Հայոց պատմության և\n հասարակագիտության ամբիոն");
        setInAndOutButtonsVisibility(false);
        break;
    }
}


void MainWindow::on_karucvatsqayin_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow2("../img/FloorTwo/thszb.png");
        setRoomNameVisibility2(true, "Տեղեկատվական համակարգերի \nսպասարկման և \nզարգացման բաժին");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 1:
        configureMainWindow("../img/FloorOne/akiab_in.png");
        setRoomNameVisibility(true, "Անձնակազմի կառավարման \nև իրավական \nապահովման բաժին");
        handleInOutClick("akiab");
        break;
    case 2:
        configureMainWindow("../img/FloorOne/mkoab_in.png");
        setRoomNameVisibility(true, "Մասնագիտական կրթության\n որակի ապահովման բաժին");
        handleInOutClick("mkoab");
        break;
    case 3:
        configureMainWindow("../img/FloorOne/hpha.png");
        setRoomNameVisibility(true, "Կրթական բարեփոխումների \nդասախոսների \nվերապատրաստման բաժին");
        setInAndOutButtonsVisibility(false);
        break;
    case 4:
        configureMainWindow("../img/FloorOne/tgsb_in.png");
        setRoomNameVisibility(true, "Տնտեսական գործունեության \nկազմակերպման և \nսպասարկման բաժին");
        handleInOutClick("tgsb");
        break;
    case 5:
        configureMainWindow2("../img/FloorTwo/pkshhb_in.png");
        setRoomNameVisibility2(true, "Պրակտիկայի կազմակերպման \nև շահակիցների հետ \nհամագործակցության բաժին");
        handleInOutClick2("pkshhb");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 6:
        configureMainWindow2("../img/FloorTwo/ugkvb_in.png");
        setRoomNameVisibility2(true, "Ուսումնական գործընթացի \nկազմակերպման և \nվերահսկման բաժին");
        handleInOutClick2("ugkvb");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    }
}


void MainWindow::on_varchakan_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow("../img/FloorOne/hash_in.png");
        setRoomNameVisibility(true, "Հաշվապահություն");
        handleInOutClick("hash");
        break;
    case 1:
        configureMainWindow("../img/FloorOne/gh_in.png");
        setRoomNameVisibility(true, "Գլխավոր հաշվապահ");
        handleInOutClick("hash");
        break;
    case 2:
        configureMainWindow("../img/FloorOne/gq_in.png");
        setRoomNameVisibility(true, "Գլխավոր քարտուղար");
        handleInOutClick("gq");
        break;
    case 3:
        configureMainWindow("../img/FloorOne/akiab_in.png");
        setRoomNameVisibility(true, "Իրավախորհրդատու");
        handleInOutClick("akiab");
        break;
    case 4:
        configureMainWindow("../img/FloorOne/hpha.png");
        setRoomNameVisibility(true, "Կրթական ծրագրի պատասխանատու");
        setInAndOutButtonsVisibility(false);
        break;
    case 5:
        configureMainWindow2("../img/FloorTwo/uv_in.png");
        setRoomNameVisibility2(true, "Ուսումնամեթոդական վարչություն");
        handleInOutClick2("uv");
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    }
}


void MainWindow::on_kentronner_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow("../img/FloorOne/amg.png");
        setRoomNameVisibility(true, "Ամերիկյան գրադարան");
        setInAndOutButtonsVisibility(false);
        break;
    case 1:
        configureMainWindow("../img/FloorOne/28_in.png");
        setRoomNameVisibility(true, "Ռուսաց լեզվի և\n մշակույթի կենտրոն");
        handleInOutClick("28");
        break;
    case 2:
        configureMainWindow("../img/FloorOne/rd.png");
        setRoomNameVisibility(true, "Русский дом");
        setInAndOutButtonsVisibility(false);
        break;
    }
}


void MainWindow::on_tntesakan_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow("../img/FloorOne/p2_in.png");
        setRoomNameVisibility(true, "Պահեստ N2");
        handleInOutClick("p2");
        break;
    case 1:
        configureMainWindow("../img/FloorOne/sq.png");
        setRoomNameVisibility(true, "Պարետ");
        setInAndOutButtonsVisibility(false);
        break;
    case 2:
        configureMainWindow("../img/FloorOne/pah.png");
        setRoomNameVisibility(true, "Պահակակաետ");
        setInAndOutButtonsVisibility(false);
        break;
    }
}


void MainWindow::on_library_clicked()
{
    configureMainWindow("../img/FloorOne/grd.png");
    setRoomNameVisibility(true, "Գրադարան");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_bujket_clicked()
{
    configureMainWindow("../img/FloorOne/buj.png");
    setRoomNameVisibility(true, "Բուժկետ");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_computer_room_clicked()
{
    configureMainWindow("../img/FloorOne/hs_in.png");
    setRoomNameVisibility(true, "Համակարգչային սրահ");
    handleInOutClick("hs");
}


void MainWindow::on_xerox_clicked()
{
    configureMainWindow("../img/FloorOne/hs_in.png");
    setRoomNameVisibility(true, "Պատճենահանման սենյակ");
    setInAndOutButtonsVisibility(false);
}



void MainWindow::on_wc_clicked()
{
    configureMainWindow("../img/FloorOne/wc1_w.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_lsaranner_activated(int index)
{
    switch (index) {
    case 0:
        configureMainWindow("../img/FloorOne/10.png");
        setRoomNameVisibility(false, "");
        setInAndOutButtonsVisibility(false);
        break;
    case 1:
        configureMainWindow("../img/FloorOne/11.png");
        setRoomNameVisibility(false, "");
        setInAndOutButtonsVisibility(false);
        break;
    case 2:
        configureMainWindow("../img/FloorOne/19.png");
        setRoomNameVisibility(false, "");
        setInAndOutButtonsVisibility(false);
        break;
    case 3:
        configureMainWindow("../img/FloorOne/21_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("21");
        break;
    case 4:
        configureMainWindow("../img/FloorOne/28_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("28");
        break;
    case 5:
        configureMainWindow("../img/FloorOne/29_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("29");
        break;
    case 6:
        configureMainWindow("../img/FloorOne/29a_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("29a");
        break;
    case 7:
        configureMainWindow("../img/FloorOne/30_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("30");
        break;
    case 8:
        configureMainWindow("../img/FloorOne/31_in.png");
        setRoomNameVisibility(false, "");
        handleInOutClick("31");
        break;
    case 9:
        configureMainWindow2("../img/FloorTwo/38.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 10:
        configureMainWindow2("../img/FloorTwo/39.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 11:
        configureMainWindow2("../img/FloorTwo/40.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 12:
        configureMainWindow2("../img/FloorTwo/41.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 13:
        configureMainWindow2("../img/FloorTwo/44.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 14:
        configureMainWindow2("../img/FloorTwo/45.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 15:
        configureMainWindow2("../img/FloorTwo/46.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 16:
        configureMainWindow2("../img/FloorTwo/47.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 17:
        configureMainWindow2("../img/FloorTwo/48.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(true);
        disableRightPartButtons(false);
        break;
    case 18:
        configureMainWindow2("../img/FloorTwo/50.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 19:
        configureMainWindow2("../img/FloorTwo/51.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 20:
        configureMainWindow2("../img/FloorTwo/52.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 21:
        configureMainWindow2("../img/FloorTwo/52a.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 22:
        configureMainWindow2("../img/FloorTwo/53.png");
        setRoomNameVisibility2(false, "");
        setInAndOutButtonsVisibility2(false);
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 23:
        configureMainWindow2("../img/FloorTwo/54_in.png");
        setRoomNameVisibility2(false, "");
        handleInOutClick2("54");
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 24:
        configureMainWindow2("../img/FloorTwo/54a_in.png");
        setRoomNameVisibility2(false, "");
        handleInOutClick2("54a");
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 25:
        configureMainWindow2("../img/FloorTwo/55_in.png");
        setRoomNameVisibility2(false, "");
        handleInOutClick2("55");
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 26:
        configureMainWindow2("../img/FloorTwo/56_in.png");
        setRoomNameVisibility2(false, "");
        handleInOutClick2("56");
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 27:
        configureMainWindow2("../img/FloorTwo/57_in.png");
        setRoomNameVisibility2(false, "");
        handleInOutClick2("57");
        disableLeftPartButtons(false);
        disableRightPartButtons(true);
        break;
    case 28:
        configureMainWindow("../img/FloorOne/58.png");
        setRoomNameVisibility(false, "");
        setInAndOutButtonsVisibility(false);
        break;
    }
}


void MainWindow::on_btn_in_clicked()
{
    if (in.compare("21") == 0) {
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/21_in.png")));
    }
    else if (in.compare("28") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/28_in.png")));
    }
    else if (in.compare("29") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/29_in.png")));
    }
    else if (in.compare("29a") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/29a_in.png")));
    }
    else if (in.compare("30") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/30_in.png")));
    }
    else if (in.compare("31") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/31_in.png")));
    }
    else if (in.compare("ola") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/ola_in.png")));
    }
    else if (in.compare("hla") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hla_in.png")));
    }
    else if (in.compare("akiab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/akiab_in.png")));
    }
    else if (in.compare("mkoab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/mkoab_in.png")));
    }
    else if (in.compare("tgsb") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/tgsb_in.png")));
    }
    else if (in.compare("hash") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hash_in.png")));
    }
    else if (in.compare("gh") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/gh_in.png")));
    }
    else if (in.compare("gq") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/gq_in.png")));
    }
    else if (in.compare("akiab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/akiab_in.png")));
    }
    else if (in.compare("p2") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/p2_in.png")));
    }
    else if (in.compare("hs") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hs_in.png")));
    }
    else if (in.compare("hgfd") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgfd_in.png")));
    }
    else if (in.compare("hgd") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgd_in.png")));
    }
    else if (in.compare("hgfdt") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgfdt_in.png")));
    }
}


void MainWindow::on_btn_out_clicked()
{
    if (out.compare("21") == 0) {
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/21_out.png")));
    }
    else if (in.compare("28") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/28_out.png")));
    }
    else if (in.compare("29") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/29_out.png")));
    }
    else if (in.compare("29a") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/29a_out.png")));
    }
    else if (in.compare("30") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/30_out.png")));
    }
    else if (in.compare("31") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/31_out.png")));
    }
    else if (in.compare("ola") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/ola_out.png")));
    }
    else if (in.compare("hla") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hla_out.png")));
    }
    else if (in.compare("akiab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/akiab_out.png")));
    }
    else if (in.compare("mkoab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/mkoab_out.png")));
    }
    else if (in.compare("tgsb") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/tgsb_out.png")));
    }
    else if (in.compare("hash") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hash_out.png")));
    }
    else if (in.compare("gh") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/gh_out.png")));
    }
    else if (in.compare("gq") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/gq_out.png")));
    }
    else if (in.compare("akiab") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/akiab_out.png")));
    }
    else if (in.compare("p2") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/p2_out.png")));
    }
    else if (in.compare("hs") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hs_out.png")));
    }
    else if (in.compare("hgfd") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgfd_out.png")));
    }
    else if (in.compare("hgd") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgd_out.png")));
    }
    else if (in.compare("hgfdt") == 0){
        ui->label_tab_floorplan1->setPixmap(QPixmap(QString::fromUtf8("../img/FloorOne/hgfdt_out.png")));
    }
}



void MainWindow::on_pushButton_xerox_clicked()
{
    configureMainWindow("../img/FloorOne/hs_in.png");
    setRoomNameVisibility(true, "Պատճենահանման սենյակ");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_wc_w2_clicked()
{
    configureMainWindow("../img/FloorOne/wc1_w.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_library_clicked()
{
    configureMainWindow("../img/FloorOne/grd.png");
    setRoomNameVisibility(true, "Գրադարան");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_computer_room_clicked()
{
    configureMainWindow("../img/FloorOne/hs_in.png");
    setRoomNameVisibility(true, "Համակարգչային սրահ");
    handleInOutClick("hs");
}


void MainWindow::on_pushButton_bujket_clicked()
{
    configureMainWindow("../img/FloorOne/buj.png");
    setRoomNameVisibility(true, "Բուժկետ");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_11_clicked()
{
    configureMainWindow("../img/FloorOne/11.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_10_clicked()
{
    configureMainWindow("../img/FloorOne/10.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_19_clicked()
{
    configureMainWindow("../img/FloorOne/19.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_21_clicked()
{
    configureMainWindow("../img/FloorOne/21_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("21");
}


void MainWindow::on_pushButton_28_clicked()
{
    configureMainWindow("../img/FloorOne/28_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("28");
}


void MainWindow::on_pushButton_29_clicked()
{
    configureMainWindow("../img/FloorOne/29_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("29");
}


void MainWindow::on_pushButton_29a_clicked()
{
    configureMainWindow("../img/FloorOne/29a_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("29a");
}


void MainWindow::on_pushButton_30_clicked()
{
    configureMainWindow("../img/FloorOne/30_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("30");
}


void MainWindow::on_pushButton_31_clicked()
{
    configureMainWindow("../img/FloorOne/31_in.png");
    setRoomNameVisibility(false, "");
    handleInOutClick("31");
}


void MainWindow::on_pushButton_58_clicked()
{
    configureMainWindow("../img/FloorOne/58.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}





void MainWindow::on_btn_in2_clicked()
{
    if (in.compare("54") == 0) {
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/54_in.png")));
    }
    else if (in.compare("54a") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/54a_in.png")));
    }
    else if (in.compare("55") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/55_in.png")));
    }
    else if (in.compare("56") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/56_in.png")));
    }
    else if (in.compare("57") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/57_in.png")));
    }
    else if (in.compare("nd") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/nd_in.png")));
    }
    else if (in.compare("phtn") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/phtn_in.png")));
    }
    else if (in.compare("pkshhb") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/pkshhb_in.png")));
    }
    else if (in.compare("tn") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/tn_in.png")));
    }
    else if (in.compare("ugkvb") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/ugkvb_in.png")));
    }
    else if (in.compare("uv") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/uv_in.png")));
    }
    else if (in.compare("ynd") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/ynd_in.png")));
    }
}


void MainWindow::on_btn_out2_clicked()
{
    if (in.compare("54") == 0) {
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/54_out.png")));
    }
    else if (in.compare("54a") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/54a_out.png")));
    }
    else if (in.compare("55") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/55_out.png")));
    }
    else if (in.compare("56") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/56_out.png")));
    }
    else if (in.compare("57") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/57_out.png")));
    }
    else if (in.compare("nd") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/nd_out.png")));
    }
    else if (in.compare("phtn") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/phtn_out.png")));
    }
    else if (in.compare("pkshhb") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/pkshhb_out.png")));
    }
    else if (in.compare("tn") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/tn_out.png")));
    }
    else if (in.compare("ugkvb") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/ugkvb_out.png")));
    }
    else if (in.compare("uv") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/uv_out.png")));
    }
    else if (in.compare("ynd") == 0){
        ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/ynd_out.png")));
    }
}


void MainWindow::on_pushButton_51_clicked()
{
    configureMainWindow2("../img/FloorTwo/51.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_50_clicked()
{
    configureMainWindow2("../img/FloorTwo/50.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_48_clicked()
{
    configureMainWindow2("../img/FloorTwo/48.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_47_clicked()
{
    configureMainWindow2("../img/FloorTwo/47.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_52_clicked()
{
    configureMainWindow2("../img/FloorTwo/52.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_52a_clicked()
{
    configureMainWindow2("../img/FloorTwo/52a.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_53_clicked()
{
    configureMainWindow2("../img/FloorTwo/53.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_54_clicked()
{
    configureMainWindow2("../img/FloorTwo/54_in.png");
    setRoomNameVisibility2(false, "");
    handleInOutClick2("54");
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_54a_clicked()
{
    configureMainWindow2("../img/FloorTwo/54a_in.png");
    setRoomNameVisibility2(false, "");
    handleInOutClick2("54a");
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_55_clicked()
{
    configureMainWindow2("../img/FloorTwo/55_in.png");
    setRoomNameVisibility2(false, "");
    handleInOutClick2("55");
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_57_clicked()
{
    configureMainWindow2("../img/FloorTwo/57_in.png");
    setRoomNameVisibility2(false, "");
    handleInOutClick2("57");
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_56_clicked()
{
    configureMainWindow2("../img/FloorTwo/56_in.png");
    setRoomNameVisibility2(false, "");
    handleInOutClick2("56");
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
}


void MainWindow::on_pushButton_46_clicked()
{
    configureMainWindow2("../img/FloorTwo/46.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_45_clicked()
{
    configureMainWindow2("../img/FloorTwo/45.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_44_clicked()
{
    configureMainWindow2("../img/FloorTwo/44.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_41_clicked()
{
    configureMainWindow2("../img/FloorTwo/41.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_40_clicked()
{
    configureMainWindow2("../img/FloorTwo/40.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_39_clicked()
{
    configureMainWindow2("../img/FloorTwo/39.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}


void MainWindow::on_pushButton_38_clicked()
{
    configureMainWindow2("../img/FloorTwo/38.png");
    setRoomNameVisibility2(false, "");
    setInAndOutButtonsVisibility2(false);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
}



void MainWindow::on_btn_left_clicked()
{
    ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/floor2_L.png")));
    setLeftAndRightButtonsVisibility(true);
    disableLeftPartButtons(true);
    disableRightPartButtons(false);
    startTimer();
}


void MainWindow::on_btn_right_clicked()
{
    ui->label_tab_floorplan2->setPixmap(QPixmap(QString::fromUtf8("../img/FloorTwo/floor2_R.png")));
    setLeftAndRightButtonsVisibility(true);
    disableLeftPartButtons(false);
    disableRightPartButtons(true);
    startTimer();
}

void MainWindow::on_pushButton_clicked()
{
    StudentsSmartClub ssc;
    ssc.setModal(true);
    ssc.exec();
}


void MainWindow::on_pushButton_wc_m_clicked()
{
    configureMainWindow("../img/FloorOne/wc2_m.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_wc_w1_clicked()
{
    configureMainWindow("../img/FloorOne/wc2_w.png");
    setRoomNameVisibility(false, "");
    setInAndOutButtonsVisibility(false);
}


void MainWindow::on_pushButton_hy_clicked()
{
    std::string prevLanguage = language;
    language = "hy";
    setComboBoxLanguages("hy");
    translateButtonsText("hy");
//    if (prevLanguage == "en") {
//        for (size_t i = 0; i < constants.tnorinutyunEn.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tnorinutyunEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())){
//                std::string roomName = constants.tnorinutyunHy[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinEn.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.karucvatsqayinEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinHy[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerEn.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerHy[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.ambionnerEn.size(); ++i) {
//            if (removeNewLines(constants.ambionnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.ambionnerHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.ambionnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.ambionnerHy[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.varchakanEn.size(); ++i) {
//            if (removeNewLines(constants.varchakanEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.varchakanEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.varchakanHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.kentronnerEn.size(); ++i) {
//            if (removeNewLines(constants.kentronnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.kentronnerHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.kentronnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.kentronnerHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.tntesakanEn.size(); ++i) {
//            if (removeNewLines(constants.tntesakanEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tntesakanHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.tntesakanEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.tntesakanHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.buttonsEn.size(); ++i) {
//            if (removeNewLines(constants.buttonsEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.buttonsEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.buttonsHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//    }
//    else if (prevLanguage == "ru") {
//        for (size_t i = 0; i < constants.tnorinutyunRu.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinRu.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.karucvatsqayinRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.karucvatsqayinHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerRu.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.dekanatnerHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.ambionnerRu.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.dekanatnerHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.varchakanRu.size(); ++i) {
//            if (removeNewLines(constants.varchakanRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.varchakanRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.varchakanHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//        for (size_t i = 0; i < constants.kentronnerRu.size(); ++i) {
//             if (removeNewLines(constants.kentronnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.kentronnerHy[i];

//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.tntesakanRu.size(); ++i) {
//             if (removeNewLines(constants.tntesakanRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tntesakanHy[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.buttonsRu.size(); ++i) {
//            if (removeNewLines(constants.buttonsRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsHy[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
////            else if (removeNewLines(constants.buttonsRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
////                std::string roomName = constants.buttonsHy[i];
////                ui->label_room_name->setText(QString::fromStdString(roomName));
////                return;
////            }
//        }
//    };
    setRoomNameVisibility(true, ui->label_room_name->text().toStdString());
    setRoomNameVisibility2(true, ui->label_room_name2->text().toStdString());
}


void MainWindow::on_pushButton_en_clicked()
{
    std::string prevLanguage = language;
    language = "en";
    setComboBoxLanguages("en");
    translateButtonsText("en");

//    if (prevLanguage == "hy") {
//        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())){
//                std::string roomName = constants.tnorinutyunEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
//            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.ambionnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.ambionnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
//            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.varchakanEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
//            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.kentronnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.kentronnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
//            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tntesakanEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tntesakanEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
//            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.buttonsEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//    }
//    else if (prevLanguage == "ru") {
//        for (size_t i = 0; i < constants.tnorinutyunRu.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tnorinutyunRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinRu.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.karucvatsqayinRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerRu.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.ambionnerRu.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.varchakanRu.size(); ++i) {
//            if (removeNewLines(constants.varchakanRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.varchakanRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.varchakanEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.kentronnerRu.size(); ++i) {
//            if (removeNewLines(constants.kentronnerRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.kentronnerEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.kentronnerRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.kentronnerEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.tntesakanRu.size(); ++i) {
//            if (removeNewLines(constants.tntesakanRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tntesakanEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tntesakanRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tntesakanEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.buttonsRu.size(); ++i) {
//            if (removeNewLines(constants.buttonsRu[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.buttonsRu[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.buttonsEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//    };
    setRoomNameVisibility(true, ui->label_room_name->text().toStdString());
    setRoomNameVisibility2(true, ui->label_room_name2->text().toStdString());
}


void MainWindow::on_pushButton_ru_clicked()
{
    std::string prevLanguage = language;
    language = "ru";
    setComboBoxLanguages("ru");
    translateButtonsText("ru");
//    if (prevLanguage == "hy") {
//        for (size_t i = 0; i < constants.tnorinutyunHy.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tnorinutyunHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())){
//                std::string roomName = constants.tnorinutyunRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinHy.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.karucvatsqayinHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerHy.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.ambionnerHy.size(); ++i) {
//            if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.ambionnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.ambionnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.ambionnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.varchakanHy.size(); ++i) {
//            if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.varchakanHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.varchakanRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.kentronnerHy.size(); ++i) {
//            if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.kentronnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.kentronnerHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.kentronnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.tntesakanHy.size(); ++i) {
//            if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tntesakanRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tntesakanHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tntesakanRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.buttonsHy.size(); ++i) {
//            if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.buttonsHy[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.buttonsRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//    }
//    else if (prevLanguage == "en") {
//        for (size_t i = 0; i < constants.tnorinutyunEn.size(); ++i) {
//            if (removeNewLines(constants.tnorinutyunEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tnorinutyunRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tnorinutyunEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())){
//                std::string roomName = constants.tnorinutyunRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.karucvatsqayinEn.size(); ++i) {
//            if (removeNewLines(constants.karucvatsqayinEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.karucvatsqayinEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.karucvatsqayinEn[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.dekanatnerEn.size(); ++i) {
//            if (removeNewLines(constants.dekanatnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.dekanatnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.dekanatnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.dekanatnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.ambionnerEn.size(); ++i) {
//            if (removeNewLines(constants.ambionnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.ambionnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.ambionnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.ambionnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.varchakanEn.size(); ++i) {
//            if (removeNewLines(constants.varchakanEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.varchakanRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.varchakanEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.varchakanRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.kentronnerEn.size(); ++i) {
//            if (removeNewLines(constants.kentronnerEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.kentronnerRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.kentronnerEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.kentronnerRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.tntesakanEn.size(); ++i) {
//            if (removeNewLines(constants.tntesakanEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.tntesakanRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.tntesakanEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.tntesakanRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//        for (size_t i = 0; i < constants.buttonsEn.size(); ++i) {
//            if (removeNewLines(constants.buttonsEn[i]) == removeNewLines(ui->label_room_name2->text().toStdString())) {
//                std::string roomName = constants.buttonsRu[i];
//                ui->label_room_name2->setText(QString::fromStdString(roomName));
//                return;
//            }
//            else if (removeNewLines(constants.buttonsEn[i]) == removeNewLines(ui->label_room_name->text().toStdString())) {
//                std::string roomName = constants.buttonsRu[i];
//                ui->label_room_name->setText(QString::fromStdString(roomName));
//                return;
//            }
//        }
//    };
    setRoomNameVisibility(true, ui->label_room_name->text().toStdString());
    setRoomNameVisibility2(true, ui->label_room_name2->text().toStdString());
}


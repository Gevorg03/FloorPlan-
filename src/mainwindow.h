#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include "studentssmartclub.h"
#include "constants.cpp"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Constants& constants = Constants::getInstance();
    std::string in;
    std::string out;
    //std::string roomName;
    std::string language;
    QTimer* timer;
    int timeoutDuration = 120 * 1000;

private slots:

    void on_pushButton_floor1_clicked();

    void on_pushButton_floor2_clicked();

    void on_ambionner_activated(int index);

    void on_karucvatsqayin_activated(int index);

    void on_varchakan_activated(int index);

    void on_kentronner_activated(int index);

    void on_tntesakan_activated(int index);

    void on_library_clicked();

    void on_bujket_clicked();

    void on_computer_room_clicked();

    void on_xerox_clicked();

    void on_wc_clicked();

    void on_lsaranner_activated(int index);

    void on_btn_in_clicked();

    void on_btn_out_clicked();

    void setInAndOutButtonsVisibility(bool isVisibile);

    void setInAndOutButtonsVisibility2(bool isVisibile);

    void setLeftAndRightButtonsVisibility(bool isVisibile);

    void setRoomNameVisibility(bool isVisibile, std::string roomName );

    void setRoomNameVisibility2(bool isVisibile, std::string roomName);

    void translateButtonsText(std::string language);

    void on_pushButton_xerox_clicked();

    void on_pushButton_wc_w2_clicked();

    void on_pushButton_library_clicked();

    void on_pushButton_computer_room_clicked();

    void on_pushButton_bujket_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_29a_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_58_clicked();

    void on_dekanatner_activated(int index);

    void on_tnorinutyun_activated(int index);

    void on_btn_in2_clicked();

    void on_btn_out2_clicked();

    void disableLeftPartButtons(bool isDisable);

    void disableRightPartButtons(bool isDisable);

    void startTimer();

    void on_pushButton_51_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_52a_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_54a_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_56_clicked();

    void on_btn_left_clicked();

    void on_btn_right_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_clicked();

    void on_pushButton_wc_m_clicked();

    void on_pushButton_wc_w1_clicked();

    void configureMainWindow(std::string floorplanImgPath);

    void configureMainWindow2(std::string floorplanImgPath);

    void handleInOutClick(std::string text);

    void handleInOutClick2(std::string text);

    std::string removeNewLines(std::string text);

    void setComboBoxLanguages(std::string language);

    void setTnorinutyunComboBoxText(const std::vector<std::string>& vector);

    void setKarucvatsqayinComboBoxText(const std::vector<std::string>& vector);

    void setDekanatnerComboBoxText(const std::vector<std::string>& vector);

    void setAmbionnerComboBoxText(const std::vector<std::string>& vector);

    void setVarchakanComboBoxText(const std::vector<std::string>& vector);

    void setKentronnerComboBoxText(const std::vector<std::string>& vector);

    void setTntesakanComboBoxText(const std::vector<std::string>& vector);

    void on_pushButton_hy_clicked();

    void on_pushButton_en_clicked();

    void on_pushButton_ru_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

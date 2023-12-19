#include "mainwindow.h"
#include "studentssmartclub.h"

#include <QApplication>
#include <QIcon>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowState(Qt::WindowMaximized);
    w.setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint); // ջնջում է վերևի աջ փակելու կոճակները
    w.setWindowFlags(Qt::FramelessWindowHint); // չի թողնում app-ը շարժվի
    StudentsSmartClub ssc;
    ssc.setWindowTitle("Students Smart Club");
    ssc.setWindowIcon(QIcon("../img/Logo/ssc.png"));
    w.setWindowTitle("Students Smart Club");
    w.setWindowIcon(QIcon("../img/Logo/ssc.png"));
    w.show();
    return a.exec();

}

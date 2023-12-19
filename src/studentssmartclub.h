#ifndef STUDENTSSMARTCLUB_H
#define STUDENTSSMARTCLUB_H

#include <QDialog>

namespace Ui {
class StudentsSmartClub;
}

class StudentsSmartClub : public QDialog
{
    Q_OBJECT

public:
    explicit StudentsSmartClub(QWidget *parent = nullptr);
    ~StudentsSmartClub();

private:
    Ui::StudentsSmartClub *ui;
};

#endif // STUDENTSSMARTCLUB_H

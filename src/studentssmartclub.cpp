#include "studentssmartclub.h"
#include "ui_studentssmartclub.h"

StudentsSmartClub::StudentsSmartClub(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentsSmartClub)

{
    ui->setupUi(this);
}

StudentsSmartClub::~StudentsSmartClub()
{
    delete ui;
}

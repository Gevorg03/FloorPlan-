/********************************************************************************
** Form generated from reading UI file 'studentssmartclub.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSSMARTCLUB_H
#define UI_STUDENTSSMARTCLUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QIcon>

QT_BEGIN_NAMESPACE

class Ui_StudentsSmartClub
{
public:
    QLabel *label;

    void setupUi(QDialog *StudentsSmartClub)
    {
        if (StudentsSmartClub->objectName().isEmpty())
            StudentsSmartClub->setObjectName("StudentsSmartClub");
        StudentsSmartClub->resize(400, 300);
        label = new QLabel(StudentsSmartClub);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 151));
        label->setPixmap(QPixmap(QString::fromUtf8("../img/Logo/ssc.png")));
        label->setScaledContents(true);

        retranslateUi(StudentsSmartClub);

        QMetaObject::connectSlotsByName(StudentsSmartClub);
    } // setupUi

    void retranslateUi(QDialog *StudentsSmartClub)
    {
        StudentsSmartClub->setWindowTitle(QCoreApplication::translate("StudentsSmartClub", "StudentsSmartClub", nullptr));
        StudentsSmartClub->setWindowIcon(QIcon("../img/Logo/ssc.png"));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentsSmartClub: public Ui_StudentsSmartClub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSSMARTCLUB_H

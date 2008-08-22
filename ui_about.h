/********************************************************************************
** Form generated from reading ui file 'ui_about.ui'
**
** Created: Fri Aug 22 03:26:27 2008
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_cartulinaabout
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *cartulinaabout)
    {
    if (cartulinaabout->objectName().isEmpty())
        cartulinaabout->setObjectName(QString::fromUtf8("cartulinaabout"));
    cartulinaabout->setWindowModality(Qt::NonModal);
    cartulinaabout->resize(521, 346);
    cartulinaabout->setMinimumSize(QSize(521, 346));
    cartulinaabout->setMaximumSize(QSize(521, 346));
    label_2 = new QLabel(cartulinaabout);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(280, 10, 151, 51));
    QFont font;
    font.setPointSize(23);
    font.setBold(true);
    font.setWeight(75);
    label_2->setFont(font);
    label_3 = new QLabel(cartulinaabout);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(30, 200, 311, 101));
    QFont font1;
    font1.setPointSize(11);
    font1.setBold(true);
    font1.setWeight(75);
    label_3->setFont(font1);
    label_3->setWordWrap(true);
    label_4 = new QLabel(cartulinaabout);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(370, 220, 141, 71));
    label_4->setPixmap(QPixmap(QString::fromUtf8("gplv3-127x51.png")));
    label_5 = new QLabel(cartulinaabout);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(10, 20, 211, 181));
    label_5->setPixmap(QPixmap(QString::fromUtf8("me.png")));
    label_6 = new QLabel(cartulinaabout);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(220, 120, 241, 91));
    label_6->setWordWrap(true);
    label = new QLabel(cartulinaabout);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(300, 70, 81, 18));
    buttonBox = new QDialogButtonBox(cartulinaabout);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setGeometry(QRect(220, 300, 81, 32));
    buttonBox->setStandardButtons(QDialogButtonBox::Ok);

    retranslateUi(cartulinaabout);
    QObject::connect(buttonBox, SIGNAL(accepted()), cartulinaabout, SLOT(accept()));

    QMetaObject::connectSlotsByName(cartulinaabout);
    } // setupUi

    void retranslateUi(QDialog *cartulinaabout)
    {
    cartulinaabout->setWindowTitle(QApplication::translate("cartulinaabout", "About Cartulina", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("cartulinaabout", "Cartulina", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("cartulinaabout", "This program is free software under the GPL version 3. See included GPL3.txt or at http://www.gnu.org/licenses/gpl-3.0.txt", 0, QApplication::UnicodeUTF8));
    label_4->setText(QString());
    label_5->setText(QString());
    label_6->setText(QApplication::translate("cartulinaabout", "Problems? Bugs? Contact the author at seabre@catt.com or visit http://seabre986.googlepages.com for program updates.", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("cartulinaabout", "release 1.0", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(cartulinaabout);
    } // retranslateUi

};

namespace Ui {
    class cartulinaabout: public Ui_cartulinaabout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

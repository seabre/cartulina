/********************************************************************************
** Form generated from reading ui file 'ui_cartulinamain.ui'
**
** Created: Fri Aug 22 03:26:08 2008
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CARTULINA_H
#define UI_CARTULINA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cartulinamain
{
public:
    QAction *actionopen;
    QAction *actionhelp;
    QAction *actionabout;
    QAction *actionhideword;
    QAction *actionhidedefinition;
    QAction *actionchangewordfont;
    QAction *actionchangedefinitionfont;
    QAction *actionshuffledeck;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *wordlabel;
    QLabel *definitionlabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *leftpush;
    QLabel *statuslabel;
    QPushButton *rightpush;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuCartulina_Help;
    QMenu *menuOptions;

    void setupUi(QMainWindow *cartulinamain)
    {
    if (cartulinamain->objectName().isEmpty())
        cartulinamain->setObjectName(QString::fromUtf8("cartulinamain"));
    cartulinamain->resize(312, 304);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(cartulinamain->sizePolicy().hasHeightForWidth());
    cartulinamain->setSizePolicy(sizePolicy);
    cartulinamain->setMinimumSize(QSize(312, 304));
    QFont font;
    font.setBold(false);
    font.setWeight(50);
    cartulinamain->setFont(font);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8("../.designer/Desktop/fsicon.jpg")), QIcon::Normal, QIcon::Off);
    cartulinamain->setWindowIcon(icon);
    actionopen = new QAction(cartulinamain);
    actionopen->setObjectName(QString::fromUtf8("actionopen"));
    actionhelp = new QAction(cartulinamain);
    actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
    actionabout = new QAction(cartulinamain);
    actionabout->setObjectName(QString::fromUtf8("actionabout"));
    actionhideword = new QAction(cartulinamain);
    actionhideword->setObjectName(QString::fromUtf8("actionhideword"));
    actionhideword->setCheckable(true);
    actionhidedefinition = new QAction(cartulinamain);
    actionhidedefinition->setObjectName(QString::fromUtf8("actionhidedefinition"));
    actionhidedefinition->setCheckable(true);
    actionchangewordfont = new QAction(cartulinamain);
    actionchangewordfont->setObjectName(QString::fromUtf8("actionchangewordfont"));
    actionchangedefinitionfont = new QAction(cartulinamain);
    actionchangedefinitionfont->setObjectName(QString::fromUtf8("actionchangedefinitionfont"));
    actionshuffledeck = new QAction(cartulinamain);
    actionshuffledeck->setObjectName(QString::fromUtf8("actionshuffledeck"));
    centralwidget = new QWidget(cartulinamain);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    verticalLayout_2 = new QVBoxLayout(centralwidget);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    wordlabel = new QLabel(centralwidget);
    wordlabel->setObjectName(QString::fromUtf8("wordlabel"));
    wordlabel->setEnabled(true);
    QFont font1;
    font1.setPointSize(34);
    font1.setBold(true);
    font1.setWeight(75);
    wordlabel->setFont(font1);
    wordlabel->setFrameShadow(QFrame::Plain);
    wordlabel->setLineWidth(1);
    wordlabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

    verticalLayout->addWidget(wordlabel);

    definitionlabel = new QLabel(centralwidget);
    definitionlabel->setObjectName(QString::fromUtf8("definitionlabel"));
    definitionlabel->setAlignment(Qt::AlignCenter);
    definitionlabel->setWordWrap(true);

    verticalLayout->addWidget(definitionlabel);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    leftpush = new QPushButton(centralwidget);
    leftpush->setObjectName(QString::fromUtf8("leftpush"));

    horizontalLayout->addWidget(leftpush);

    statuslabel = new QLabel(centralwidget);
    statuslabel->setObjectName(QString::fromUtf8("statuslabel"));
    statuslabel->setAlignment(Qt::AlignCenter);

    horizontalLayout->addWidget(statuslabel);

    rightpush = new QPushButton(centralwidget);
    rightpush->setObjectName(QString::fromUtf8("rightpush"));

    horizontalLayout->addWidget(rightpush);


    verticalLayout->addLayout(horizontalLayout);


    verticalLayout_2->addLayout(verticalLayout);

    cartulinamain->setCentralWidget(centralwidget);
    menubar = new QMenuBar(cartulinamain);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 312, 22));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    menuCartulina_Help = new QMenu(menuHelp);
    menuCartulina_Help->setObjectName(QString::fromUtf8("menuCartulina_Help"));
    menuOptions = new QMenu(menubar);
    menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
    cartulinamain->setMenuBar(menubar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuOptions->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionopen);
    menuHelp->addAction(menuCartulina_Help->menuAction());
    menuCartulina_Help->addAction(actionhelp);
    menuCartulina_Help->addAction(actionabout);
    menuOptions->addAction(actionhideword);
    menuOptions->addAction(actionhidedefinition);
    menuOptions->addSeparator();
    menuOptions->addAction(actionchangewordfont);
    menuOptions->addAction(actionchangedefinitionfont);
    menuOptions->addSeparator();
    menuOptions->addAction(actionshuffledeck);

    retranslateUi(cartulinamain);

    QMetaObject::connectSlotsByName(cartulinamain);
    } // setupUi

    void retranslateUi(QMainWindow *cartulinamain)
    {
    cartulinamain->setWindowTitle(QApplication::translate("cartulinamain", "Cartulina", 0, QApplication::UnicodeUTF8));
    actionopen->setText(QApplication::translate("cartulinamain", "Open", 0, QApplication::UnicodeUTF8));
    actionopen->setShortcut(QApplication::translate("cartulinamain", "Ctrl+O", 0, QApplication::UnicodeUTF8));
    actionhelp->setText(QApplication::translate("cartulinamain", "Help", 0, QApplication::UnicodeUTF8));
    actionabout->setText(QApplication::translate("cartulinamain", "About Cartulina", 0, QApplication::UnicodeUTF8));
    actionhideword->setText(QApplication::translate("cartulinamain", "Hide Word", 0, QApplication::UnicodeUTF8));
    actionhideword->setShortcut(QApplication::translate("cartulinamain", "Ctrl+W", 0, QApplication::UnicodeUTF8));
    actionhidedefinition->setText(QApplication::translate("cartulinamain", "Hide Definition", 0, QApplication::UnicodeUTF8));
    actionhidedefinition->setShortcut(QApplication::translate("cartulinamain", "Ctrl+D", 0, QApplication::UnicodeUTF8));
    actionchangewordfont->setText(QApplication::translate("cartulinamain", "Change Word Font", 0, QApplication::UnicodeUTF8));
    actionchangewordfont->setShortcut(QApplication::translate("cartulinamain", "Ctrl+R", 0, QApplication::UnicodeUTF8));
    actionchangedefinitionfont->setText(QApplication::translate("cartulinamain", "Change Definition Font", 0, QApplication::UnicodeUTF8));
    actionchangedefinitionfont->setShortcut(QApplication::translate("cartulinamain", "Ctrl+E", 0, QApplication::UnicodeUTF8));
    actionshuffledeck->setText(QApplication::translate("cartulinamain", "Shuffle Deck", 0, QApplication::UnicodeUTF8));
    actionshuffledeck->setShortcut(QApplication::translate("cartulinamain", "Ctrl+S", 0, QApplication::UnicodeUTF8));
    wordlabel->setText(QApplication::translate("cartulinamain", "Cartulina", 0, QApplication::UnicodeUTF8));
    definitionlabel->setText(QApplication::translate("cartulinamain", "A program to simulate a deck of flashcards", 0, QApplication::UnicodeUTF8));
    leftpush->setText(QApplication::translate("cartulinamain", "<", 0, QApplication::UnicodeUTF8));
    leftpush->setShortcut(QApplication::translate("cartulinamain", "Left", 0, QApplication::UnicodeUTF8));
    statuslabel->setText(QApplication::translate("cartulinamain", "0 of 0", 0, QApplication::UnicodeUTF8));
    rightpush->setText(QApplication::translate("cartulinamain", ">", 0, QApplication::UnicodeUTF8));
    rightpush->setShortcut(QApplication::translate("cartulinamain", "Right", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("cartulinamain", "File", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("cartulinamain", "Help", 0, QApplication::UnicodeUTF8));
    menuCartulina_Help->setTitle(QApplication::translate("cartulinamain", "flashCard Info", 0, QApplication::UnicodeUTF8));
    menuOptions->setTitle(QApplication::translate("cartulinamain", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cartulinamain: public Ui_cartulinamain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTULINA_H

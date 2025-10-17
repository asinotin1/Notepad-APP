/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actioncut;
    QAction *actioncoppy;
    QAction *actionpaste;
    QAction *actionredo;
    QAction *actionUndo;
    QAction *actionAbout_notepad;
    QAction *actionFONT;
    QAction *actionColor;
    QAction *actionBackgroud_color;
    QAction *actionBackgroud_color_text_edit;
    QAction *actionPrint;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuedit;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(875, 596);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/save_as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_as->setIcon(icon3);
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName("actioncut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actioncut->setIcon(icon4);
        actioncoppy = new QAction(MainWindow);
        actioncoppy->setObjectName("actioncoppy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actioncoppy->setIcon(icon5);
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName("actionpaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionpaste->setIcon(icon6);
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName("actionredo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionredo->setIcon(icon7);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon8);
        actionAbout_notepad = new QAction(MainWindow);
        actionAbout_notepad->setObjectName("actionAbout_notepad");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/about_file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout_notepad->setIcon(icon9);
        actionFONT = new QAction(MainWindow);
        actionFONT->setObjectName("actionFONT");
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        actionBackgroud_color = new QAction(MainWindow);
        actionBackgroud_color->setObjectName("actionBackgroud_color");
        actionBackgroud_color_text_edit = new QAction(MainWindow);
        actionBackgroud_color_text_edit->setObjectName("actionBackgroud_color_text_edit");
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 875, 25));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuedit = new QMenu(menubar);
        menuedit->setObjectName("menuedit");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuedit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menufile->addAction(actionNew);
        menufile->addAction(actionOpen);
        menufile->addAction(actionSave);
        menufile->addAction(actionSave_as);
        menuedit->addAction(actioncut);
        menuedit->addAction(actioncoppy);
        menuedit->addAction(actionpaste);
        menuedit->addAction(actionredo);
        menuedit->addAction(actionUndo);
        menuedit->addAction(actionFONT);
        menuedit->addAction(actionColor);
        menuedit->addAction(actionBackgroud_color);
        menuedit->addAction(actionBackgroud_color_text_edit);
        menuedit->addAction(actionPrint);
        menuAbout->addAction(actionAbout_notepad);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actioncut);
        toolBar->addSeparator();
        toolBar->addAction(actioncoppy);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionpaste);
        toolBar->addSeparator();
        toolBar->addAction(actionredo);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout_notepad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actioncut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actioncoppy->setText(QCoreApplication::translate("MainWindow", "copy", nullptr));
        actionpaste->setText(QCoreApplication::translate("MainWindow", "paste", nullptr));
        actionredo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionAbout_notepad->setText(QCoreApplication::translate("MainWindow", "About notepad", nullptr));
        actionFONT->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionBackgroud_color->setText(QCoreApplication::translate("MainWindow", "Backgroud color", nullptr));
        actionBackgroud_color_text_edit->setText(QCoreApplication::translate("MainWindow", "Backgroud color text edit", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuedit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

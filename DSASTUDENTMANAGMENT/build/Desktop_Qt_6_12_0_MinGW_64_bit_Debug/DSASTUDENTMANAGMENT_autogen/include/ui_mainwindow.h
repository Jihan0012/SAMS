/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *sidebarfram;
    QPushButton *pageDashboard;
    QPushButton *Insert;
    QPushButton *pagrDisplay;
    QPushButton *pageSearch;
    QPushButton *pageEdit;
    QPushButton *pageDelete;
    QPushButton *pageCourseManagment;
    QPushButton *pageCalculator;
    QPushButton *pageProgress;
    QPushButton *pageSettings;
    QPushButton *pageExit;
    QLabel *pageSAMS;
    QLabel *pageMTI;
    QFrame *frameTitle;
    QLabel *labelSAMS;
    QPushButton *btnAdmin;
    QPushButton *btnCources;
    QPushButton *btnAverageCGPA;
    QFrame *framePerformance;
    QPushButton *btnStatus;
    QLabel *labelSTatus;
    QFrame *frameQuickAction;
    QLabel *labelQuickAction;
    QPushButton *btnCalculator;
    QPushButton *pageInsertCourse;
    QPushButton *pageDeleteCourse;
    QPushButton *pageSearchCourse;
    QFrame *frameTodo;
    QLabel *label;
    QLineEdit *taskinput;
    QPushButton *addTaskbtn;
    QListWidget *listWidgetToWright;
    QPushButton *btnTaskDelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1283, 726);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sidebarfram = new QFrame(centralwidget);
        sidebarfram->setObjectName("sidebarfram");
        sidebarfram->setGeometry(QRect(0, 0, 220, 691));
        sidebarfram->setMinimumSize(QSize(220, 0));
        sidebarfram->setMaximumSize(QSize(215, 16777215));
        sidebarfram->setFrameShape(QFrame::Shape::StyledPanel);
        sidebarfram->setFrameShadow(QFrame::Shadow::Raised);
        pageDashboard = new QPushButton(sidebarfram);
        pageDashboard->setObjectName("pageDashboard");
        pageDashboard->setGeometry(QRect(10, 140, 111, 31));
        Insert = new QPushButton(sidebarfram);
        Insert->setObjectName("Insert");
        Insert->setGeometry(QRect(10, 190, 131, 31));
        pagrDisplay = new QPushButton(sidebarfram);
        pagrDisplay->setObjectName("pagrDisplay");
        pagrDisplay->setGeometry(QRect(10, 240, 151, 31));
        pageSearch = new QPushButton(sidebarfram);
        pageSearch->setObjectName("pageSearch");
        pageSearch->setGeometry(QRect(10, 290, 151, 31));
        pageEdit = new QPushButton(sidebarfram);
        pageEdit->setObjectName("pageEdit");
        pageEdit->setGeometry(QRect(10, 330, 161, 31));
        pageDelete = new QPushButton(sidebarfram);
        pageDelete->setObjectName("pageDelete");
        pageDelete->setGeometry(QRect(10, 380, 161, 41));
        pageCourseManagment = new QPushButton(sidebarfram);
        pageCourseManagment->setObjectName("pageCourseManagment");
        pageCourseManagment->setGeometry(QRect(10, 440, 191, 31));
        pageCalculator = new QPushButton(sidebarfram);
        pageCalculator->setObjectName("pageCalculator");
        pageCalculator->setGeometry(QRect(10, 490, 201, 31));
        pageProgress = new QPushButton(sidebarfram);
        pageProgress->setObjectName("pageProgress");
        pageProgress->setGeometry(QRect(10, 540, 191, 31));
        pageSettings = new QPushButton(sidebarfram);
        pageSettings->setObjectName("pageSettings");
        pageSettings->setGeometry(QRect(10, 590, 93, 29));
        pageExit = new QPushButton(sidebarfram);
        pageExit->setObjectName("pageExit");
        pageExit->setGeometry(QRect(10, 630, 93, 29));
        pageSAMS = new QLabel(sidebarfram);
        pageSAMS->setObjectName("pageSAMS");
        pageSAMS->setGeometry(QRect(50, 10, 111, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        pageSAMS->setFont(font1);
        pageMTI = new QLabel(sidebarfram);
        pageMTI->setObjectName("pageMTI");
        pageMTI->setGeometry(QRect(10, 70, 201, 31));
        frameTitle = new QFrame(centralwidget);
        frameTitle->setObjectName("frameTitle");
        frameTitle->setGeometry(QRect(230, 0, 881, 81));
        frameTitle->setFrameShape(QFrame::Shape::StyledPanel);
        frameTitle->setFrameShadow(QFrame::Shadow::Raised);
        labelSAMS = new QLabel(frameTitle);
        labelSAMS->setObjectName("labelSAMS");
        labelSAMS->setGeometry(QRect(10, 10, 571, 61));
        labelSAMS->setFont(font1);
        btnAdmin = new QPushButton(frameTitle);
        btnAdmin->setObjectName("btnAdmin");
        btnAdmin->setGeometry(QRect(690, 10, 181, 61));
        btnCources = new QPushButton(centralwidget);
        btnCources->setObjectName("btnCources");
        btnCources->setGeometry(QRect(680, 240, 171, 71));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        btnCources->setFont(font2);
        btnAverageCGPA = new QPushButton(centralwidget);
        btnAverageCGPA->setObjectName("btnAverageCGPA");
        btnAverageCGPA->setGeometry(QRect(490, 240, 171, 71));
        btnAverageCGPA->setFont(font2);
        framePerformance = new QFrame(centralwidget);
        framePerformance->setObjectName("framePerformance");
        framePerformance->setGeometry(QRect(240, 240, 231, 121));
        QFont font3;
        font3.setPointSize(1);
        font3.setBold(true);
        framePerformance->setFont(font3);
        framePerformance->setFrameShape(QFrame::Shape::StyledPanel);
        framePerformance->setFrameShadow(QFrame::Shadow::Raised);
        btnStatus = new QPushButton(framePerformance);
        btnStatus->setObjectName("btnStatus");
        btnStatus->setGeometry(QRect(10, 40, 191, 71));
        btnStatus->setFont(font);
        labelSTatus = new QLabel(framePerformance);
        labelSTatus->setObjectName("labelSTatus");
        labelSTatus->setGeometry(QRect(10, 10, 211, 21));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        labelSTatus->setFont(font4);
        frameQuickAction = new QFrame(centralwidget);
        frameQuickAction->setObjectName("frameQuickAction");
        frameQuickAction->setGeometry(QRect(230, 90, 951, 131));
        frameQuickAction->setFrameShape(QFrame::Shape::StyledPanel);
        frameQuickAction->setFrameShadow(QFrame::Shadow::Raised);
        labelQuickAction = new QLabel(frameQuickAction);
        labelQuickAction->setObjectName("labelQuickAction");
        labelQuickAction->setGeometry(QRect(10, 10, 181, 31));
        labelQuickAction->setFont(font4);
        btnCalculator = new QPushButton(frameQuickAction);
        btnCalculator->setObjectName("btnCalculator");
        btnCalculator->setGeometry(QRect(10, 40, 171, 71));
        pageInsertCourse = new QPushButton(frameQuickAction);
        pageInsertCourse->setObjectName("pageInsertCourse");
        pageInsertCourse->setGeometry(QRect(190, 40, 141, 71));
        pageDeleteCourse = new QPushButton(frameQuickAction);
        pageDeleteCourse->setObjectName("pageDeleteCourse");
        pageDeleteCourse->setGeometry(QRect(350, 40, 141, 71));
        pageSearchCourse = new QPushButton(frameQuickAction);
        pageSearchCourse->setObjectName("pageSearchCourse");
        pageSearchCourse->setGeometry(QRect(510, 40, 131, 71));
        frameTodo = new QFrame(centralwidget);
        frameTodo->setObjectName("frameTodo");
        frameTodo->setGeometry(QRect(240, 370, 551, 351));
        frameTodo->setFrameShape(QFrame::Shape::StyledPanel);
        frameTodo->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frameTodo);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 161, 31));
        label->setFont(font4);
        taskinput = new QLineEdit(frameTodo);
        taskinput->setObjectName("taskinput");
        taskinput->setGeometry(QRect(10, 40, 151, 31));
        addTaskbtn = new QPushButton(frameTodo);
        addTaskbtn->setObjectName("addTaskbtn");
        addTaskbtn->setGeometry(QRect(190, 20, 131, 51));
        addTaskbtn->setFont(font);
        listWidgetToWright = new QListWidget(frameTodo);
        listWidgetToWright->setObjectName("listWidgetToWright");
        listWidgetToWright->setGeometry(QRect(10, 80, 511, 251));
        btnTaskDelete = new QPushButton(frameTodo);
        btnTaskDelete->setObjectName("btnTaskDelete");
        btnTaskDelete->setGeometry(QRect(340, 20, 121, 51));
        btnTaskDelete->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pageDashboard->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        Insert->setText(QCoreApplication::translate("MainWindow", "Insert Course", nullptr));
        pagrDisplay->setText(QCoreApplication::translate("MainWindow", "Display Cources", nullptr));
        pageSearch->setText(QCoreApplication::translate("MainWindow", "Search Cources", nullptr));
        pageEdit->setText(QCoreApplication::translate("MainWindow", "Edit Student Info", nullptr));
        pageDelete->setText(QCoreApplication::translate("MainWindow", "Delete Cources", nullptr));
        pageCourseManagment->setText(QCoreApplication::translate("MainWindow", "Course Managment", nullptr));
        pageCalculator->setText(QCoreApplication::translate("MainWindow", "GPA & CGPA Calculator", nullptr));
        pageProgress->setText(QCoreApplication::translate("MainWindow", "Academic Progress", nullptr));
        pageSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pageExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pageSAMS->setText(QCoreApplication::translate("MainWindow", "  SAMS", nullptr));
        pageMTI->setText(QCoreApplication::translate("MainWindow", "  Manage.Track.Improve", nullptr));
        labelSAMS->setText(QCoreApplication::translate("MainWindow", "Student Academic Managment System", nullptr));
        btnAdmin->setText(QCoreApplication::translate("MainWindow", "Welcome, Admin", nullptr));
        btnCources->setText(QCoreApplication::translate("MainWindow", "Total cources", nullptr));
        btnAverageCGPA->setText(QCoreApplication::translate("MainWindow", "Average CGPA", nullptr));
        btnStatus->setText(QCoreApplication::translate("MainWindow", "Improving!/", nullptr));
        labelSTatus->setText(QCoreApplication::translate("MainWindow", "Performance Status", nullptr));
        labelQuickAction->setText(QCoreApplication::translate("MainWindow", "Quick Action", nullptr));
        btnCalculator->setText(QCoreApplication::translate("MainWindow", "Calculate CGPA & GPA", nullptr));
        pageInsertCourse->setText(QCoreApplication::translate("MainWindow", "Insert course", nullptr));
        pageDeleteCourse->setText(QCoreApplication::translate("MainWindow", "Delete Course", nullptr));
        pageSearchCourse->setText(QCoreApplication::translate("MainWindow", "Search Course", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "My Todo List", nullptr));
        taskinput->setText(QCoreApplication::translate("MainWindow", "Enter Your Tasks", nullptr));
        addTaskbtn->setText(QCoreApplication::translate("MainWindow", "+Add Tasks", nullptr));
        btnTaskDelete->setText(QCoreApplication::translate("MainWindow", "Delete Tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

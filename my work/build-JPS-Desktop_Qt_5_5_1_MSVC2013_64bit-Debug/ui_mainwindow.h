/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *CloseButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *DeleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkButton;
    QPushButton *CreateButton;
    QSplitter *splitter_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QTableView *tableView;
    QSplitter *splitter;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *Nameline;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *quantity;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *factor;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *total;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CloseButton = new QPushButton(centralWidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        gridLayout->addWidget(CloseButton, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        gridLayout->addWidget(DeleteButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 7, 1, 1);

        OkButton = new QPushButton(centralWidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));

        gridLayout->addWidget(OkButton, 0, 5, 1, 1);

        CreateButton = new QPushButton(centralWidget);
        CreateButton->setObjectName(QStringLiteral("CreateButton"));

        gridLayout->addWidget(CreateButton, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_6->addWidget(label);

        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_6->addWidget(tableView);

        splitter_2->addWidget(widget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        Nameline = new QLineEdit(widget1);
        Nameline->setObjectName(QStringLiteral("Nameline"));

        verticalLayout_2->addWidget(Nameline);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setCheckable(true);
        checkBox->setChecked(true);
        checkBox->setAutoRepeat(false);
        checkBox->setTristate(false);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        quantity = new QLineEdit(widget1);
        quantity->setObjectName(QStringLiteral("quantity"));

        verticalLayout_3->addWidget(quantity);


        gridLayout_2->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        factor = new QLineEdit(widget1);
        factor->setObjectName(QStringLiteral("factor"));

        verticalLayout_4->addWidget(factor);


        gridLayout_2->addLayout(verticalLayout_4, 0, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        total = new QLineEdit(widget1);
        total->setObjectName(QStringLiteral("total"));

        verticalLayout_5->addWidget(total);


        gridLayout_2->addLayout(verticalLayout_5, 0, 4, 1, 1);

        splitter->addWidget(widget1);
        splitter_2->addWidget(splitter);

        gridLayout_3->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuFile->addAction(action);
        menuFile->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addAction(action_5);
        menu->addAction(action_7);
        menu_2->addAction(action_6);

        retranslateUi(MainWindow);
        QObject::connect(checkBox_2, SIGNAL(clicked()), checkBox, SLOT(toggle()));
        QObject::connect(checkBox, SIGNAL(clicked()), checkBox_2, SLOT(toggle()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", 0));
        action_6->setText(QApplication::translate("MainWindow", "\321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276", 0));
        action_7->setText(QApplication::translate("MainWindow", "\320\242\320\225\320\241\320\242\320\236\320\222\320\236\320\225 \320\236\320\232\320\235\320\236 \320\221\320\225\320\227 \320\244\320\243\320\235\320\232\320\246\320\230\320\236\320\235\320\220\320\233\320\220", 0));
        CloseButton->setText(QApplication::translate("MainWindow", "&Close", 0));
        DeleteButton->setText(QApplication::translate("MainWindow", "&Delete", 0));
        OkButton->setText(QApplication::translate("MainWindow", "&Ok", 0));
        CreateButton->setText(QApplication::translate("MainWindow", "C&reate", 0));
        label->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270, \320\227\320\224\320\225\320\241\320\254 \320\221\320\243\320\224\320\225\320\242 \320\242\320\220\320\221\320\233\320\230\320\246\320\220 SQLite, \320\275\320\260\320\264\320\276 \321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214, \320\272\320\260\320\272 \320\270\321\205 \321\201\320\262\321\217\320\267\320\260\321\202\321\214", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\205\320\276\320\264", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\205\320\276\320\264", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 ", 0));
        label_4->setText(QApplication::translate("MainWindow", "\321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\267\320\260 \321\210\321\202/\320\272\320\263", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\230\321\202\320\276\320\263\320\276", 0));
        total->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

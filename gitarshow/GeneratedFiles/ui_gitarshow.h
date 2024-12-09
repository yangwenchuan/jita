/********************************************************************************
** Form generated from reading UI file 'gitarshow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITARSHOW_H
#define UI_GITARSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gitarshowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_Refresh;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gitarshowClass)
    {
        if (gitarshowClass->objectName().isEmpty())
            gitarshowClass->setObjectName(QString::fromUtf8("gitarshowClass"));
        gitarshowClass->resize(1428, 1578);
        gitarshowClass->setIconSize(QSize(0, 0));
        centralWidget = new QWidget(gitarshowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_Name = new QLineEdit(centralWidget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setMaximumSize(QSize(400, 16777215));

        horizontalLayout->addWidget(lineEdit_Name);

        pushButton_Search = new QPushButton(centralWidget);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));

        horizontalLayout->addWidget(pushButton_Search);

        pushButton_Refresh = new QPushButton(centralWidget);
        pushButton_Refresh->setObjectName(QString::fromUtf8("pushButton_Refresh"));

        horizontalLayout->addWidget(pushButton_Refresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalLayout_2->setStretch(0, 20);
        horizontalLayout_2->setStretch(1, 100);
        horizontalLayout_2->setStretch(2, 100);
        horizontalLayout_2->setStretch(3, 100);

        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        gitarshowClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(gitarshowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        gitarshowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(gitarshowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        gitarshowClass->setStatusBar(statusBar);

        retranslateUi(gitarshowClass);

        QMetaObject::connectSlotsByName(gitarshowClass);
    } // setupUi

    void retranslateUi(QMainWindow *gitarshowClass)
    {
        gitarshowClass->setWindowTitle(QApplication::translate("gitarshowClass", "gitarshow", 0, QApplication::UnicodeUTF8));
        pushButton_Search->setText(QApplication::translate("gitarshowClass", "\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        pushButton_Refresh->setText(QApplication::translate("gitarshowClass", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("gitarshowClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("gitarshowClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("gitarshowClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gitarshowClass: public Ui_gitarshowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITARSHOW_H

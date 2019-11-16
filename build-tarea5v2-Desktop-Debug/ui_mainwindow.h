/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QFrame *Figura;
    QPushButton *showFigure;
    QSpinBox *numLados;
    QLabel *label;
    QComboBox *Figuras2d;
    QLabel *label_2;
    QFrame *Transforms;
    QPushButton *cancelTransf;
    QLabel *label_7;
    QLineEdit *rotateAngle;
    QPushButton *okRefle;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *okRota;
    QLineEdit *trasX;
    QLabel *label_4;
    QComboBox *reflect;
    QLabel *label_3;
    QLineEdit *trasY;
    QLabel *label_8;
    QPushButton *plusZoom;
    QPushButton *minusZoom;
    QPushButton *okTras;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(997, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(480, 60, 471, 391));
        Figura = new QFrame(centralWidget);
        Figura->setObjectName(QString::fromUtf8("Figura"));
        Figura->setGeometry(QRect(70, 30, 281, 201));
        Figura->setFrameShape(QFrame::StyledPanel);
        Figura->setFrameShadow(QFrame::Raised);
        showFigure = new QPushButton(Figura);
        showFigure->setObjectName(QString::fromUtf8("showFigure"));
        showFigure->setGeometry(QRect(60, 160, 89, 25));
        numLados = new QSpinBox(Figura);
        numLados->setObjectName(QString::fromUtf8("numLados"));
        numLados->setGeometry(QRect(60, 100, 48, 26));
        numLados->setMinimum(1);
        numLados->setMaximum(12);
        label = new QLabel(Figura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 131, 17));
        Figuras2d = new QComboBox(Figura);
        Figuras2d->setObjectName(QString::fromUtf8("Figuras2d"));
        Figuras2d->setGeometry(QRect(60, 30, 101, 25));
        label_2 = new QLabel(Figura);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 141, 17));
        Transforms = new QFrame(centralWidget);
        Transforms->setObjectName(QString::fromUtf8("Transforms"));
        Transforms->setGeometry(QRect(60, 240, 311, 291));
        Transforms->setFrameShape(QFrame::StyledPanel);
        Transforms->setFrameShadow(QFrame::Raised);
        cancelTransf = new QPushButton(Transforms);
        cancelTransf->setObjectName(QString::fromUtf8("cancelTransf"));
        cancelTransf->setGeometry(QRect(120, 260, 89, 25));
        label_7 = new QLabel(Transforms);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 70, 16, 17));
        rotateAngle = new QLineEdit(Transforms);
        rotateAngle->setObjectName(QString::fromUtf8("rotateAngle"));
        rotateAngle->setGeometry(QRect(30, 140, 81, 25));
        okRefle = new QPushButton(Transforms);
        okRefle->setObjectName(QString::fromUtf8("okRefle"));
        okRefle->setGeometry(QRect(210, 200, 89, 25));
        label_5 = new QLabel(Transforms);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 170, 131, 17));
        label_6 = new QLabel(Transforms);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 70, 21, 17));
        okRota = new QPushButton(Transforms);
        okRota->setObjectName(QString::fromUtf8("okRota"));
        okRota->setGeometry(QRect(210, 140, 89, 25));
        trasX = new QLineEdit(Transforms);
        trasX->setObjectName(QString::fromUtf8("trasX"));
        trasX->setGeometry(QRect(50, 70, 41, 21));
        label_4 = new QLabel(Transforms);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 121, 17));
        reflect = new QComboBox(Transforms);
        reflect->setObjectName(QString::fromUtf8("reflect"));
        reflect->setGeometry(QRect(30, 200, 86, 25));
        label_3 = new QLabel(Transforms);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 71, 17));
        trasY = new QLineEdit(Transforms);
        trasY->setObjectName(QString::fromUtf8("trasY"));
        trasY->setGeometry(QRect(130, 70, 41, 21));
        label_8 = new QLabel(Transforms);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 0, 67, 17));
        plusZoom = new QPushButton(Transforms);
        plusZoom->setObjectName(QString::fromUtf8("plusZoom"));
        plusZoom->setGeometry(QRect(210, 20, 21, 21));
        minusZoom = new QPushButton(Transforms);
        minusZoom->setObjectName(QString::fromUtf8("minusZoom"));
        minusZoom->setGeometry(QRect(250, 20, 21, 21));
        okTras = new QPushButton(Transforms);
        okTras->setObjectName(QString::fromUtf8("okTras"));
        okTras->setGeometry(QRect(210, 70, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        showFigure->setText(QApplication::translate("MainWindow", "Generar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Seleccione Figura:", 0, QApplication::UnicodeUTF8));
        Figuras2d->clear();
        Figuras2d->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Arco", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pol\303\255gono", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cubo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Prisma Rectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Prisma Triangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cono", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "Lados del pol\303\255gono:", 0, QApplication::UnicodeUTF8));
        cancelTransf->setText(QApplication::translate("MainWindow", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "y:", 0, QApplication::UnicodeUTF8));
        okRefle->setText(QApplication::translate("MainWindow", "Aplicar", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Direcci\303\263n Reflexi\303\263n", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "x:", 0, QApplication::UnicodeUTF8));
        okRota->setText(QApplication::translate("MainWindow", "Aplicar", 0, QApplication::UnicodeUTF8));
        trasX->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\303\201ngulo Rotaci\303\263n:", 0, QApplication::UnicodeUTF8));
        reflect->clear();
        reflect->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "y", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "Traslacion: ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Zoom:", 0, QApplication::UnicodeUTF8));
        plusZoom->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        minusZoom->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        okTras->setText(QApplication::translate("MainWindow", "Aplicar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

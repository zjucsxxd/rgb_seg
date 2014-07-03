/********************************************************************************
** Form generated from reading UI file 'rgb_seg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGB_SEG_H
#define UI_RGB_SEG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rgb_segClass
{
public:
    QWidget *centralWidget;
    QPushButton *Open;
    QPushButton *Close;
    QSlider *SpatialRad_Slider;
    QLabel *Label;
    QLabel *Qimage_Label;
    QLabel *Qimage_Label_2;
    QLabel *Label_2;
    QSlider *ColorRad_Slider;
    QLabel *Label_3;
    QSlider *maxPryLevel_Slider;
    QSpinBox *SptialValue;
    QSpinBox *ColorValue;
    QSpinBox *PryLevelValue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rgb_segClass)
    {
        if (rgb_segClass->objectName().isEmpty())
            rgb_segClass->setObjectName(QStringLiteral("rgb_segClass"));
        rgb_segClass->setEnabled(true);
        rgb_segClass->resize(713, 482);
        centralWidget = new QWidget(rgb_segClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Open = new QPushButton(centralWidget);
        Open->setObjectName(QStringLiteral("Open"));
        Open->setGeometry(QRect(560, 300, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Open->setFont(font);
        Close = new QPushButton(centralWidget);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(560, 370, 91, 41));
        Close->setFont(font);
        SpatialRad_Slider = new QSlider(centralWidget);
        SpatialRad_Slider->setObjectName(QStringLiteral("SpatialRad_Slider"));
        SpatialRad_Slider->setEnabled(true);
        SpatialRad_Slider->setGeometry(QRect(490, 120, 161, 21));
        SpatialRad_Slider->setMinimum(5);
        SpatialRad_Slider->setOrientation(Qt::Horizontal);
        Label = new QLabel(centralWidget);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setEnabled(true);
        Label->setGeometry(QRect(420, 120, 71, 20));
        Qimage_Label = new QLabel(centralWidget);
        Qimage_Label->setObjectName(QStringLiteral("Qimage_Label"));
        Qimage_Label->setGeometry(QRect(0, 0, 351, 161));
        Qimage_Label_2 = new QLabel(centralWidget);
        Qimage_Label_2->setObjectName(QStringLiteral("Qimage_Label_2"));
        Qimage_Label_2->setGeometry(QRect(0, 220, 351, 161));
        Label_2 = new QLabel(centralWidget);
        Label_2->setObjectName(QStringLiteral("Label_2"));
        Label_2->setEnabled(true);
        Label_2->setGeometry(QRect(420, 160, 71, 20));
        ColorRad_Slider = new QSlider(centralWidget);
        ColorRad_Slider->setObjectName(QStringLiteral("ColorRad_Slider"));
        ColorRad_Slider->setEnabled(true);
        ColorRad_Slider->setGeometry(QRect(490, 160, 161, 21));
        ColorRad_Slider->setMinimum(5);
        ColorRad_Slider->setOrientation(Qt::Horizontal);
        Label_3 = new QLabel(centralWidget);
        Label_3->setObjectName(QStringLiteral("Label_3"));
        Label_3->setEnabled(true);
        Label_3->setGeometry(QRect(420, 200, 71, 20));
        maxPryLevel_Slider = new QSlider(centralWidget);
        maxPryLevel_Slider->setObjectName(QStringLiteral("maxPryLevel_Slider"));
        maxPryLevel_Slider->setEnabled(true);
        maxPryLevel_Slider->setGeometry(QRect(490, 200, 161, 21));
        maxPryLevel_Slider->setMaximum(5);
        maxPryLevel_Slider->setOrientation(Qt::Horizontal);
        SptialValue = new QSpinBox(centralWidget);
        SptialValue->setObjectName(QStringLiteral("SptialValue"));
        SptialValue->setEnabled(true);
        SptialValue->setGeometry(QRect(660, 120, 42, 22));
        ColorValue = new QSpinBox(centralWidget);
        ColorValue->setObjectName(QStringLiteral("ColorValue"));
        ColorValue->setEnabled(true);
        ColorValue->setGeometry(QRect(660, 160, 42, 22));
        PryLevelValue = new QSpinBox(centralWidget);
        PryLevelValue->setObjectName(QStringLiteral("PryLevelValue"));
        PryLevelValue->setEnabled(true);
        PryLevelValue->setGeometry(QRect(660, 200, 42, 22));
        rgb_segClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(rgb_segClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 23));
        rgb_segClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(rgb_segClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rgb_segClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rgb_segClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rgb_segClass->setStatusBar(statusBar);

        retranslateUi(rgb_segClass);

        QMetaObject::connectSlotsByName(rgb_segClass);
    } // setupUi

    void retranslateUi(QMainWindow *rgb_segClass)
    {
        rgb_segClass->setWindowTitle(QApplication::translate("rgb_segClass", "rgb_seg", 0));
#ifndef QT_NO_TOOLTIP
        Open->setToolTip(QApplication::translate("rgb_segClass", "<html><head/><body><p>\346\211\223\345\274\200\345\233\276</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Open->setWhatsThis(QApplication::translate("rgb_segClass", "<html><head/><body><p>\346\211\223\345\274\200\345\233\276\347\211\207</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Open->setText(QApplication::translate("rgb_segClass", "Open", 0));
#ifndef QT_NO_TOOLTIP
        Close->setToolTip(QApplication::translate("rgb_segClass", "<html><head/><body><p>\346\270\205\351\231\244</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Close->setWhatsThis(QApplication::translate("rgb_segClass", "<html><head/><body><p>\346\270\205\347\251\272</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Close->setText(QApplication::translate("rgb_segClass", "Close", 0));
        Label->setText(QApplication::translate("rgb_segClass", "SpatialRad", 0));
        Qimage_Label->setText(QString());
        Qimage_Label_2->setText(QString());
        Label_2->setText(QApplication::translate("rgb_segClass", "ColorRad", 0));
        Label_3->setText(QApplication::translate("rgb_segClass", "MaxPryLevel", 0));
    } // retranslateUi

};

namespace Ui {
    class rgb_segClass: public Ui_rgb_segClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGB_SEG_H

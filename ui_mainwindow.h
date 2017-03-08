/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_8;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *label_2;
    QPushButton *pushButton_21;
    QPushButton *pushButton_29;
    QLabel *label_5;
    QPushButton *pushButton_20;
    QPushButton *pushButton_30;
    QLabel *label_8;
    QPushButton *pushButton_25;
    QLabel *label_7;
    QPushButton *pushButton_24;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textOpenFile;
    QPushButton *openFile;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_prevStep;
    QPushButton *pushButton_3;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_nextStep;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *progressBar;
    QTextEdit *listCommand;
    QTextEdit *terminal;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *set_command;
    QPushButton *pushButton;
    QSplitter *splitter;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_6;
    QLabel *label_4;
    QPushButton *pushButton_19;
    QPushButton *pushButton_22;
    QPushButton *pushButton_18;
    QPushButton *pushButton_23;
    QSplitter *splitter_6;
    QSplitter *splitter_2;
    QPushButton *setOrigin;
    QPushButton *reset;
    QPushButton *resetError;
    QSplitter *splitter_5;
    QLabel *label_9;
    QSpinBox *SPEED;
    QSplitter *splitter_4;
    QComboBox *setCOM;
    QSplitter *splitter_3;
    QPushButton *Scan;
    QPushButton *connect;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuKAWA_GCODE;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(580, 370, 51, 61));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(510, 340, 51, 61));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(650, 340, 51, 61));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(570, 180, 47, 23));
        pushButton_14->setMinimumSize(QSize(27, 23));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(570, 204, 47, 23));
        pushButton_15->setMinimumSize(QSize(27, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 155, 29, 22));
        label_2->setMinimumSize(QSize(29, 22));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setLineWidth(1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(625, 204, 46, 23));
        pushButton_21->setMinimumSize(QSize(27, 23));
        pushButton_29 = new QPushButton(centralWidget);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(733, 180, 46, 23));
        pushButton_29->setMinimumSize(QSize(27, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(625, 155, 29, 22));
        label_5->setMinimumSize(QSize(29, 22));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(625, 180, 46, 23));
        pushButton_20->setMinimumSize(QSize(27, 23));
        pushButton_30 = new QPushButton(centralWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(733, 204, 46, 23));
        pushButton_30->setMinimumSize(QSize(27, 23));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(733, 155, 29, 22));
        label_8->setMinimumSize(QSize(29, 22));
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setLineWidth(1);
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_25 = new QPushButton(centralWidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(679, 204, 46, 23));
        pushButton_25->setMinimumSize(QSize(27, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(679, 155, 29, 22));
        label_7->setMinimumSize(QSize(29, 22));
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setLineWidth(1);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_24 = new QPushButton(centralWidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(679, 180, 46, 23));
        pushButton_24->setMinimumSize(QSize(27, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 430, 491));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textOpenFile = new QLineEdit(layoutWidget);
        textOpenFile->setObjectName(QStringLiteral("textOpenFile"));

        horizontalLayout->addWidget(textOpenFile);

        openFile = new QPushButton(layoutWidget);
        openFile->setObjectName(QStringLiteral("openFile"));

        horizontalLayout->addWidget(openFile);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_prevStep = new QPushButton(layoutWidget);
        pushButton_prevStep->setObjectName(QStringLiteral("pushButton_prevStep"));
        pushButton_prevStep->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_prevStep);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_play = new QPushButton(layoutWidget);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));

        horizontalLayout_2->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(layoutWidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));

        horizontalLayout_2->addWidget(pushButton_pause);

        pushButton_nextStep = new QPushButton(layoutWidget);
        pushButton_nextStep->setObjectName(QStringLiteral("pushButton_nextStep"));

        horizontalLayout_2->addWidget(pushButton_nextStep);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        listCommand = new QTextEdit(layoutWidget);
        listCommand->setObjectName(QStringLiteral("listCommand"));
        listCommand->setEnabled(true);
        listCommand->setReadOnly(true);

        verticalLayout->addWidget(listCommand);

        terminal = new QTextEdit(layoutWidget);
        terminal->setObjectName(QStringLiteral("terminal"));
        terminal->setEnabled(true);
        terminal->setReadOnly(true);

        verticalLayout->addWidget(terminal);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        set_command = new QLineEdit(layoutWidget);
        set_command->setObjectName(QStringLiteral("set_command"));
        set_command->setAutoFillBackground(false);
        set_command->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_3->addWidget(set_command);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(520, 440, 171, 61));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_11 = new QPushButton(splitter);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(true);
        splitter->addWidget(pushButton_11);
        pushButton_9 = new QPushButton(splitter);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        splitter->addWidget(pushButton_9);
        pushButton_10 = new QPushButton(splitter);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        splitter->addWidget(pushButton_10);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(462, 155, 29, 22));
        label_6->setMinimumSize(QSize(29, 22));
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(1);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setTextInteractionFlags(Qt::NoTextInteraction);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(516, 155, 29, 22));
        label_4->setMinimumSize(QSize(29, 22));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(1);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(516, 204, 46, 23));
        pushButton_19->setMinimumSize(QSize(27, 23));
        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(462, 180, 46, 23));
        pushButton_22->setMinimumSize(QSize(27, 23));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(516, 180, 46, 23));
        pushButton_18->setMinimumSize(QSize(27, 23));
        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(462, 204, 46, 23));
        pushButton_23->setMinimumSize(QSize(27, 23));
        splitter_6 = new QSplitter(centralWidget);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(460, 240, 321, 31));
        splitter_6->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_6);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        setOrigin = new QPushButton(splitter_2);
        setOrigin->setObjectName(QStringLiteral("setOrigin"));
        splitter_2->addWidget(setOrigin);
        reset = new QPushButton(splitter_2);
        reset->setObjectName(QStringLiteral("reset"));
        splitter_2->addWidget(reset);
        resetError = new QPushButton(splitter_2);
        resetError->setObjectName(QStringLiteral("resetError"));
        splitter_2->addWidget(resetError);
        splitter_6->addWidget(splitter_2);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        splitter_5->addWidget(label_9);
        SPEED = new QSpinBox(splitter_5);
        SPEED->setObjectName(QStringLiteral("SPEED"));
        SPEED->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        SPEED->setFont(font1);
        SPEED->setWrapping(false);
        SPEED->setMaximum(100);
        SPEED->setSingleStep(10);
        splitter_5->addWidget(SPEED);
        splitter_6->addWidget(splitter_5);
        splitter_4 = new QSplitter(centralWidget);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(461, 12, 331, 31));
        splitter_4->setOrientation(Qt::Horizontal);
        setCOM = new QComboBox(splitter_4);
        setCOM->setObjectName(QStringLiteral("setCOM"));
        setCOM->setMinimumSize(QSize(161, 0));
        splitter_4->addWidget(setCOM);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        Scan = new QPushButton(splitter_3);
        Scan->setObjectName(QStringLiteral("Scan"));
        splitter_3->addWidget(Scan);
        connect = new QPushButton(splitter_3);
        connect->setObjectName(QStringLiteral("connect"));
        splitter_3->addWidget(connect);
        splitter_4->addWidget(splitter_3);
        MainWindow->setCentralWidget(centralWidget);
        splitter->raise();
        label_6->raise();
        label_4->raise();
        pushButton_19->raise();
        pushButton_22->raise();
        pushButton_18->raise();
        pushButton_23->raise();
        splitter_6->raise();
        splitter_4->raise();
        pushButton_8->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        pushButton_15->raise();
        label_2->raise();
        layoutWidget->raise();
        pushButton_21->raise();
        pushButton_29->raise();
        label_5->raise();
        pushButton_20->raise();
        pushButton_30->raise();
        label_8->raise();
        pushButton_25->raise();
        label_7->raise();
        pushButton_24->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 24));
        menuKAWA_GCODE = new QMenu(menuBar);
        menuKAWA_GCODE->setObjectName(QStringLiteral("menuKAWA_GCODE"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuKAWA_GCODE->menuAction());
        menuKAWA_GCODE->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(pushButton_play, SIGNAL(clicked()), terminal, SLOT(clear()));
        QObject::connect(textOpenFile, SIGNAL(editingFinished()), listCommand, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Y+", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Z -", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "Z +", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "J3", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "J4", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "J6", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "J5", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Set G-code file:", Q_NULLPTR));
        openFile->setText(QApplication::translate("MainWindow", "Open file", Q_NULLPTR));
        pushButton_prevStep->setText(QApplication::translate("MainWindow", "Prev", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButton_play->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        pushButton_nextStep->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        listCommand->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        terminal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        set_command->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "SEND", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "X -", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Y -", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "X +", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "J1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "J2", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        setOrigin->setText(QApplication::translate("MainWindow", "set origin", Q_NULLPTR));
        reset->setText(QApplication::translate("MainWindow", "reset", Q_NULLPTR));
        resetError->setText(QApplication::translate("MainWindow", "error reset", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Speed:", Q_NULLPTR));
        setCOM->clear();
        setCOM->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", Q_NULLPTR)
        );
        Scan->setText(QApplication::translate("MainWindow", "Scan", Q_NULLPTR));
        connect->setText(QApplication::translate("MainWindow", "CONNECT", Q_NULLPTR));
        menuKAWA_GCODE->setTitle(QApplication::translate("MainWindow", "KAWA-GCODE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

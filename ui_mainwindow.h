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
#include <QtWidgets/QGridLayout>
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
    QAction *actionSend;
    QWidget *centralWidget;
    QPushButton *pushButton_YUp;
    QPushButton *pushButton_ZDown;
    QPushButton *pushButton_ZUp;
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
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_nextStep;
    QPushButton *startViaRobotButton;
    QPushButton *loadTofileButton;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *progressBar;
    QTextEdit *listCommand;
    QTextEdit *terminal;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *set_command;
    QPushButton *sendToTerminalButton;
    QSplitter *splitter;
    QPushButton *pushButton_XDown;
    QPushButton *pushButton_YDown;
    QPushButton *pushButton_XUp;
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
    QPushButton *scanCom;
    QPushButton *connectButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *j5_up;
    QPushButton *j1_down;
    QPushButton *j2_down;
    QPushButton *j6_up;
    QPushButton *j3_down;
    QPushButton *j5_down;
    QPushButton *j6_down;
    QPushButton *j4_down;
    QPushButton *j1_up;
    QPushButton *j2_up;
    QLabel *label_8;
    QPushButton *j3_up;
    QPushButton *j4_up;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_4;
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
        MainWindow->setMaximumSize(QSize(800, 600));
        actionSend = new QAction(MainWindow);
        actionSend->setObjectName(QStringLiteral("actionSend"));
        actionSend->setCheckable(true);
        actionSend->setEnabled(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_YUp = new QPushButton(centralWidget);
        pushButton_YUp->setObjectName(QStringLiteral("pushButton_YUp"));
        pushButton_YUp->setGeometry(QRect(590, 330, 51, 61));
        pushButton_ZDown = new QPushButton(centralWidget);
        pushButton_ZDown->setObjectName(QStringLiteral("pushButton_ZDown"));
        pushButton_ZDown->setGeometry(QRect(520, 300, 51, 61));
        pushButton_ZUp = new QPushButton(centralWidget);
        pushButton_ZUp->setObjectName(QStringLiteral("pushButton_ZUp"));
        pushButton_ZUp->setGeometry(QRect(660, 300, 51, 61));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 431, 521));
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

        verticalSpacer = new QSpacerItem(513, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_prevStep = new QPushButton(layoutWidget);
        pushButton_prevStep->setObjectName(QStringLiteral("pushButton_prevStep"));
        pushButton_prevStep->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_prevStep);

        pushButton_Stop = new QPushButton(layoutWidget);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));

        horizontalLayout_2->addWidget(pushButton_Stop);

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

        startViaRobotButton = new QPushButton(layoutWidget);
        startViaRobotButton->setObjectName(QStringLiteral("startViaRobotButton"));

        verticalLayout->addWidget(startViaRobotButton);

        loadTofileButton = new QPushButton(layoutWidget);
        loadTofileButton->setObjectName(QStringLiteral("loadTofileButton"));
        loadTofileButton->setAutoDefault(false);

        verticalLayout->addWidget(loadTofileButton);

        verticalSpacer_2 = new QSpacerItem(513, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);

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
        set_command->setMaxLength(150);
        set_command->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(set_command);

        sendToTerminalButton = new QPushButton(layoutWidget);
        sendToTerminalButton->setObjectName(QStringLiteral("sendToTerminalButton"));

        horizontalLayout_3->addWidget(sendToTerminalButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(530, 400, 171, 61));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_XDown = new QPushButton(splitter);
        pushButton_XDown->setObjectName(QStringLiteral("pushButton_XDown"));
        pushButton_XDown->setEnabled(true);
        splitter->addWidget(pushButton_XDown);
        pushButton_YDown = new QPushButton(splitter);
        pushButton_YDown->setObjectName(QStringLiteral("pushButton_YDown"));
        splitter->addWidget(pushButton_YDown);
        pushButton_XUp = new QPushButton(splitter);
        pushButton_XUp->setObjectName(QStringLiteral("pushButton_XUp"));
        splitter->addWidget(pushButton_XUp);
        splitter_6 = new QSplitter(centralWidget);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(460, 200, 321, 31));
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
        QFont font;
        font.setPointSize(12);
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
        scanCom = new QPushButton(splitter_3);
        scanCom->setObjectName(QStringLiteral("scanCom"));
        splitter_3->addWidget(scanCom);
        connectButton = new QPushButton(splitter_3);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        splitter_3->addWidget(connectButton);
        splitter_4->addWidget(splitter_3);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(460, 70, 331, 101));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        j5_up = new QPushButton(layoutWidget1);
        j5_up->setObjectName(QStringLiteral("j5_up"));
        j5_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j5_up, 1, 4, 1, 1);

        j1_down = new QPushButton(layoutWidget1);
        j1_down->setObjectName(QStringLiteral("j1_down"));
        j1_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j1_down, 2, 0, 1, 1);

        j2_down = new QPushButton(layoutWidget1);
        j2_down->setObjectName(QStringLiteral("j2_down"));
        j2_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j2_down, 2, 1, 1, 1);

        j6_up = new QPushButton(layoutWidget1);
        j6_up->setObjectName(QStringLiteral("j6_up"));
        j6_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j6_up, 1, 5, 1, 1);

        j3_down = new QPushButton(layoutWidget1);
        j3_down->setObjectName(QStringLiteral("j3_down"));
        j3_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j3_down, 2, 2, 1, 1);

        j5_down = new QPushButton(layoutWidget1);
        j5_down->setObjectName(QStringLiteral("j5_down"));
        j5_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j5_down, 2, 4, 1, 1);

        j6_down = new QPushButton(layoutWidget1);
        j6_down->setObjectName(QStringLiteral("j6_down"));
        j6_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j6_down, 2, 5, 1, 1);

        j4_down = new QPushButton(layoutWidget1);
        j4_down->setObjectName(QStringLiteral("j4_down"));
        j4_down->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j4_down, 2, 3, 1, 1);

        j1_up = new QPushButton(layoutWidget1);
        j1_up->setObjectName(QStringLiteral("j1_up"));
        j1_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j1_up, 1, 0, 1, 1);

        j2_up = new QPushButton(layoutWidget1);
        j2_up->setObjectName(QStringLiteral("j2_up"));
        j2_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j2_up, 1, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(29, 22));
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setLineWidth(1);
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_8, 0, 5, 1, 1);

        j3_up = new QPushButton(layoutWidget1);
        j3_up->setObjectName(QStringLiteral("j3_up"));
        j3_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j3_up, 1, 2, 1, 1);

        j4_up = new QPushButton(layoutWidget1);
        j4_up->setObjectName(QStringLiteral("j4_up"));
        j4_up->setMinimumSize(QSize(27, 23));

        gridLayout->addWidget(j4_up, 1, 3, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(29, 22));
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(1);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(29, 22));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setLineWidth(1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(29, 22));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(29, 22));
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setLineWidth(1);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_7, 0, 4, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(29, 22));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(1);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        splitter->raise();
        splitter_6->raise();
        splitter_4->raise();
        pushButton_YUp->raise();
        pushButton_ZDown->raise();
        pushButton_ZUp->raise();
        layoutWidget->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 19));
        menuKAWA_GCODE = new QMenu(menuBar);
        menuKAWA_GCODE->setObjectName(QStringLiteral("menuKAWA_GCODE"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuKAWA_GCODE->menuAction());
        menuKAWA_GCODE->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(textOpenFile, SIGNAL(editingFinished()), listCommand, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSend->setToolTip(QApplication::translate("MainWindow", "Send command", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSend->setShortcut(QApplication::translate("MainWindow", "Enter", Q_NULLPTR));
        pushButton_YUp->setText(QApplication::translate("MainWindow", "Y+", Q_NULLPTR));
        pushButton_ZDown->setText(QApplication::translate("MainWindow", "Z -", Q_NULLPTR));
        pushButton_ZUp->setText(QApplication::translate("MainWindow", "Z +", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Open GCODE file:", Q_NULLPTR));
        openFile->setText(QApplication::translate("MainWindow", "Open file", Q_NULLPTR));
        pushButton_prevStep->setText(QApplication::translate("MainWindow", "Prev", Q_NULLPTR));
        pushButton_Stop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButton_play->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        pushButton_nextStep->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        startViaRobotButton->setText(QApplication::translate("MainWindow", "Start via robot", Q_NULLPTR));
        loadTofileButton->setText(QApplication::translate("MainWindow", "Load to Robot", Q_NULLPTR));
        progressBar->setFormat(QApplication::translate("MainWindow", "%v/%m (%p%)", Q_NULLPTR));
        listCommand->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        terminal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        set_command->setText(QString());
        sendToTerminalButton->setText(QApplication::translate("MainWindow", "SEND", Q_NULLPTR));
        pushButton_XDown->setText(QApplication::translate("MainWindow", "X -", Q_NULLPTR));
        pushButton_YDown->setText(QApplication::translate("MainWindow", "Y -", Q_NULLPTR));
        pushButton_XUp->setText(QApplication::translate("MainWindow", "X +", Q_NULLPTR));
        setOrigin->setText(QApplication::translate("MainWindow", "set origin", Q_NULLPTR));
        reset->setText(QApplication::translate("MainWindow", "reset", Q_NULLPTR));
        resetError->setText(QApplication::translate("MainWindow", "error reset", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Speed:", Q_NULLPTR));
        scanCom->setText(QApplication::translate("MainWindow", "Scan", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        j5_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        j1_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j2_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j6_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        j3_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j5_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j6_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j4_down->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        j1_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        j2_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "J6", Q_NULLPTR));
        j3_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        j4_up->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "J1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "J3", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "J4", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "J5", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "J2", Q_NULLPTR));
        menuKAWA_GCODE->setTitle(QApplication::translate("MainWindow", "KAWA-GCODE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

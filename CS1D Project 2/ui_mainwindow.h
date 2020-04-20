/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *DisplayCampusInfo;
    QPushButton *DisplaySouvenirs;
    QPushButton *StartTour;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushBtn_2;
    QPushButton *clearPushBtn_2;
    QLabel *MainWindowLogo;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QWidget *PlanningMenu;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QTableView *DistancesTable;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QComboBox *StartingTeamComboBox;
    QPushButton *SelectStartingTeamButton;
    QCheckBox *AmericanLeagueCheckBox;
    QCheckBox *NationalLeagueCheckBox;
    QPushButton *ViewLeagueInfo;
    QLabel *label_6;
    QComboBox *SortingComboBox;
    QPushButton *PlanCustomTripButton;
    QPushButton *PrePlannedButton;
    QPushButton *backButton_1;
    QWidget *CustomTripMenu;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_12;
    QLabel *CurrentQueueLabel;
    QTableView *QueueTableView;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_11;
    QLabel *TourPlanningLabel;
    QPushButton *SelectStartingCollegeButton_3;
    QLabel *label_3;
    QPushButton *backButton_2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QComboBox *StartingPointBox;
    QPushButton *AddQueueButton;
    QPushButton *DeleteQueueButton;
    QLabel *CurrentLabel;
    QPushButton *SortQueue;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_28;
    QVBoxLayout *verticalLayout_7;
    QPushButton *DepartButton;
    QLabel *DistanceLabel;
    QLCDNumber *DistanceNumber;
    QWidget *PrePlannedMenu;
    QWidget *layoutWidget_23;
    QGridLayout *gridLayout_15;
    QComboBox *CollegeSelectBox;
    QLabel *CurrentLabel_20;
    QLabel *SelectCollegeCampusLabel;
    QComboBox *DesiredAmtBox;
    QPushButton *SortAmount;
    QPushButton *DeleteButton;
    QPushButton *backButton_6;
    QWidget *layoutWidget_22;
    QVBoxLayout *verticalLayout_44;
    QLabel *PrePlannedLabel;
    QPushButton *LoadData;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *layoutWidget_20;
    QVBoxLayout *verticalLayout_45;
    QLabel *CurrentQueueLabel_12;
    QTableView *PrePQueueTable;
    QWidget *layoutWidget_21;
    QVBoxLayout *verticalLayout_46;
    QPushButton *DepartButton_12;
    QLabel *DistanceLabel_12;
    QLCDNumber *DistanceLCDctr;
    QWidget *CampusPage;
    QTableView *souvenirTableView;
    QPushButton *backButton_7;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *loadSouvenirButton;
    QComboBox *souvenirComboBox;
    QPushButton *purchaseSouvenirsButton;
    QPushButton *deleteSouvenirsButton;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QLabel *collegeNameLabel;
    QLabel *collegePicturesLabel;
    QLabel *label_8;
    QPushButton *nextCollegeButton;
    QTextBrowser *collegeDescriptionTextBrowser;
    QLabel *label_7;
    QLCDNumber *priceLCDNumber;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1466, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1461, 601));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        layoutWidget = new QWidget(MainMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1170, 260, 212, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DisplayCampusInfo = new QPushButton(layoutWidget);
        DisplayCampusInfo->setObjectName(QString::fromUtf8("DisplayCampusInfo"));

        verticalLayout->addWidget(DisplayCampusInfo);

        DisplaySouvenirs = new QPushButton(layoutWidget);
        DisplaySouvenirs->setObjectName(QString::fromUtf8("DisplaySouvenirs"));

        verticalLayout->addWidget(DisplaySouvenirs);

        StartTour = new QPushButton(layoutWidget);
        StartTour->setObjectName(QString::fromUtf8("StartTour"));

        verticalLayout->addWidget(StartTour);

        layoutWidget_2 = new QWidget(MainMenu);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1170, 60, 251, 171));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        usernameLabel = new QLabel(layoutWidget_2);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        gridLayout->addWidget(usernameLabel, 1, 0, 1, 1);

        usernameLineEdit = new QLineEdit(layoutWidget_2);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(usernameLineEdit, 1, 1, 1, 2);

        passwordLabel = new QLabel(layoutWidget_2);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 1);

        passwordLineEdit = new QLineEdit(layoutWidget_2);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 2, 1, 1, 2);

        loginPushBtn_2 = new QPushButton(layoutWidget_2);
        loginPushBtn_2->setObjectName(QString::fromUtf8("loginPushBtn_2"));

        gridLayout->addWidget(loginPushBtn_2, 3, 0, 1, 2);

        clearPushBtn_2 = new QPushButton(layoutWidget_2);
        clearPushBtn_2->setObjectName(QString::fromUtf8("clearPushBtn_2"));

        gridLayout->addWidget(clearPushBtn_2, 3, 2, 1, 1);

        MainWindowLogo = new QLabel(layoutWidget_2);
        MainWindowLogo->setObjectName(QString::fromUtf8("MainWindowLogo"));
        MainWindowLogo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MainWindowLogo, 0, 0, 1, 1);

        layoutWidget_3 = new QWidget(MainMenu);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 60, 1121, 481));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(layoutWidget_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);

        stackedWidget->addWidget(MainMenu);
        PlanningMenu = new QWidget();
        PlanningMenu->setObjectName(QString::fromUtf8("PlanningMenu"));
        layoutWidget_7 = new QWidget(PlanningMenu);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(30, 60, 1201, 481));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        DistancesTable = new QTableView(layoutWidget_7);
        DistancesTable->setObjectName(QString::fromUtf8("DistancesTable"));

        verticalLayout_5->addWidget(DistancesTable);

        layoutWidget_8 = new QWidget(PlanningMenu);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(1240, 60, 212, 352));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        StartingTeamComboBox = new QComboBox(layoutWidget_8);
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->addItem(QString());
        StartingTeamComboBox->setObjectName(QString::fromUtf8("StartingTeamComboBox"));

        verticalLayout_6->addWidget(StartingTeamComboBox);

        SelectStartingTeamButton = new QPushButton(layoutWidget_8);
        SelectStartingTeamButton->setObjectName(QString::fromUtf8("SelectStartingTeamButton"));

        verticalLayout_6->addWidget(SelectStartingTeamButton);

        AmericanLeagueCheckBox = new QCheckBox(layoutWidget_8);
        AmericanLeagueCheckBox->setObjectName(QString::fromUtf8("AmericanLeagueCheckBox"));

        verticalLayout_6->addWidget(AmericanLeagueCheckBox);

        NationalLeagueCheckBox = new QCheckBox(layoutWidget_8);
        NationalLeagueCheckBox->setObjectName(QString::fromUtf8("NationalLeagueCheckBox"));

        verticalLayout_6->addWidget(NationalLeagueCheckBox);

        ViewLeagueInfo = new QPushButton(layoutWidget_8);
        ViewLeagueInfo->setObjectName(QString::fromUtf8("ViewLeagueInfo"));

        verticalLayout_6->addWidget(ViewLeagueInfo);

        label_6 = new QLabel(layoutWidget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setUnderline(true);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        SortingComboBox = new QComboBox(layoutWidget_8);
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->addItem(QString());
        SortingComboBox->setObjectName(QString::fromUtf8("SortingComboBox"));

        verticalLayout_6->addWidget(SortingComboBox);

        PlanCustomTripButton = new QPushButton(layoutWidget_8);
        PlanCustomTripButton->setObjectName(QString::fromUtf8("PlanCustomTripButton"));

        verticalLayout_6->addWidget(PlanCustomTripButton);

        PrePlannedButton = new QPushButton(layoutWidget_8);
        PrePlannedButton->setObjectName(QString::fromUtf8("PrePlannedButton"));

        verticalLayout_6->addWidget(PrePlannedButton);

        backButton_1 = new QPushButton(PlanningMenu);
        backButton_1->setObjectName(QString::fromUtf8("backButton_1"));
        backButton_1->setGeometry(QRect(10, 10, 71, 32));
        stackedWidget->addWidget(PlanningMenu);
        CustomTripMenu = new QWidget();
        CustomTripMenu->setObjectName(QString::fromUtf8("CustomTripMenu"));
        layoutWidget1 = new QWidget(CustomTripMenu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(390, 70, 531, 501));
        verticalLayout_12 = new QVBoxLayout(layoutWidget1);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        CurrentQueueLabel = new QLabel(layoutWidget1);
        CurrentQueueLabel->setObjectName(QString::fromUtf8("CurrentQueueLabel"));
        QFont font3;
        font3.setPointSize(18);
        CurrentQueueLabel->setFont(font3);
        CurrentQueueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(CurrentQueueLabel);

        QueueTableView = new QTableView(layoutWidget1);
        QueueTableView->setObjectName(QString::fromUtf8("QueueTableView"));

        verticalLayout_12->addWidget(QueueTableView);

        layoutWidget2 = new QWidget(CustomTripMenu);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 361, 121));
        verticalLayout_11 = new QVBoxLayout(layoutWidget2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        TourPlanningLabel = new QLabel(layoutWidget2);
        TourPlanningLabel->setObjectName(QString::fromUtf8("TourPlanningLabel"));
        TourPlanningLabel->setFont(font3);
        TourPlanningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(TourPlanningLabel);

        SelectStartingCollegeButton_3 = new QPushButton(layoutWidget2);
        SelectStartingCollegeButton_3->setObjectName(QString::fromUtf8("SelectStartingCollegeButton_3"));

        verticalLayout_11->addWidget(SelectStartingCollegeButton_3);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setPointSize(12);
        label_3->setFont(font4);
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_3);

        backButton_2 = new QPushButton(CustomTripMenu);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget3 = new QWidget(CustomTripMenu);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 210, 291, 213));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        StartingPointBox = new QComboBox(layoutWidget3);
        StartingPointBox->setObjectName(QString::fromUtf8("StartingPointBox"));

        gridLayout_4->addWidget(StartingPointBox, 1, 0, 1, 1);

        AddQueueButton = new QPushButton(layoutWidget3);
        AddQueueButton->setObjectName(QString::fromUtf8("AddQueueButton"));

        gridLayout_4->addWidget(AddQueueButton, 2, 0, 1, 1);

        DeleteQueueButton = new QPushButton(layoutWidget3);
        DeleteQueueButton->setObjectName(QString::fromUtf8("DeleteQueueButton"));

        gridLayout_4->addWidget(DeleteQueueButton, 3, 0, 1, 1);

        CurrentLabel = new QLabel(layoutWidget3);
        CurrentLabel->setObjectName(QString::fromUtf8("CurrentLabel"));
        CurrentLabel->setFont(font3);
        CurrentLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(CurrentLabel, 0, 0, 1, 1);

        SortQueue = new QPushButton(layoutWidget3);
        SortQueue->setObjectName(QString::fromUtf8("SortQueue"));

        gridLayout_4->addWidget(SortQueue, 4, 0, 1, 1);

        layoutWidget4 = new QWidget(CustomTripMenu);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(90, 460, 181, 111));
        verticalLayout_28 = new QVBoxLayout(layoutWidget4);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        DepartButton = new QPushButton(layoutWidget4);
        DepartButton->setObjectName(QString::fromUtf8("DepartButton"));

        verticalLayout_7->addWidget(DepartButton);

        DistanceLabel = new QLabel(layoutWidget4);
        DistanceLabel->setObjectName(QString::fromUtf8("DistanceLabel"));
        DistanceLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(DistanceLabel);


        verticalLayout_28->addLayout(verticalLayout_7);

        DistanceNumber = new QLCDNumber(layoutWidget4);
        DistanceNumber->setObjectName(QString::fromUtf8("DistanceNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DistanceNumber->sizePolicy().hasHeightForWidth());
        DistanceNumber->setSizePolicy(sizePolicy);
        DistanceNumber->setMaximumSize(QSize(169, 16777215));
        DistanceNumber->setSmallDecimalPoint(false);
        DistanceNumber->setDigitCount(7);

        verticalLayout_28->addWidget(DistanceNumber);

        stackedWidget->addWidget(CustomTripMenu);
        PrePlannedMenu = new QWidget();
        PrePlannedMenu->setObjectName(QString::fromUtf8("PrePlannedMenu"));
        layoutWidget_23 = new QWidget(PrePlannedMenu);
        layoutWidget_23->setObjectName(QString::fromUtf8("layoutWidget_23"));
        layoutWidget_23->setGeometry(QRect(40, 231, 296, 181));
        gridLayout_15 = new QGridLayout(layoutWidget_23);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        CollegeSelectBox = new QComboBox(layoutWidget_23);
        CollegeSelectBox->setObjectName(QString::fromUtf8("CollegeSelectBox"));

        gridLayout_15->addWidget(CollegeSelectBox, 1, 0, 1, 2);

        CurrentLabel_20 = new QLabel(layoutWidget_23);
        CurrentLabel_20->setObjectName(QString::fromUtf8("CurrentLabel_20"));
        CurrentLabel_20->setFont(font3);
        CurrentLabel_20->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(CurrentLabel_20, 2, 0, 1, 1);

        SelectCollegeCampusLabel = new QLabel(layoutWidget_23);
        SelectCollegeCampusLabel->setObjectName(QString::fromUtf8("SelectCollegeCampusLabel"));
        SelectCollegeCampusLabel->setFont(font3);
        SelectCollegeCampusLabel->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(SelectCollegeCampusLabel, 0, 0, 1, 2);

        DesiredAmtBox = new QComboBox(layoutWidget_23);
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->setObjectName(QString::fromUtf8("DesiredAmtBox"));

        gridLayout_15->addWidget(DesiredAmtBox, 2, 1, 1, 1);

        SortAmount = new QPushButton(layoutWidget_23);
        SortAmount->setObjectName(QString::fromUtf8("SortAmount"));

        gridLayout_15->addWidget(SortAmount, 5, 1, 1, 1);

        DeleteButton = new QPushButton(layoutWidget_23);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        gridLayout_15->addWidget(DeleteButton, 5, 0, 1, 1);

        backButton_6 = new QPushButton(PrePlannedMenu);
        backButton_6->setObjectName(QString::fromUtf8("backButton_6"));
        backButton_6->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget_22 = new QWidget(PrePlannedMenu);
        layoutWidget_22->setObjectName(QString::fromUtf8("layoutWidget_22"));
        layoutWidget_22->setGeometry(QRect(10, 70, 355, 121));
        verticalLayout_44 = new QVBoxLayout(layoutWidget_22);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        PrePlannedLabel = new QLabel(layoutWidget_22);
        PrePlannedLabel->setObjectName(QString::fromUtf8("PrePlannedLabel"));
        PrePlannedLabel->setFont(font3);
        PrePlannedLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(PrePlannedLabel);

        LoadData = new QPushButton(layoutWidget_22);
        LoadData->setObjectName(QString::fromUtf8("LoadData"));

        verticalLayout_44->addWidget(LoadData);

        label_20 = new QLabel(layoutWidget_22);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font4);
        label_20->setFrameShape(QFrame::Panel);
        label_20->setFrameShadow(QFrame::Plain);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(label_20);

        label_21 = new QLabel(layoutWidget_22);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font4);
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Plain);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(label_21);

        layoutWidget_20 = new QWidget(PrePlannedMenu);
        layoutWidget_20->setObjectName(QString::fromUtf8("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(390, 70, 431, 501));
        verticalLayout_45 = new QVBoxLayout(layoutWidget_20);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        CurrentQueueLabel_12 = new QLabel(layoutWidget_20);
        CurrentQueueLabel_12->setObjectName(QString::fromUtf8("CurrentQueueLabel_12"));
        CurrentQueueLabel_12->setFont(font3);
        CurrentQueueLabel_12->setAlignment(Qt::AlignCenter);

        verticalLayout_45->addWidget(CurrentQueueLabel_12);

        PrePQueueTable = new QTableView(layoutWidget_20);
        PrePQueueTable->setObjectName(QString::fromUtf8("PrePQueueTable"));

        verticalLayout_45->addWidget(PrePQueueTable);

        layoutWidget_21 = new QWidget(PrePlannedMenu);
        layoutWidget_21->setObjectName(QString::fromUtf8("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(90, 450, 181, 121));
        verticalLayout_46 = new QVBoxLayout(layoutWidget_21);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        DepartButton_12 = new QPushButton(layoutWidget_21);
        DepartButton_12->setObjectName(QString::fromUtf8("DepartButton_12"));

        verticalLayout_46->addWidget(DepartButton_12);

        DistanceLabel_12 = new QLabel(layoutWidget_21);
        DistanceLabel_12->setObjectName(QString::fromUtf8("DistanceLabel_12"));
        DistanceLabel_12->setAlignment(Qt::AlignCenter);

        verticalLayout_46->addWidget(DistanceLabel_12);

        DistanceLCDctr = new QLCDNumber(layoutWidget_21);
        DistanceLCDctr->setObjectName(QString::fromUtf8("DistanceLCDctr"));
        DistanceLCDctr->setDigitCount(7);

        verticalLayout_46->addWidget(DistanceLCDctr);

        stackedWidget->addWidget(PrePlannedMenu);
        CampusPage = new QWidget();
        CampusPage->setObjectName(QString::fromUtf8("CampusPage"));
        souvenirTableView = new QTableView(CampusPage);
        souvenirTableView->setObjectName(QString::fromUtf8("souvenirTableView"));
        souvenirTableView->setGeometry(QRect(10, 280, 321, 271));
        backButton_7 = new QPushButton(CampusPage);
        backButton_7->setObjectName(QString::fromUtf8("backButton_7"));
        backButton_7->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget5 = new QWidget(CampusPage);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(350, 310, 151, 174));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        loadSouvenirButton = new QPushButton(layoutWidget5);
        loadSouvenirButton->setObjectName(QString::fromUtf8("loadSouvenirButton"));

        verticalLayout_3->addWidget(loadSouvenirButton);

        souvenirComboBox = new QComboBox(layoutWidget5);
        souvenirComboBox->setObjectName(QString::fromUtf8("souvenirComboBox"));

        verticalLayout_3->addWidget(souvenirComboBox);

        purchaseSouvenirsButton = new QPushButton(layoutWidget5);
        purchaseSouvenirsButton->setObjectName(QString::fromUtf8("purchaseSouvenirsButton"));

        verticalLayout_3->addWidget(purchaseSouvenirsButton);

        deleteSouvenirsButton = new QPushButton(layoutWidget5);
        deleteSouvenirsButton->setObjectName(QString::fromUtf8("deleteSouvenirsButton"));

        verticalLayout_3->addWidget(deleteSouvenirsButton);

        layoutWidget6 = new QWidget(CampusPage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(570, 430, 265, 59));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        collegeNameLabel = new QLabel(CampusPage);
        collegeNameLabel->setObjectName(QString::fromUtf8("collegeNameLabel"));
        collegeNameLabel->setGeometry(QRect(91, 21, 371, 19));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        collegeNameLabel->setFont(font5);
        collegePicturesLabel = new QLabel(CampusPage);
        collegePicturesLabel->setObjectName(QString::fromUtf8("collegePicturesLabel"));
        collegePicturesLabel->setGeometry(QRect(91, 49, 391, 201));
        label_8 = new QLabel(CampusPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 430, 263, 28));
        nextCollegeButton = new QPushButton(CampusPage);
        nextCollegeButton->setObjectName(QString::fromUtf8("nextCollegeButton"));
        nextCollegeButton->setGeometry(QRect(570, 464, 263, 23));
        collegeDescriptionTextBrowser = new QTextBrowser(CampusPage);
        collegeDescriptionTextBrowser->setObjectName(QString::fromUtf8("collegeDescriptionTextBrowser"));
        collegeDescriptionTextBrowser->setGeometry(QRect(530, 60, 321, 341));
        QFont font6;
        font6.setPointSize(11);
        collegeDescriptionTextBrowser->setFont(font6);
        label_7 = new QLabel(CampusPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 550, 51, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        priceLCDNumber = new QLCDNumber(CampusPage);
        priceLCDNumber->setObjectName(QString::fromUtf8("priceLCDNumber"));
        priceLCDNumber->setGeometry(QRect(429, 531, 151, 49));
        priceLCDNumber->setDigitCount(7);
        stackedWidget->addWidget(CampusPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        DisplayCampusInfo->setText(QCoreApplication::translate("MainWindow", "Stadium Information", nullptr));
        DisplaySouvenirs->setText(QCoreApplication::translate("MainWindow", "Souvenirs", nullptr));
        StartTour->setText(QCoreApplication::translate("MainWindow", "START TRIP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ADMIN ONLY", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        loginPushBtn_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        clearPushBtn_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        MainWindowLogo->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Take me out to the Ball Game !", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "STADIUM INFORMATION", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Select Team to View</span></p><p><br/></p></body></html>", nullptr));
        StartingTeamComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Arizona Diamondbacks", nullptr));
        StartingTeamComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Atlanta Braves", nullptr));
        StartingTeamComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Baltimore Orioles", nullptr));
        StartingTeamComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Boston Red Sox ", nullptr));
        StartingTeamComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Chicago Cubs", nullptr));
        StartingTeamComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Chicago White Sox", nullptr));
        StartingTeamComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Cincinnati Reds", nullptr));
        StartingTeamComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Cleveland Indians", nullptr));
        StartingTeamComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Colorado Rockies", nullptr));
        StartingTeamComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Detroit Tigers", nullptr));
        StartingTeamComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "Houston Astros", nullptr));
        StartingTeamComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "Kansas City Royals", nullptr));
        StartingTeamComboBox->setItemText(12, QCoreApplication::translate("MainWindow", "Los Angeles Angels", nullptr));
        StartingTeamComboBox->setItemText(13, QCoreApplication::translate("MainWindow", "Los Angeles Dodgers ", nullptr));
        StartingTeamComboBox->setItemText(14, QCoreApplication::translate("MainWindow", "Miami Marlins", nullptr));
        StartingTeamComboBox->setItemText(15, QCoreApplication::translate("MainWindow", "Milwaukee Brewers", nullptr));
        StartingTeamComboBox->setItemText(16, QCoreApplication::translate("MainWindow", "Minnesota Twins", nullptr));
        StartingTeamComboBox->setItemText(17, QCoreApplication::translate("MainWindow", "New York Mets", nullptr));
        StartingTeamComboBox->setItemText(18, QCoreApplication::translate("MainWindow", "New York Yankees", nullptr));
        StartingTeamComboBox->setItemText(19, QCoreApplication::translate("MainWindow", "Oakland Athletics", nullptr));
        StartingTeamComboBox->setItemText(20, QCoreApplication::translate("MainWindow", "Philadelphia Phillies", nullptr));
        StartingTeamComboBox->setItemText(21, QCoreApplication::translate("MainWindow", "Pittsburgh Pirates", nullptr));
        StartingTeamComboBox->setItemText(22, QCoreApplication::translate("MainWindow", "San Diego Padres", nullptr));
        StartingTeamComboBox->setItemText(23, QCoreApplication::translate("MainWindow", "San Francisco Giants", nullptr));
        StartingTeamComboBox->setItemText(24, QCoreApplication::translate("MainWindow", "Seattle Mariners", nullptr));
        StartingTeamComboBox->setItemText(25, QCoreApplication::translate("MainWindow", "St. Louis Cardinals", nullptr));
        StartingTeamComboBox->setItemText(26, QCoreApplication::translate("MainWindow", "Tampa Bay Rays", nullptr));
        StartingTeamComboBox->setItemText(27, QCoreApplication::translate("MainWindow", "Texas Rangers", nullptr));
        StartingTeamComboBox->setItemText(28, QCoreApplication::translate("MainWindow", "Toronto Blue Jays", nullptr));
        StartingTeamComboBox->setItemText(29, QCoreApplication::translate("MainWindow", "Washington Nationals", nullptr));

        SelectStartingTeamButton->setText(QCoreApplication::translate("MainWindow", "View Team", nullptr));
        AmericanLeagueCheckBox->setText(QCoreApplication::translate("MainWindow", "American League", nullptr));
        NationalLeagueCheckBox->setText(QCoreApplication::translate("MainWindow", "National League ", nullptr));
        ViewLeagueInfo->setText(QCoreApplication::translate("MainWindow", "View League Info", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Sort By", nullptr));
        SortingComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Team Name", nullptr));
        SortingComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Stadium Name", nullptr));
        SortingComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Park Typology", nullptr));
        SortingComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Open Roof", nullptr));
        SortingComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Date Opened", nullptr));
        SortingComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Total Capacity", nullptr));
        SortingComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Center Field Distance (Greatest)", nullptr));
        SortingComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Center Field Distance (Smallest)", nullptr));

        PlanCustomTripButton->setText(QCoreApplication::translate("MainWindow", "Custom Trip", nullptr));
        PrePlannedButton->setText(QCoreApplication::translate("MainWindow", "Pre-Planned Trip", nullptr));
        backButton_1->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        CurrentQueueLabel->setText(QCoreApplication::translate("MainWindow", "Current Queue", nullptr));
        TourPlanningLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Custom Trip</span></p><p><br/></p></body></html>", nullptr));
        SelectStartingCollegeButton_3->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">&quot;Plan your custom trip from point A to point B all in one!&quot;</span></p></body></html>", nullptr));
        backButton_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        AddQueueButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        DeleteQueueButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        CurrentLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">SELECT STADIUM</span></p><p><br/></p></body></html>", nullptr));
        SortQueue->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        DepartButton->setText(QCoreApplication::translate("MainWindow", "Depart", nullptr));
        DistanceLabel->setText(QCoreApplication::translate("MainWindow", "Distance (miles)", nullptr));
        CurrentLabel_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Desired Amount: </span></p></body></html>", nullptr));
        SelectCollegeCampusLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Select Stadium</span></p></body></html>", nullptr));
        DesiredAmtBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        DesiredAmtBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        DesiredAmtBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        DesiredAmtBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        DesiredAmtBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        DesiredAmtBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        DesiredAmtBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        DesiredAmtBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        DesiredAmtBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        DesiredAmtBox->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        DesiredAmtBox->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        DesiredAmtBox->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));
        DesiredAmtBox->setItemText(12, QCoreApplication::translate("MainWindow", "13", nullptr));

        SortAmount->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        backButton_6->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        PrePlannedLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Pre-Planned Trip</span></p></body></html>", nullptr));
        LoadData->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">&quot;Choose a pre-planned trip of your desire !&quot;</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">&quot;The </span><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">shortest </span><span style=\" font-style:italic;\">route is automatically calculated!&quot;</span></p></body></html>", nullptr));
        CurrentQueueLabel_12->setText(QCoreApplication::translate("MainWindow", "Current Queue", nullptr));
        DepartButton_12->setText(QCoreApplication::translate("MainWindow", "Depart", nullptr));
        DistanceLabel_12->setText(QCoreApplication::translate("MainWindow", "Distance (miles)", nullptr));
        backButton_7->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        loadSouvenirButton->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        purchaseSouvenirsButton->setText(QCoreApplication::translate("MainWindow", "Purchase", nullptr));
        deleteSouvenirsButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        collegeNameLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        collegePicturesLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Move on to next Stadium", nullptr));
        nextCollegeButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Total: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

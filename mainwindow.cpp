/*-----------------------------------------------------------------
 * This file is the Definition of each class and function.
 * The include files establish the types, provide definitions,
 *      and are used functionally as well.
 *----------------------------------------------------------------*/

// Default
#include "mainwindow.h"

// Add any needed Qt libraries here.
#include <QAudioOutput>
#include <QStackedLayout>
#include <QMouseEvent>
#include <QFile>
#include <QList>

// Add any needed C++ files here.
#include "switch.h"
#include "execute.cpp"

// Add any needed forms here.
#include "ui_MessageBoxx.h"
#include "ui_finalwindow.h"
#include "ui_mainwindow.h"

// Testing purposes only.
#include <QDebug>


/* --------------------------------------------
 * Global Variables, AKA stuff to use anywhere
----------------------------------------------*/

QKeyEvent *kp = new QKeyEvent(QKeyEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier);


/*-------------------------------------------
 * Functions, AKA non-method custom actions
 *------------------------------------------*/

// Read Style Sheets
QString readTextFile2(QString path)
{
    QFile file(path);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        return in.readAll();
    }

    return "";
}

// Control TextBox Input (shortens the code for the slots)
void checkInput(QLineEdit *sender, QString arg1)
{
    int b = arg1.toInt();
    switch (b)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        {
            sender->setText(arg1);
            break;
        }
        default:
        {
            sender->setText("");
            break;
        }
    }
}


/*--------------------------------------
 * Constructor, AKA behavior on start
 *-------------------------------------*/

// Main Window
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    // Create the ui.
    ui->setupUi(this);

    // Set preferred ui size
    this->setMinimumSize(650, 845);
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    // Set up AutoTab
    Switch * switch1 = new Switch("AutoTab ");
    ui->horizontalLayout_3->replaceWidget(ui->TabButton, switch1);
    switch1->setLayoutDirection(Qt::RightToLeft);
    ui->TabButton->deleteLater();
    switch1->setChecked(true);

    // Set up audio player
    this->p = new QMediaPlayer;
    this->d = new QAudioOutput;
    p->setAudioOutput(d);
    p->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
    d->setVolume(0.1);
    this->clip = true;

    // Show both the Sudoku image (page 2) and the textboxes (page 1)
    ((QStackedLayout *)ui->stackedWidget->layout())->setStackingMode(QStackedLayout::StackAll);
    ui->stackedWidget->setCurrentIndex(0);

    // Format the textboxes such that they align with the grid, though this acts in tandum with ui settings
    int s = 50;
    QList<QLineEdit *> LEs = this->findChildren<QLineEdit *>();
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLineEdit *n) {n->setMinimumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLineEdit *n) {n->setMaximumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [](QLineEdit *n) {n->setAlignment(Qt::AlignHCenter); });

    QFont font = ui->lineEdit11->font();
    font.setPointSize(24);
    std::for_each(LEs.cbegin(), LEs.cend(), [font](QLineEdit *n) {n->setFont(font); });

    // Connect signals and slots here.
    QObject::connect(ui->HelpButton, &QPushButton::clicked, this, &MainWindow::HelpButton_clicked);             // method slot from button signal A to ui slot B
    QObject::connect(ui->GilButton, &QPushButton::toggled, this, &MainWindow::GilButton_toggled);
    QObject::connect(this, &MainWindow::clicky, &MainWindow::clicked);                                          // method slot from ui inherited signal A to ui slot B
    QObject::connect(ui->SolveButton, &QPushButton::clicked, this, &MainWindow::SolveButton_clicked);

        // Textbox input gatekeeping.
    QObject::connect(ui->lineEdit11, &QLineEdit::textEdited, this, &MainWindow::lineEdit11_textEdited);
    QObject::connect(ui->lineEdit12, &QLineEdit::textEdited, this, &MainWindow::lineEdit12_textEdited);
    QObject::connect(ui->lineEdit13, &QLineEdit::textEdited, this, &MainWindow::lineEdit13_textEdited);
    QObject::connect(ui->lineEdit14, &QLineEdit::textEdited, this, &MainWindow::lineEdit14_textEdited);
    QObject::connect(ui->lineEdit15, &QLineEdit::textEdited, this, &MainWindow::lineEdit15_textEdited);
    QObject::connect(ui->lineEdit16, &QLineEdit::textEdited, this, &MainWindow::lineEdit16_textEdited);
    QObject::connect(ui->lineEdit17, &QLineEdit::textEdited, this, &MainWindow::lineEdit17_textEdited);
    QObject::connect(ui->lineEdit18, &QLineEdit::textEdited, this, &MainWindow::lineEdit18_textEdited);
    QObject::connect(ui->lineEdit19, &QLineEdit::textEdited, this, &MainWindow::lineEdit19_textEdited);

    QObject::connect(ui->lineEdit21, &QLineEdit::textEdited, this, &MainWindow::lineEdit21_textEdited);
    QObject::connect(ui->lineEdit22, &QLineEdit::textEdited, this, &MainWindow::lineEdit22_textEdited);
    QObject::connect(ui->lineEdit23, &QLineEdit::textEdited, this, &MainWindow::lineEdit23_textEdited);
    QObject::connect(ui->lineEdit24, &QLineEdit::textEdited, this, &MainWindow::lineEdit24_textEdited);
    QObject::connect(ui->lineEdit25, &QLineEdit::textEdited, this, &MainWindow::lineEdit25_textEdited);
    QObject::connect(ui->lineEdit26, &QLineEdit::textEdited, this, &MainWindow::lineEdit26_textEdited);
    QObject::connect(ui->lineEdit27, &QLineEdit::textEdited, this, &MainWindow::lineEdit27_textEdited);
    QObject::connect(ui->lineEdit28, &QLineEdit::textEdited, this, &MainWindow::lineEdit28_textEdited);
    QObject::connect(ui->lineEdit29, &QLineEdit::textEdited, this, &MainWindow::lineEdit29_textEdited);

    QObject::connect(ui->lineEdit31, &QLineEdit::textEdited, this, &MainWindow::lineEdit31_textEdited);
    QObject::connect(ui->lineEdit32, &QLineEdit::textEdited, this, &MainWindow::lineEdit32_textEdited);
    QObject::connect(ui->lineEdit33, &QLineEdit::textEdited, this, &MainWindow::lineEdit33_textEdited);
    QObject::connect(ui->lineEdit34, &QLineEdit::textEdited, this, &MainWindow::lineEdit34_textEdited);
    QObject::connect(ui->lineEdit35, &QLineEdit::textEdited, this, &MainWindow::lineEdit35_textEdited);
    QObject::connect(ui->lineEdit36, &QLineEdit::textEdited, this, &MainWindow::lineEdit36_textEdited);
    QObject::connect(ui->lineEdit37, &QLineEdit::textEdited, this, &MainWindow::lineEdit37_textEdited);
    QObject::connect(ui->lineEdit38, &QLineEdit::textEdited, this, &MainWindow::lineEdit38_textEdited);
    QObject::connect(ui->lineEdit39, &QLineEdit::textEdited, this, &MainWindow::lineEdit39_textEdited);

    QObject::connect(ui->lineEdit41, &QLineEdit::textEdited, this, &MainWindow::lineEdit41_textEdited);
    QObject::connect(ui->lineEdit42, &QLineEdit::textEdited, this, &MainWindow::lineEdit42_textEdited);
    QObject::connect(ui->lineEdit43, &QLineEdit::textEdited, this, &MainWindow::lineEdit43_textEdited);
    QObject::connect(ui->lineEdit44, &QLineEdit::textEdited, this, &MainWindow::lineEdit44_textEdited);
    QObject::connect(ui->lineEdit45, &QLineEdit::textEdited, this, &MainWindow::lineEdit45_textEdited);
    QObject::connect(ui->lineEdit46, &QLineEdit::textEdited, this, &MainWindow::lineEdit46_textEdited);
    QObject::connect(ui->lineEdit47, &QLineEdit::textEdited, this, &MainWindow::lineEdit47_textEdited);
    QObject::connect(ui->lineEdit48, &QLineEdit::textEdited, this, &MainWindow::lineEdit48_textEdited);
    QObject::connect(ui->lineEdit49, &QLineEdit::textEdited, this, &MainWindow::lineEdit49_textEdited);

    QObject::connect(ui->lineEdit51, &QLineEdit::textEdited, this, &MainWindow::lineEdit51_textEdited);
    QObject::connect(ui->lineEdit52, &QLineEdit::textEdited, this, &MainWindow::lineEdit52_textEdited);
    QObject::connect(ui->lineEdit53, &QLineEdit::textEdited, this, &MainWindow::lineEdit53_textEdited);
    QObject::connect(ui->lineEdit54, &QLineEdit::textEdited, this, &MainWindow::lineEdit54_textEdited);
    QObject::connect(ui->lineEdit55, &QLineEdit::textEdited, this, &MainWindow::lineEdit55_textEdited);
    QObject::connect(ui->lineEdit56, &QLineEdit::textEdited, this, &MainWindow::lineEdit56_textEdited);
    QObject::connect(ui->lineEdit57, &QLineEdit::textEdited, this, &MainWindow::lineEdit57_textEdited);
    QObject::connect(ui->lineEdit58, &QLineEdit::textEdited, this, &MainWindow::lineEdit58_textEdited);
    QObject::connect(ui->lineEdit59, &QLineEdit::textEdited, this, &MainWindow::lineEdit59_textEdited);

    QObject::connect(ui->lineEdit61, &QLineEdit::textEdited, this, &MainWindow::lineEdit61_textEdited);
    QObject::connect(ui->lineEdit62, &QLineEdit::textEdited, this, &MainWindow::lineEdit62_textEdited);
    QObject::connect(ui->lineEdit63, &QLineEdit::textEdited, this, &MainWindow::lineEdit63_textEdited);
    QObject::connect(ui->lineEdit64, &QLineEdit::textEdited, this, &MainWindow::lineEdit64_textEdited);
    QObject::connect(ui->lineEdit65, &QLineEdit::textEdited, this, &MainWindow::lineEdit65_textEdited);
    QObject::connect(ui->lineEdit66, &QLineEdit::textEdited, this, &MainWindow::lineEdit66_textEdited);
    QObject::connect(ui->lineEdit67, &QLineEdit::textEdited, this, &MainWindow::lineEdit67_textEdited);
    QObject::connect(ui->lineEdit68, &QLineEdit::textEdited, this, &MainWindow::lineEdit68_textEdited);
    QObject::connect(ui->lineEdit69, &QLineEdit::textEdited, this, &MainWindow::lineEdit69_textEdited);

    QObject::connect(ui->lineEdit71, &QLineEdit::textEdited, this, &MainWindow::lineEdit71_textEdited);
    QObject::connect(ui->lineEdit72, &QLineEdit::textEdited, this, &MainWindow::lineEdit72_textEdited);
    QObject::connect(ui->lineEdit73, &QLineEdit::textEdited, this, &MainWindow::lineEdit73_textEdited);
    QObject::connect(ui->lineEdit74, &QLineEdit::textEdited, this, &MainWindow::lineEdit74_textEdited);
    QObject::connect(ui->lineEdit75, &QLineEdit::textEdited, this, &MainWindow::lineEdit75_textEdited);
    QObject::connect(ui->lineEdit76, &QLineEdit::textEdited, this, &MainWindow::lineEdit76_textEdited);
    QObject::connect(ui->lineEdit77, &QLineEdit::textEdited, this, &MainWindow::lineEdit77_textEdited);
    QObject::connect(ui->lineEdit78, &QLineEdit::textEdited, this, &MainWindow::lineEdit78_textEdited);
    QObject::connect(ui->lineEdit79, &QLineEdit::textEdited, this, &MainWindow::lineEdit79_textEdited);

    QObject::connect(ui->lineEdit81, &QLineEdit::textEdited, this, &MainWindow::lineEdit81_textEdited);
    QObject::connect(ui->lineEdit82, &QLineEdit::textEdited, this, &MainWindow::lineEdit82_textEdited);
    QObject::connect(ui->lineEdit83, &QLineEdit::textEdited, this, &MainWindow::lineEdit83_textEdited);
    QObject::connect(ui->lineEdit84, &QLineEdit::textEdited, this, &MainWindow::lineEdit84_textEdited);
    QObject::connect(ui->lineEdit85, &QLineEdit::textEdited, this, &MainWindow::lineEdit85_textEdited);
    QObject::connect(ui->lineEdit86, &QLineEdit::textEdited, this, &MainWindow::lineEdit86_textEdited);
    QObject::connect(ui->lineEdit87, &QLineEdit::textEdited, this, &MainWindow::lineEdit87_textEdited);
    QObject::connect(ui->lineEdit88, &QLineEdit::textEdited, this, &MainWindow::lineEdit88_textEdited);
    QObject::connect(ui->lineEdit89, &QLineEdit::textEdited, this, &MainWindow::lineEdit89_textEdited);

    QObject::connect(ui->lineEdit91, &QLineEdit::textEdited, this, &MainWindow::lineEdit91_textEdited);
    QObject::connect(ui->lineEdit92, &QLineEdit::textEdited, this, &MainWindow::lineEdit92_textEdited);
    QObject::connect(ui->lineEdit93, &QLineEdit::textEdited, this, &MainWindow::lineEdit93_textEdited);
    QObject::connect(ui->lineEdit94, &QLineEdit::textEdited, this, &MainWindow::lineEdit94_textEdited);
    QObject::connect(ui->lineEdit95, &QLineEdit::textEdited, this, &MainWindow::lineEdit95_textEdited);
    QObject::connect(ui->lineEdit96, &QLineEdit::textEdited, this, &MainWindow::lineEdit96_textEdited);
    QObject::connect(ui->lineEdit97, &QLineEdit::textEdited, this, &MainWindow::lineEdit97_textEdited);
    QObject::connect(ui->lineEdit98, &QLineEdit::textEdited, this, &MainWindow::lineEdit98_textEdited);
    QObject::connect(ui->lineEdit99, &QLineEdit::textEdited, this, &MainWindow::lineEdit99_textEdited);
}

// Final Window
FinalWindow::FinalWindow(QWidget *parent): QMainWindow(parent), ui2(new Ui::FinalWindow)
{
    // Create the ui.
    ui2->setupUi(this);

    // Basic setup
    this->setWindowTitle("Sudoku Solver");
    this->setWindowIcon(QIcon(":/Resources/Cuneiform_sumer_dingir.svg.png"));
    this->setMinimumSize(1300, 845);
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    // Show both the Sudoku image (page 2) and the textboxes (page 1)
    ((QStackedLayout *)ui2->stackedWidget->layout())->setStackingMode(QStackedLayout::StackAll);
    ui2->stackedWidget->setCurrentIndex(0);

    ((QStackedLayout *)ui2->stackedWidget_2->layout())->setStackingMode(QStackedLayout::StackAll);
    ui2->stackedWidget_2->setCurrentIndex(0);

    // Replace left lineEdits with Lables
        // Create labels
    QWidget * Label11 = new QLabel("");
    QWidget * Label12 = new QLabel("");
    QWidget * Label13 = new QLabel("");
    QWidget * Label14 = new QLabel("");
    QWidget * Label15 = new QLabel("");
    QWidget * Label16 = new QLabel("");
    QWidget * Label17 = new QLabel("");
    QWidget * Label18 = new QLabel("");
    QWidget * Label19 = new QLabel("");

    QWidget * Label21 = new QLabel("");
    QWidget * Label22 = new QLabel("");
    QWidget * Label23 = new QLabel("");
    QWidget * Label24 = new QLabel("");
    QWidget * Label25 = new QLabel("");
    QWidget * Label26 = new QLabel("");
    QWidget * Label27 = new QLabel("");
    QWidget * Label28 = new QLabel("");
    QWidget * Label29 = new QLabel("");

    QWidget * Label31 = new QLabel("");
    QWidget * Label32 = new QLabel("");
    QWidget * Label33 = new QLabel("");
    QWidget * Label34 = new QLabel("");
    QWidget * Label35 = new QLabel("");
    QWidget * Label36 = new QLabel("");
    QWidget * Label37 = new QLabel("");
    QWidget * Label38 = new QLabel("");
    QWidget * Label39 = new QLabel("");

    QWidget * Label41 = new QLabel("");
    QWidget * Label42 = new QLabel("");
    QWidget * Label43 = new QLabel("");
    QWidget * Label44 = new QLabel("");
    QWidget * Label45 = new QLabel("");
    QWidget * Label46 = new QLabel("");
    QWidget * Label47 = new QLabel("");
    QWidget * Label48 = new QLabel("");
    QWidget * Label49 = new QLabel("");

    QWidget * Label51 = new QLabel("");
    QWidget * Label52 = new QLabel("");
    QWidget * Label53 = new QLabel("");
    QWidget * Label54 = new QLabel("");
    QWidget * Label55 = new QLabel("");
    QWidget * Label56 = new QLabel("");
    QWidget * Label57 = new QLabel("");
    QWidget * Label58 = new QLabel("");
    QWidget * Label59 = new QLabel("");

    QWidget * Label61 = new QLabel("");
    QWidget * Label62 = new QLabel("");
    QWidget * Label63 = new QLabel("");
    QWidget * Label64 = new QLabel("");
    QWidget * Label65 = new QLabel("");
    QWidget * Label66 = new QLabel("");
    QWidget * Label67 = new QLabel("");
    QWidget * Label68 = new QLabel("");
    QWidget * Label69 = new QLabel("");

    QWidget * Label71 = new QLabel("");
    QWidget * Label72 = new QLabel("");
    QWidget * Label73 = new QLabel("");
    QWidget * Label74 = new QLabel("");
    QWidget * Label75 = new QLabel("");
    QWidget * Label76 = new QLabel("");
    QWidget * Label77 = new QLabel("");
    QWidget * Label78 = new QLabel("");
    QWidget * Label79 = new QLabel("");

    QWidget * Label81 = new QLabel("");
    QWidget * Label82 = new QLabel("");
    QWidget * Label83 = new QLabel("");
    QWidget * Label84 = new QLabel("");
    QWidget * Label85 = new QLabel("");
    QWidget * Label86 = new QLabel("");
    QWidget * Label87 = new QLabel("");
    QWidget * Label88 = new QLabel("");
    QWidget * Label89 = new QLabel("");

    QWidget * Label91 = new QLabel("");
    QWidget * Label92 = new QLabel("");
    QWidget * Label93 = new QLabel("");
    QWidget * Label94 = new QLabel("");
    QWidget * Label95 = new QLabel("");
    QWidget * Label96 = new QLabel("");
    QWidget * Label97 = new QLabel("");
    QWidget * Label98 = new QLabel("");
    QWidget * Label99 = new QLabel("");

    QList<QWidget *> L1 = {Label11, Label12, Label13, Label14, Label15, Label16, Label17, Label18, Label19};
    QList<QWidget *> L2 = {Label21, Label22, Label23, Label24, Label25, Label26, Label27, Label28, Label29};
    QList<QWidget *> L3 = {Label31, Label32, Label33, Label34, Label35, Label36, Label37, Label38, Label39};
    QList<QWidget *> L4 = {Label41, Label42, Label43, Label44, Label45, Label46, Label47, Label48, Label49};
    QList<QWidget *> L5 = {Label51, Label52, Label53, Label54, Label55, Label56, Label57, Label58, Label59};
    QList<QWidget *> L6 = {Label61, Label62, Label63, Label64, Label65, Label66, Label67, Label68, Label69};
    QList<QWidget *> L7 = {Label71, Label72, Label73, Label74, Label75, Label76, Label77, Label78, Label79};
    QList<QWidget *> L8 = {Label81, Label82, Label83, Label84, Label85, Label86, Label87, Label88, Label89};
    QList<QWidget *> L9 = {Label91, Label92, Label93, Label94, Label95, Label96, Label97, Label98, Label99};

        // Replace lineEdits with Labels
    QList<QLineEdit *> LE1s = ui2->horizontalLayout_6->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_6->replaceWidget(LE1s[i], L1[i]);
        LE1s[i]->deleteLater();
    }

    QList<QLineEdit *> LE2s = ui2->horizontalLayout_7->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_7->replaceWidget(LE2s[i], L2[i]);
        LE2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE3s = ui2->horizontalLayout_8->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_8->replaceWidget(LE3s[i], L3[i]);
        LE3s[i]->deleteLater();
    }

    QList<QLineEdit *> LE4s = ui2->horizontalLayout_9->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_9->replaceWidget(LE4s[i], L4[i]);
        LE4s[i]->deleteLater();
    }

    QList<QLineEdit *> LE5s = ui2->horizontalLayout_10->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_10->replaceWidget(LE5s[i], L5[i]);
        LE5s[i]->deleteLater();
    }

    QList<QLineEdit *> LE6s = ui2->horizontalLayout_11->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_11->replaceWidget(LE6s[i], L6[i]);
        LE6s[i]->deleteLater();
    }

    QList<QLineEdit *> LE7s = ui2->horizontalLayout_12->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_12->replaceWidget(LE7s[i], L7[i]);
        LE7s[i]->deleteLater();
    }

    QList<QLineEdit *> LE8s = ui2->horizontalLayout_13->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_13->replaceWidget(LE8s[i], L8[i]);
        LE8s[i]->deleteLater();
    }

    QList<QLineEdit *> LE9s = ui2->horizontalLayout_14->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_14->replaceWidget(LE9s[i], L9[i]);
        LE9s[i]->deleteLater();
    }

    // Replace right lineEdits with Lables
        // Create labels
    QWidget * Label11_2 = new QLabel("");
    QWidget * Label12_2 = new QLabel("");
    QWidget * Label13_2 = new QLabel("");
    QWidget * Label14_2 = new QLabel("");
    QWidget * Label15_2 = new QLabel("");
    QWidget * Label16_2 = new QLabel("");
    QWidget * Label17_2 = new QLabel("");
    QWidget * Label18_2 = new QLabel("");
    QWidget * Label19_2 = new QLabel("");

    QWidget * Label21_2 = new QLabel("");
    QWidget * Label22_2 = new QLabel("");
    QWidget * Label23_2 = new QLabel("");
    QWidget * Label24_2 = new QLabel("");
    QWidget * Label25_2 = new QLabel("");
    QWidget * Label26_2 = new QLabel("");
    QWidget * Label27_2 = new QLabel("");
    QWidget * Label28_2 = new QLabel("");
    QWidget * Label29_2 = new QLabel("");

    QWidget * Label31_2 = new QLabel("");
    QWidget * Label32_2 = new QLabel("");
    QWidget * Label33_2 = new QLabel("");
    QWidget * Label34_2 = new QLabel("");
    QWidget * Label35_2 = new QLabel("");
    QWidget * Label36_2 = new QLabel("");
    QWidget * Label37_2 = new QLabel("");
    QWidget * Label38_2 = new QLabel("");
    QWidget * Label39_2 = new QLabel("");

    QWidget * Label41_2 = new QLabel("");
    QWidget * Label42_2 = new QLabel("");
    QWidget * Label43_2 = new QLabel("");
    QWidget * Label44_2 = new QLabel("");
    QWidget * Label45_2 = new QLabel("");
    QWidget * Label46_2 = new QLabel("");
    QWidget * Label47_2 = new QLabel("");
    QWidget * Label48_2 = new QLabel("");
    QWidget * Label49_2 = new QLabel("");

    QWidget * Label51_2 = new QLabel("");
    QWidget * Label52_2 = new QLabel("");
    QWidget * Label53_2 = new QLabel("");
    QWidget * Label54_2 = new QLabel("");
    QWidget * Label55_2 = new QLabel("");
    QWidget * Label56_2 = new QLabel("");
    QWidget * Label57_2 = new QLabel("");
    QWidget * Label58_2 = new QLabel("");
    QWidget * Label59_2 = new QLabel("");

    QWidget * Label61_2 = new QLabel("");
    QWidget * Label62_2 = new QLabel("");
    QWidget * Label63_2 = new QLabel("");
    QWidget * Label64_2 = new QLabel("");
    QWidget * Label65_2 = new QLabel("");
    QWidget * Label66_2 = new QLabel("");
    QWidget * Label67_2 = new QLabel("");
    QWidget * Label68_2 = new QLabel("");
    QWidget * Label69_2 = new QLabel("");

    QWidget * Label71_2 = new QLabel("");
    QWidget * Label72_2 = new QLabel("");
    QWidget * Label73_2 = new QLabel("");
    QWidget * Label74_2 = new QLabel("");
    QWidget * Label75_2 = new QLabel("");
    QWidget * Label76_2 = new QLabel("");
    QWidget * Label77_2 = new QLabel("");
    QWidget * Label78_2 = new QLabel("");
    QWidget * Label79_2 = new QLabel("");

    QWidget * Label81_2 = new QLabel("");
    QWidget * Label82_2 = new QLabel("");
    QWidget * Label83_2 = new QLabel("");
    QWidget * Label84_2 = new QLabel("");
    QWidget * Label85_2 = new QLabel("");
    QWidget * Label86_2 = new QLabel("");
    QWidget * Label87_2 = new QLabel("");
    QWidget * Label88_2 = new QLabel("");
    QWidget * Label89_2 = new QLabel("");

    QWidget * Label91_2 = new QLabel("");
    QWidget * Label92_2 = new QLabel("");
    QWidget * Label93_2 = new QLabel("");
    QWidget * Label94_2 = new QLabel("");
    QWidget * Label95_2 = new QLabel("");
    QWidget * Label96_2 = new QLabel("");
    QWidget * Label97_2 = new QLabel("");
    QWidget * Label98_2 = new QLabel("");
    QWidget * Label99_2 = new QLabel("");

    QList<QWidget *> L1_2 = {Label11_2, Label12_2, Label13_2, Label14_2, Label15_2, Label16_2, Label17_2, Label18_2, Label19_2};
    QList<QWidget *> L2_2 = {Label21_2, Label22_2, Label23_2, Label24_2, Label25_2, Label26_2, Label27_2, Label28_2, Label29_2};
    QList<QWidget *> L3_2 = {Label31_2, Label32_2, Label33_2, Label34_2, Label35_2, Label36_2, Label37_2, Label38_2, Label39_2};
    QList<QWidget *> L4_2 = {Label41_2, Label42_2, Label43_2, Label44_2, Label45_2, Label46_2, Label47_2, Label48_2, Label49_2};
    QList<QWidget *> L5_2 = {Label51_2, Label52_2, Label53_2, Label54_2, Label55_2, Label56_2, Label57_2, Label58_2, Label59_2};
    QList<QWidget *> L6_2 = {Label61_2, Label62_2, Label63_2, Label64_2, Label65_2, Label66_2, Label67_2, Label68_2, Label69_2};
    QList<QWidget *> L7_2 = {Label71_2, Label72_2, Label73_2, Label74_2, Label75_2, Label76_2, Label77_2, Label78_2, Label79_2};
    QList<QWidget *> L8_2 = {Label81_2, Label82_2, Label83_2, Label84_2, Label85_2, Label86_2, Label87_2, Label88_2, Label89_2};
    QList<QWidget *> L9_2 = {Label91_2, Label92_2, Label93_2, Label94_2, Label95_2, Label96_2, Label97_2, Label98_2, Label99_2};

    // Replace lineEdits with Labels
    QList<QLineEdit *> LE1_2s = ui2->horizontalLayout_15->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_15->replaceWidget(LE1_2s[i], L1_2[i]);
        LE1_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE2_2s = ui2->horizontalLayout_16->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_16->replaceWidget(LE2_2s[i], L2_2[i]);
        LE2_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE3_2s = ui2->horizontalLayout_17->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_17->replaceWidget(LE3_2s[i], L3_2[i]);
        LE3_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE4_2s = ui2->horizontalLayout_18->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_18->replaceWidget(LE4_2s[i], L4_2[i]);
        LE4_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE5_2s = ui2->horizontalLayout_19->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_19->replaceWidget(LE5_2s[i], L5_2[i]);
        LE5_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE6_2s = ui2->horizontalLayout_20->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_20->replaceWidget(LE6_2s[i], L6_2[i]);
        LE6_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE7_2s = ui2->horizontalLayout_21->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_21->replaceWidget(LE7_2s[i], L7_2[i]);
        LE7_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE8_2s = ui2->horizontalLayout_22->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_22->replaceWidget(LE8_2s[i], L8_2[i]);
        LE8_2s[i]->deleteLater();
    }

    QList<QLineEdit *> LE9_2s = ui2->horizontalLayout_23->findChildren<QLineEdit *>();
    for(int i = 0; i < 9; i++)
    {
        ui2->horizontalLayout_23->replaceWidget(LE9_2s[i], L9_2[i]);
        LE9_2s[i]->deleteLater();
    }

    // Format the labels such that they align with the grid, though this acts in tandum with ui settings
        // This should also make them the same as the text boxes were.
    int s = 50;
    QList<QLabel *> LEs = this->findChildren<QLabel *>();
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLabel *n) {n->setMinimumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLabel *n) {n->setMaximumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [](QLabel *n) {n->setAlignment(Qt::AlignHCenter); });

    QFont font = ui2->lineEdit11->font();
    font.setPointSize(24);
    std::for_each(LEs.cbegin(), LEs.cend(), [font](QLabel *n) {n->setFont(font); });

}

// Custom Dialog
Dialog::Dialog(QWidget *parent): QDialog(parent), mb(new Ui::Dialog)
{
    mb->setupUi(this);

    // Add odds and ends settings:
    this->setWindowTitle("How to Use Sudoku Solver");
    this->setWindowIcon(QIcon(":/Resources/Cuneiform_sumer_dingir.svg.png"));
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Set a custom icon beside the text:
    QPixmap * pix = new QPixmap;
    pix->load(":/Resources/oocon.png");
    *pix = pix->scaled(200, 250, Qt::KeepAspectRatio, Qt::FastTransformation);
    mb->label->setPixmap(*pix);
    mb->label->setText("");

    // Set text:
    mb->label_2->setTextFormat(Qt::MarkdownText);
    mb->label_2->setText("<b><u> Insert the Sudoku puzzle you would like solved </u></b> \n \n"
                          "You can either click the individual squares you want to fill in, "
                          "or you can start at the top \nleft square and tab through them all. "
                          "When you type a number, it will auto-tab for you \nby default to speed up and simplify the process. \n\n"
                          "Any numbers you don't know just leave blank. \n\n"
                          "There are some advanced puzzles this solver can't solve, so if you "
                          "have an error pop up, \nyou will need to solve the puzzle by hand or wait until the next release to try again. \n\n"
                          "Also, the AutoTab button does exactly that. When on, typing numbers automatically \npushes you to "
                          "the next number, but if you want to hit the tab button yourself, you can \nby turning AutoTab off.");
    mb->label_2->setFixedWidth(450);
    mb->label_2->setWordWrap(true);

    // Set style:
    QString MBstyles = readTextFile2(":/MBstyles.css");
    if(MBstyles.length() > 0)
    {
        this->setStyleSheet(MBstyles);
    }

    // Set PushButton Text
    mb->pushButton->setText("Okee dokee");

    // Slots
    QObject::connect(mb->pushButton, &QPushButton::clicked, this, &Dialog::pushButton_clicked);

}


/*--------------------------------------
 * Destructor, AKA behavior on close.
 *-------------------------------------*/

MainWindow::~MainWindow()
{
    delete ui;
}

Dialog::~Dialog()
{
    delete mb;
}

FinalWindow::~FinalWindow()
{
    delete ui2;
}

/*------------------------------------
 * Slots, AKA method custom actions.
 *-----------------------------------*/

// Popup window for clicking the Help Button.
void MainWindow::HelpButton_clicked()
{
    // Run the thing.
    Dialog MB;

    MB.exec();

}

void Dialog::pushButton_clicked()
{
    this->close();
}

// Fun Gilga-laugh when you click a blank space in the app. This emits the signal.
    // We do this in inherited signal <-> custom slot fashion because we want to pass custom arguments/parameters.
void MainWindow::GilButton_toggled(bool checked)
{
    if (checked)
        clip = false;
    else
        clip = true;
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    emit clicky(p, clip);
    event->accept();
}

// Fun Gilga-laugh when you click a blank space in the app. This slot does the work.
void MainWindow::clicked(QMediaPlayer *p, bool clip)
{
    if (clip)
    {
        // Restarts the audio when multiple clicks happen.
        p->stop();

        p->play();
    }
    else
    {
        // Layer the laughter.
        QMediaPlayer * g = new QMediaPlayer;
        QAudioOutput * h = new QAudioOutput;
        g->setAudioOutput(h);
        g->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
        h->setVolume(0.1);
        g->play();
        g->deleteLater();
        h->deleteLater();
    }
}

// Gatekeeping textbox input.
void MainWindow::lineEdit11_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit11, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit11->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit12_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit12, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit12->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit13_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit13, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit13->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit14_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit14, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit14->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit15_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit15, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit15->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit16_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit16, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit16->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit17_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit17, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit17->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit18_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit18, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit18->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit19_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit19, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit19->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit21_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit21, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit21->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit22_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit22, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit22->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit23_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit23, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit23->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit24_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit24, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit24->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit25_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit25, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit25->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit26_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit26, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit26->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit27_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit27, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit27->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit28_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit28, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit28->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit29_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit29, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit29->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit31_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit31, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit31->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit32_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit32, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit32->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit33_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit33, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit33->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit34_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit34, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit34->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit35_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit35, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit35->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit36_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit36, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit36->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit37_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit37, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit37->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit38_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit38, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit38->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit39_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit39, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit39->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit41_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit41, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit41->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit42_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit42, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit42->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit43_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit43, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit43->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit44_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit44, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit44->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit45_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit45, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit45->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit46_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit46, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit46->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit47_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit47, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit47->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit48_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit48, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit48->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit49_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit49, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit49->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit51_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit51, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit51->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit52_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit52, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit52->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit53_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit53, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit53->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit54_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit54, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit54->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit55_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit55, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit55->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit56_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit56, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit56->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit57_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit57, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit57->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit58_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit58, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit58->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit59_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit59, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit59->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit61_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit61, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit61->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit62_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit62, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit62->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit63_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit63, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit63->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit64_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit64, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit64->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit65_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit65, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit65->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit66_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit66, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit66->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit67_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit67, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit67->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit68_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit68, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit68->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit69_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit69, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit69->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit71_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit71, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit71->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit72_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit72, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit72->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit73_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit73, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit73->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit74_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit74, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit74->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit75_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit75, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit75->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit76_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit76, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit76->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit77_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit77, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit77->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit78_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit78, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit78->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit79_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit79, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit79->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit81_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit81, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit81->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit82_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit82, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit82->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit83_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit83, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit83->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit84_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit84, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit84->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit85_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit85, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit85->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit86_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit86, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit86->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit87_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit87, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit87->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit88_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit88, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit88->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit89_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit89, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit89->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit91_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit91, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit91->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit92_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit92, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit92->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit93_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit93, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit93->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit94_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit94, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit94->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit95_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit95, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit95->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit96_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit96, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit96->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit97_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit97, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit97->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit98_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit98, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit98->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

void MainWindow::lineEdit99_textEdited(const QString &arg1)
{
    checkInput(ui->lineEdit99, arg1);

    Switch * autotab = this->findChild<Switch *>();
    if (autotab->isChecked() && ui->lineEdit99->text()!="")
    {
        QApplication::sendEvent(this, kp);
    }
}

// Solve Button is clicked.
void MainWindow::SolveButton_clicked()
{
    execute(ui);
}

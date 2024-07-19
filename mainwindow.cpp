/* ---------------------------------
 * Libraries, AKA stuff you can do.
 * --------------------------------*/

// Default
#include "mainwindow.h"
#include "ui_mainwindow.h"

// Add any needed libraries here.
#include <QMouseEvent>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QStackedLayout>
#include <QMouseEvent>

// Testing purposes only.
#include <QDebug>



/* --------------------------------------------
 * Global Variables, AKA stuff to use anywhere
----------------------------------------------*/



/* -----------------------------------------
 * Functions, AKA non-method custom actions
-------------------------------------------*/



/* -----------------------------------
 * Constructor, AKA behavior on start.
-------------------------------------*/

// Default setup stuff
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set preferred ui size
    this->setMinimumSize(675, 870);

    // Set up audio player
    this->p = new QMediaPlayer;
    this->d = new QAudioOutput;
    p->setAudioOutput(d);
    p->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
    d->setVolume(0.02);
    this->clip = true;

    // Show both the Sudoku image (page 2) and the textboxes (page 1)
    ((QStackedLayout *)ui->stackedWidget->layout())->setStackingMode(QStackedLayout::StackAll);
    ui->stackedWidget->setCurrentIndex(0);

    // Set the properties of the textboxes such that they align with the grid
    int s = 50;
    QList<QLineEdit *> LEs = this->findChildren<QLineEdit *>();
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLineEdit *n) {n->setMinimumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [&s](QLineEdit *n) {n->setMaximumSize(s,s); });
    std::for_each(LEs.cbegin(), LEs.cend(), [](QLineEdit *n) {n->setAlignment(Qt::AlignHCenter); });

    QFont font = ui->lineEdit11->font();
    font.setPointSize(24);
    std::for_each(LEs.cbegin(), LEs.cend(), [font](QLineEdit *n) {n->setFont(font); });

    // Connect signals and slots here.
    QObject::connect(ui->HelpButton, &QPushButton::clicked, this, &MainWindow::HelpButton_clicked);                                          // method slot
    QObject::connect(this, &MainWindow::clicky, &MainWindow::clicked);

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
}


/* -----------------------------------
 * Destructor, AKA behavior on close.
-------------------------------------*/
MainWindow::~MainWindow()
{
    delete ui;
}


/* ----------------------------------
 * Slots, AKA method custom actions.
------------------------------------*/

// Popup window for clicking the Help Button.
void MainWindow::HelpButton_clicked()
{

    // Initialize the message box:
    QMessageBox MB;

    // Add odds and ends settings:
    MB.setWindowTitle("How to Use Sudoku Solver");

    MB.setTextFormat(Qt::MarkdownText);

    MB.setText("<b><u> Insert the Sudoku puzzle you would like solved </u></b> \n\n"
               "You can either click the individual squares you want to fill in, "
               "or you can start at the top left square and tab through them all. "
               "When you type a number, it will auto-tab for you by default to speed up and simplify the process. \n\n"
               "Any numbers you don't know just leave blank. \n\n"
               "There are some advanced puzzles this solver can't solve, so if you "
               "have an error pop up, you will need to solve the puzzle by hand or wait until the next release to try again. \n\n"
               "Also, the AutoTab button does exactly that. When on, typing numbers automatically pushes you to "
               "the next number, but if you want to hit the tab button yourself, you can by turning AutoTab off.");


    // Run the thing.
    MB.exec();
}

// Fun Gilga-laugh when you click a blank space in the app.
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    emit clicky(p, clip);

    event->accept();
}

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
        // Layers laughter.
        QMediaPlayer * g = new QMediaPlayer;
        QAudioOutput * h = new QAudioOutput;
        g->setAudioOutput(h);
        g->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
        h->setVolume(0.02);
        g->play();
    }
}

// Gatekeeping textbox input.
void MainWindow::lineEdit11_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
            ui->lineEdit11->setText(arg1);
            break;
        default:
            ui->lineEdit11->setText("");
            break;
    }

}

void MainWindow::lineEdit12_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit12->setText(arg1);
        break;
    default:
        ui->lineEdit12->setText("");
        break;
    }

}

void MainWindow::lineEdit13_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit13->setText(arg1);
        break;
    default:
        ui->lineEdit13->setText("");
        break;
    }

}

void MainWindow::lineEdit14_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit14->setText(arg1);
        break;
    default:
        ui->lineEdit14->setText("");
        break;
    }

}

void MainWindow::lineEdit15_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit15->setText(arg1);
        break;
    default:
        ui->lineEdit15->setText("");
        break;
    }

}

void MainWindow::lineEdit16_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit16->setText(arg1);
        break;
    default:
        ui->lineEdit16->setText("");
        break;
    }

}

void MainWindow::lineEdit17_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit17->setText(arg1);
        break;
    default:
        ui->lineEdit17->setText("");
        break;
    }

}

void MainWindow::lineEdit18_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit18->setText(arg1);
        break;
    default:
        ui->lineEdit18->setText("");
        break;
    }

}

void MainWindow::lineEdit19_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit19->setText(arg1);
        break;
    default:
        ui->lineEdit19->setText("");
        break;
    }

}

void MainWindow::lineEdit21_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit21->setText(arg1);
        break;
    default:
        ui->lineEdit21->setText("");
        break;
    }

}

void MainWindow::lineEdit22_textEdited(const QString &arg1)
{
    int b = 0;
    if (arg1 == '1')
        b = 1;
    else if (arg1 == '2')
        b = 2;
    else if (arg1 == '3')
        b = 3;
    else if (arg1 == '4')
        b = 4;
    else if (arg1 == '5')
        b = 5;
    else if (arg1 == '6')
        b = 6;
    else if (arg1 == '7')
        b = 7;
    else if (arg1 == '8')
        b = 8;
    else if (arg1 == '9')
        b = 9;
    else
        b = 0;
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
        ui->lineEdit22->setText(arg1);
        break;
    default:
        ui->lineEdit22->setText("");
        break;
    }

}

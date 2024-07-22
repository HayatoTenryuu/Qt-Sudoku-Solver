/* ---------------------------------
 * Libraries, AKA stuff you can do.
 * --------------------------------*/

// Default
#include "mainwindow.h"
#include "ui_MessageBoxx.h"
#include "ui_mainwindow.h"

// Add any needed Qt libraries here.
#include <QMouseEvent>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QStackedLayout>
#include <QMouseEvent>
#include <QFile>
#include <QTextStream>

// Add any needed C++ libraries here.


// Testing purposes only.
#include <QDebug>



/* --------------------------------------------
 * Global Variables, AKA stuff to use anywhere
----------------------------------------------*/



/* -----------------------------------------
 * Functions, AKA non-method custom actions
-------------------------------------------*/

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

/* -----------------------------------
 * Constructor, AKA behavior on start.
-------------------------------------*/

// Main Window
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set preferred ui size
    this->setMinimumSize(650, 500);

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

// Custom Dialog
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , mb(new Ui::Dialog)
{
    mb->setupUi(this);

    // Add odds and ends settings:
    this->setWindowTitle("How to Use Sudoku Solver");
    this->setWindowIcon(QIcon(":/Resources/Cuneiform_sumer_dingir.svg.png"));

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


/* -----------------------------------
 * Destructor, AKA behavior on close.
-------------------------------------*/
MainWindow::~MainWindow()
{
    delete ui;
}

Dialog::~Dialog()
{
    delete mb;
}


/* ----------------------------------
 * Slots, AKA method custom actions.
------------------------------------*/

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
    }
}

// Gatekeeping textbox input.
void MainWindow::lineEdit11_textEdited(const QString &arg1)
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
            ui->lineEdit11->setText(arg1);
            break;
        default:
            ui->lineEdit11->setText("");
            break;
    }

}

void MainWindow::lineEdit12_textEdited(const QString &arg1)
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
        ui->lineEdit12->setText(arg1);
        break;
    default:
        ui->lineEdit12->setText("");
        break;
    }

}

void MainWindow::lineEdit13_textEdited(const QString &arg1)
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
        ui->lineEdit13->setText(arg1);
        break;
    default:
        ui->lineEdit13->setText("");
        break;
    }

}

void MainWindow::lineEdit14_textEdited(const QString &arg1)
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
        ui->lineEdit14->setText(arg1);
        break;
    default:
        ui->lineEdit14->setText("");
        break;
    }

}

void MainWindow::lineEdit15_textEdited(const QString &arg1)
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
        ui->lineEdit15->setText(arg1);
        break;
    default:
        ui->lineEdit15->setText("");
        break;
    }

}

void MainWindow::lineEdit16_textEdited(const QString &arg1)
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
        ui->lineEdit16->setText(arg1);
        break;
    default:
        ui->lineEdit16->setText("");
        break;
    }

}

void MainWindow::lineEdit17_textEdited(const QString &arg1)
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
        ui->lineEdit17->setText(arg1);
        break;
    default:
        ui->lineEdit17->setText("");
        break;
    }

}

void MainWindow::lineEdit18_textEdited(const QString &arg1)
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
        ui->lineEdit18->setText(arg1);
        break;
    default:
        ui->lineEdit18->setText("");
        break;
    }

}

void MainWindow::lineEdit19_textEdited(const QString &arg1)
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
        ui->lineEdit19->setText(arg1);
        break;
    default:
        ui->lineEdit19->setText("");
        break;
    }

}

void MainWindow::lineEdit21_textEdited(const QString &arg1)
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
        ui->lineEdit21->setText(arg1);
        break;
    default:
        ui->lineEdit21->setText("");
        break;
    }

}

void MainWindow::lineEdit22_textEdited(const QString &arg1)
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
        ui->lineEdit22->setText(arg1);
        break;
    default:
        ui->lineEdit22->setText("");
        break;
    }

}

void MainWindow::lineEdit23_textEdited(const QString &arg1)
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
        ui->lineEdit23->setText(arg1);
        break;
    default:
        ui->lineEdit23->setText("");
        break;
    }

}

void MainWindow::lineEdit24_textEdited(const QString &arg1)
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
        ui->lineEdit24->setText(arg1);
        break;
    default:
        ui->lineEdit24->setText("");
        break;
    }

}

void MainWindow::lineEdit25_textEdited(const QString &arg1)
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
        ui->lineEdit25->setText(arg1);
        break;
    default:
        ui->lineEdit25->setText("");
        break;
    }

}

void MainWindow::lineEdit26_textEdited(const QString &arg1)
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
        ui->lineEdit26->setText(arg1);
        break;
    default:
        ui->lineEdit26->setText("");
        break;
    }

}

void MainWindow::lineEdit27_textEdited(const QString &arg1)
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
        ui->lineEdit27->setText(arg1);
        break;
    default:
        ui->lineEdit27->setText("");
        break;
    }

}

void MainWindow::lineEdit28_textEdited(const QString &arg1)
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
        ui->lineEdit28->setText(arg1);
        break;
    default:
        ui->lineEdit28->setText("");
        break;
    }

}

void MainWindow::lineEdit29_textEdited(const QString &arg1)
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
        ui->lineEdit29->setText(arg1);
        break;
    default:
        ui->lineEdit29->setText("");
        break;
    }

}

void MainWindow::lineEdit31_textEdited(const QString &arg1)
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
        ui->lineEdit31->setText(arg1);
        break;
    default:
        ui->lineEdit31->setText("");
        break;
    }

}

void MainWindow::lineEdit32_textEdited(const QString &arg1)
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
        ui->lineEdit32->setText(arg1);
        break;
    default:
        ui->lineEdit32->setText("");
        break;
    }

}

void MainWindow::lineEdit33_textEdited(const QString &arg1)
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
        ui->lineEdit33->setText(arg1);
        break;
    default:
        ui->lineEdit33->setText("");
        break;
    }

}

void MainWindow::lineEdit34_textEdited(const QString &arg1)
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
        ui->lineEdit34->setText(arg1);
        break;
    default:
        ui->lineEdit34->setText("");
        break;
    }

}

void MainWindow::lineEdit35_textEdited(const QString &arg1)
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
        ui->lineEdit35->setText(arg1);
        break;
    default:
        ui->lineEdit35->setText("");
        break;
    }

}

void MainWindow::lineEdit36_textEdited(const QString &arg1)
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
        ui->lineEdit36->setText(arg1);
        break;
    default:
        ui->lineEdit36->setText("");
        break;
    }

}

void MainWindow::lineEdit37_textEdited(const QString &arg1)
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
        ui->lineEdit37->setText(arg1);
        break;
    default:
        ui->lineEdit37->setText("");
        break;
    }

}

void MainWindow::lineEdit38_textEdited(const QString &arg1)
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
        ui->lineEdit38->setText(arg1);
        break;
    default:
        ui->lineEdit38->setText("");
        break;
    }

}

void MainWindow::lineEdit39_textEdited(const QString &arg1)
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
        ui->lineEdit39->setText(arg1);
        break;
    default:
        ui->lineEdit39->setText("");
        break;
    }

}

void MainWindow::lineEdit41_textEdited(const QString &arg1)
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
        ui->lineEdit41->setText(arg1);
        break;
    default:
        ui->lineEdit41->setText("");
        break;
    }

}

void MainWindow::lineEdit42_textEdited(const QString &arg1)
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
        ui->lineEdit42->setText(arg1);
        break;
    default:
        ui->lineEdit42->setText("");
        break;
    }

}

void MainWindow::lineEdit43_textEdited(const QString &arg1)
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
        ui->lineEdit43->setText(arg1);
        break;
    default:
        ui->lineEdit43->setText("");
        break;
    }

}

void MainWindow::lineEdit44_textEdited(const QString &arg1)
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
        ui->lineEdit44->setText(arg1);
        break;
    default:
        ui->lineEdit44->setText("");
        break;
    }

}

void MainWindow::lineEdit45_textEdited(const QString &arg1)
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
        ui->lineEdit45->setText(arg1);
        break;
    default:
        ui->lineEdit45->setText("");
        break;
    }

}

void MainWindow::lineEdit46_textEdited(const QString &arg1)
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
        ui->lineEdit46->setText(arg1);
        break;
    default:
        ui->lineEdit46->setText("");
        break;
    }

}

void MainWindow::lineEdit47_textEdited(const QString &arg1)
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
        ui->lineEdit47->setText(arg1);
        break;
    default:
        ui->lineEdit47->setText("");
        break;
    }

}

void MainWindow::lineEdit48_textEdited(const QString &arg1)
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
        ui->lineEdit48->setText(arg1);
        break;
    default:
        ui->lineEdit48->setText("");
        break;
    }

}

void MainWindow::lineEdit49_textEdited(const QString &arg1)
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
        ui->lineEdit49->setText(arg1);
        break;
    default:
        ui->lineEdit49->setText("");
        break;
    }

}

void MainWindow::lineEdit51_textEdited(const QString &arg1)
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
        ui->lineEdit51->setText(arg1);
        break;
    default:
        ui->lineEdit51->setText("");
        break;
    }

}

void MainWindow::lineEdit52_textEdited(const QString &arg1)
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
        ui->lineEdit52->setText(arg1);
        break;
    default:
        ui->lineEdit52->setText("");
        break;
    }

}

void MainWindow::lineEdit53_textEdited(const QString &arg1)
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
        ui->lineEdit53->setText(arg1);
        break;
    default:
        ui->lineEdit53->setText("");
        break;
    }

}

void MainWindow::lineEdit54_textEdited(const QString &arg1)
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
        ui->lineEdit54->setText(arg1);
        break;
    default:
        ui->lineEdit54->setText("");
        break;
    }

}

void MainWindow::lineEdit55_textEdited(const QString &arg1)
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
        ui->lineEdit55->setText(arg1);
        break;
    default:
        ui->lineEdit55->setText("");
        break;
    }

}

void MainWindow::lineEdit56_textEdited(const QString &arg1)
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
        ui->lineEdit56->setText(arg1);
        break;
    default:
        ui->lineEdit56->setText("");
        break;
    }

}

void MainWindow::lineEdit57_textEdited(const QString &arg1)
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
        ui->lineEdit57->setText(arg1);
        break;
    default:
        ui->lineEdit57->setText("");
        break;
    }

}

void MainWindow::lineEdit58_textEdited(const QString &arg1)
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
        ui->lineEdit58->setText(arg1);
        break;
    default:
        ui->lineEdit58->setText("");
        break;
    }

}

void MainWindow::lineEdit59_textEdited(const QString &arg1)
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
        ui->lineEdit59->setText(arg1);
        break;
    default:
        ui->lineEdit59->setText("");
        break;
    }

}

void MainWindow::lineEdit61_textEdited(const QString &arg1)
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
        ui->lineEdit61->setText(arg1);
        break;
    default:
        ui->lineEdit61->setText("");
        break;
    }

}

void MainWindow::lineEdit62_textEdited(const QString &arg1)
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
        ui->lineEdit62->setText(arg1);
        break;
    default:
        ui->lineEdit62->setText("");
        break;
    }

}

void MainWindow::lineEdit63_textEdited(const QString &arg1)
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
        ui->lineEdit63->setText(arg1);
        break;
    default:
        ui->lineEdit63->setText("");
        break;
    }

}

void MainWindow::lineEdit64_textEdited(const QString &arg1)
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
        ui->lineEdit64->setText(arg1);
        break;
    default:
        ui->lineEdit64->setText("");
        break;
    }

}

void MainWindow::lineEdit65_textEdited(const QString &arg1)
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
        ui->lineEdit65->setText(arg1);
        break;
    default:
        ui->lineEdit65->setText("");
        break;
    }

}

void MainWindow::lineEdit66_textEdited(const QString &arg1)
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
        ui->lineEdit66->setText(arg1);
        break;
    default:
        ui->lineEdit66->setText("");
        break;
    }

}

void MainWindow::lineEdit67_textEdited(const QString &arg1)
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
        ui->lineEdit67->setText(arg1);
        break;
    default:
        ui->lineEdit67->setText("");
        break;
    }

}

void MainWindow::lineEdit68_textEdited(const QString &arg1)
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
        ui->lineEdit68->setText(arg1);
        break;
    default:
        ui->lineEdit68->setText("");
        break;
    }

}

void MainWindow::lineEdit69_textEdited(const QString &arg1)
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
        ui->lineEdit69->setText(arg1);
        break;
    default:
        ui->lineEdit69->setText("");
        break;
    }

}

void MainWindow::lineEdit71_textEdited(const QString &arg1)
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
        ui->lineEdit71->setText(arg1);
        break;
    default:
        ui->lineEdit71->setText("");
        break;
    }

}

void MainWindow::lineEdit72_textEdited(const QString &arg1)
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
        ui->lineEdit72->setText(arg1);
        break;
    default:
        ui->lineEdit72->setText("");
        break;
    }

}

void MainWindow::lineEdit73_textEdited(const QString &arg1)
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
        ui->lineEdit73->setText(arg1);
        break;
    default:
        ui->lineEdit73->setText("");
        break;
    }

}

void MainWindow::lineEdit74_textEdited(const QString &arg1)
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
        ui->lineEdit74->setText(arg1);
        break;
    default:
        ui->lineEdit74->setText("");
        break;
    }

}

void MainWindow::lineEdit75_textEdited(const QString &arg1)
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
        ui->lineEdit75->setText(arg1);
        break;
    default:
        ui->lineEdit75->setText("");
        break;
    }

}

void MainWindow::lineEdit76_textEdited(const QString &arg1)
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
        ui->lineEdit76->setText(arg1);
        break;
    default:
        ui->lineEdit76->setText("");
        break;
    }

}

void MainWindow::lineEdit77_textEdited(const QString &arg1)
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
        ui->lineEdit77->setText(arg1);
        break;
    default:
        ui->lineEdit77->setText("");
        break;
    }

}

void MainWindow::lineEdit78_textEdited(const QString &arg1)
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
        ui->lineEdit78->setText(arg1);
        break;
    default:
        ui->lineEdit78->setText("");
        break;
    }

}

void MainWindow::lineEdit79_textEdited(const QString &arg1)
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
        ui->lineEdit79->setText(arg1);
        break;
    default:
        ui->lineEdit79->setText("");
        break;
    }

}

void MainWindow::lineEdit81_textEdited(const QString &arg1)
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
        ui->lineEdit81->setText(arg1);
        break;
    default:
        ui->lineEdit81->setText("");
        break;
    }

}

void MainWindow::lineEdit82_textEdited(const QString &arg1)
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
        ui->lineEdit82->setText(arg1);
        break;
    default:
        ui->lineEdit82->setText("");
        break;
    }

}

void MainWindow::lineEdit83_textEdited(const QString &arg1)
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
        ui->lineEdit83->setText(arg1);
        break;
    default:
        ui->lineEdit83->setText("");
        break;
    }

}

void MainWindow::lineEdit84_textEdited(const QString &arg1)
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
        ui->lineEdit84->setText(arg1);
        break;
    default:
        ui->lineEdit84->setText("");
        break;
    }

}

void MainWindow::lineEdit85_textEdited(const QString &arg1)
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
        ui->lineEdit85->setText(arg1);
        break;
    default:
        ui->lineEdit85->setText("");
        break;
    }

}

void MainWindow::lineEdit86_textEdited(const QString &arg1)
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
        ui->lineEdit86->setText(arg1);
        break;
    default:
        ui->lineEdit86->setText("");
        break;
    }

}

void MainWindow::lineEdit87_textEdited(const QString &arg1)
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
        ui->lineEdit87->setText(arg1);
        break;
    default:
        ui->lineEdit87->setText("");
        break;
    }

}

void MainWindow::lineEdit88_textEdited(const QString &arg1)
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
        ui->lineEdit88->setText(arg1);
        break;
    default:
        ui->lineEdit88->setText("");
        break;
    }

}

void MainWindow::lineEdit89_textEdited(const QString &arg1)
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
        ui->lineEdit89->setText(arg1);
        break;
    default:
        ui->lineEdit89->setText("");
        break;
    }

}

void MainWindow::lineEdit91_textEdited(const QString &arg1)
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
        ui->lineEdit91->setText(arg1);
        break;
    default:
        ui->lineEdit91->setText("");
        break;
    }

}

void MainWindow::lineEdit92_textEdited(const QString &arg1)
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
        ui->lineEdit92->setText(arg1);
        break;
    default:
        ui->lineEdit92->setText("");
        break;
    }

}

void MainWindow::lineEdit93_textEdited(const QString &arg1)
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
        ui->lineEdit93->setText(arg1);
        break;
    default:
        ui->lineEdit93->setText("");
        break;
    }

}

void MainWindow::lineEdit94_textEdited(const QString &arg1)
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
        ui->lineEdit94->setText(arg1);
        break;
    default:
        ui->lineEdit94->setText("");
        break;
    }

}

void MainWindow::lineEdit95_textEdited(const QString &arg1)
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
        ui->lineEdit95->setText(arg1);
        break;
    default:
        ui->lineEdit95->setText("");
        break;
    }

}

void MainWindow::lineEdit96_textEdited(const QString &arg1)
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
        ui->lineEdit96->setText(arg1);
        break;
    default:
        ui->lineEdit96->setText("");
        break;
    }

}

void MainWindow::lineEdit97_textEdited(const QString &arg1)
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
        ui->lineEdit97->setText(arg1);
        break;
    default:
        ui->lineEdit97->setText("");
        break;
    }

}

void MainWindow::lineEdit98_textEdited(const QString &arg1)
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
        ui->lineEdit98->setText(arg1);
        break;
    default:
        ui->lineEdit98->setText("");
        break;
    }

}

void MainWindow::lineEdit99_textEdited(const QString &arg1)
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
        ui->lineEdit99->setText(arg1);
        break;
    default:
        ui->lineEdit99->setText("");
        break;
    }

}




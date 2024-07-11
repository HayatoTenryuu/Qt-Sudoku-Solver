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

// Testing purposes only.
#include <QDebug>



/* -----------------------------------------
 * Functions, AKA non-method custom actions
-------------------------------------------*/
void MainWindow::positionChanged()
{
    int pos = p->position();

    if(pos >= 1500)
    {
        p->stop();
    }
}


/* -----------------------------------
 * Constructor, AKA behavior on start.
-------------------------------------*/

// Default setup stuff
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Show both the Sudoku image (page 2) and the textboxes (page 1)
    ((QStackedLayout *)ui->stackedWidget->layout())->setStackingMode(QStackedLayout::StackAll);

    // Media Player setup
    p = new QMediaPlayer;
    d = new QAudioOutput;

    p->setAudioOutput(d);
    p->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
    d->setVolume(0.02);

    // Connect signals and slots here.
    QObject::connect(ui->HelpButton, SIGNAL(clicked()), this, SLOT(HelpButton_clicked()));       // method slot
    //QObject::connect(p, SIGNAL(positionChanged()), this, SLOT(positionChanged));                // function slot
}



/* -----------------------------------
 * Destructor, AKA behavior on close.
-------------------------------------*/
MainWindow::~MainWindow()
{
    delete ui;
}



/* --------------------------
 * Slots, AKA custom actions.
-----------------------------*/

// Popup window for clicking the Help Button
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
    // Uncomment this section and do everything locally to layer laughter.
    /*
     * p->setAudioOutput(d);
     * p->setSource(QUrl("qrc:/Resources/S012_LvUp.ogg"));
     * d->setVolume(0.02);
    */

    // Restarts the audio when multiple clicks happen.
    p->stop();

    p->play();

    event->accept();

}



#include "mainwindow.h"
#include "ui_mainwindow.h"

/* Added these so that I can manipulate those object types. */
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* ------------------------------------------------------------------------------------------------------------
 * Everything before this came by default. This came from right-clicking the widget and hitting "go to slot".
 * Note that doing so also created the declaration in mainwindow.h for you.
 * ------------------------------------------------------------------------------------------------------------*/





void MainWindow::on_HelpButton_clicked()
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


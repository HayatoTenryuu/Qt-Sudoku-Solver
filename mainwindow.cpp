#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QIcon>

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

void MainWindow::on_commandLinkButton_clicked()
{
    /* Initialize the message box: */
    QMessageBox MB;


    /* Add odds and ends settings: */
    MB.setWindowTitle("How to Use Sudoku Solver");


    /* Define the actual text of the message box. */
        // Note that you can have different types of text. Markdown is fun, but it's pretty picky. I ended up liking this the most:
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


    /* Add a custom icon so that it doesn't make a noise when the message box pops up. */
        // Note that it's massive by default, so we need to create a scaled version and assign THAT as the icon:
    QPixmap * pixfile = new QPixmap(":/Resources/Resources/Blue_question_mark_icon.svg.png");
    QPixmap icon = pixfile->scaled(25, 25);
    MB.setIconPixmap(icon);


    /* Now actually create / show the thing: */
    MB.exec();
}


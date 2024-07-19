/* ---------------------------------
 * Libraries, AKA stuff you can do.
 * --------------------------------*/

// Default
#include "mainwindow.h"
#include <QApplication>

// Add any needed Qt libraries here.
#include <QFile>
#include <QTextStream>

// Add any needed C++ libraries here.


// Testing purposes only.
#include <QDebug>


/* -----------------------------------------------------
 * Custom functions that the main application will use.
-------------------------------------------------------*/

// File I/O for reading the Style Sheet
QString readTextFile(QString path)
{
    QFile file(path);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        return in.readAll();
    }

    return "";
}


/* --------------------------------------
 * Main function, with any needed extras.
----------------------------------------*/

int main(int argc, char *argv[])
{
    // Set up the application.
    QApplication a(argc, argv);

    // Pull from the style sheet (if it exists).
    QString styles = readTextFile(":/styles.css");
    if(styles.length() > 0)
    {
        a.setStyleSheet(styles);
    }


    // Set up the main window with any needed names/customizations.
    MainWindow w;
    w.setWindowTitle("Sudoku Solver");
    w.setWindowIcon(QIcon(":/Resources/Cuneiform_sumer_dingir.svg.png"));
    w.show();
    return a.exec();

}

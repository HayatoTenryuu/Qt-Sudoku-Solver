#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>

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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString styles = readTextFile(":/Resources/styles.css");

    if(styles.length() > 0)
    {
        a.setStyleSheet(styles);
    }

    MainWindow w;
    w.setWindowTitle("Sudoku Solver");

    w.show();
    return a.exec();

}

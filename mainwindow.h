/* -------------------------
 * If-guards and libraries.
 * ------------------------*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMediaPlayer>
#include <QAudioOutput>

/* -----------------
 * Namespace Setup.
 * ----------------*/
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE




/* -----------------------------------------
 * Main Window class with methods and slots.
 * ----------------------------------------*/
class MainWindow
    : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);   
    ~MainWindow();

signals:
    void clicky(QMediaPlayer *p, bool clip);

private slots:

    // Functional slots
    void HelpButton_clicked();
    void clicked(QMediaPlayer *p, bool clip);

    // Prevent invalid input
    void lineEdit11_textEdited(const QString &arg1);
    void lineEdit12_textEdited(const QString &arg1);
    void lineEdit13_textEdited(const QString &arg1);
    void lineEdit14_textEdited(const QString &arg1);
    void lineEdit15_textEdited(const QString &arg1);
    void lineEdit16_textEdited(const QString &arg1);
    void lineEdit17_textEdited(const QString &arg1);
    void lineEdit18_textEdited(const QString &arg1);
    void lineEdit19_textEdited(const QString &arg1);
    void lineEdit21_textEdited(const QString &arg1);
    void lineEdit22_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QAudioOutput *d;
    QMediaPlayer *p;
    bool clip;

    // Pull event from QWidget interface by right click -> refactor -> insert virtual functions
protected:
    void mouseReleaseEvent(QMouseEvent *event);
};
#endif // MAINWINDOW_H

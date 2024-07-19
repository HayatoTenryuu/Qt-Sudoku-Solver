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
    void lineEdit23_textEdited(const QString &arg1);
    void lineEdit24_textEdited(const QString &arg1);
    void lineEdit25_textEdited(const QString &arg1);
    void lineEdit26_textEdited(const QString &arg1);
    void lineEdit27_textEdited(const QString &arg1);
    void lineEdit28_textEdited(const QString &arg1);
    void lineEdit29_textEdited(const QString &arg1);

    void lineEdit31_textEdited(const QString &arg1);
    void lineEdit32_textEdited(const QString &arg1);
    void lineEdit33_textEdited(const QString &arg1);
    void lineEdit34_textEdited(const QString &arg1);
    void lineEdit35_textEdited(const QString &arg1);
    void lineEdit36_textEdited(const QString &arg1);
    void lineEdit37_textEdited(const QString &arg1);
    void lineEdit38_textEdited(const QString &arg1);
    void lineEdit39_textEdited(const QString &arg1);

    void lineEdit41_textEdited(const QString &arg1);
    void lineEdit42_textEdited(const QString &arg1);
    void lineEdit43_textEdited(const QString &arg1);
    void lineEdit44_textEdited(const QString &arg1);
    void lineEdit45_textEdited(const QString &arg1);
    void lineEdit46_textEdited(const QString &arg1);
    void lineEdit47_textEdited(const QString &arg1);
    void lineEdit48_textEdited(const QString &arg1);
    void lineEdit49_textEdited(const QString &arg1);

    void lineEdit51_textEdited(const QString &arg1);
    void lineEdit52_textEdited(const QString &arg1);
    void lineEdit53_textEdited(const QString &arg1);
    void lineEdit54_textEdited(const QString &arg1);
    void lineEdit55_textEdited(const QString &arg1);
    void lineEdit56_textEdited(const QString &arg1);
    void lineEdit57_textEdited(const QString &arg1);
    void lineEdit58_textEdited(const QString &arg1);
    void lineEdit59_textEdited(const QString &arg1);

    void lineEdit61_textEdited(const QString &arg1);
    void lineEdit62_textEdited(const QString &arg1);
    void lineEdit63_textEdited(const QString &arg1);
    void lineEdit64_textEdited(const QString &arg1);
    void lineEdit65_textEdited(const QString &arg1);
    void lineEdit66_textEdited(const QString &arg1);
    void lineEdit67_textEdited(const QString &arg1);
    void lineEdit68_textEdited(const QString &arg1);
    void lineEdit69_textEdited(const QString &arg1);

    void lineEdit71_textEdited(const QString &arg1);
    void lineEdit72_textEdited(const QString &arg1);
    void lineEdit73_textEdited(const QString &arg1);
    void lineEdit74_textEdited(const QString &arg1);
    void lineEdit75_textEdited(const QString &arg1);
    void lineEdit76_textEdited(const QString &arg1);
    void lineEdit77_textEdited(const QString &arg1);
    void lineEdit78_textEdited(const QString &arg1);
    void lineEdit79_textEdited(const QString &arg1);

    void lineEdit81_textEdited(const QString &arg1);
    void lineEdit82_textEdited(const QString &arg1);
    void lineEdit83_textEdited(const QString &arg1);
    void lineEdit84_textEdited(const QString &arg1);
    void lineEdit85_textEdited(const QString &arg1);
    void lineEdit86_textEdited(const QString &arg1);
    void lineEdit87_textEdited(const QString &arg1);
    void lineEdit88_textEdited(const QString &arg1);
    void lineEdit89_textEdited(const QString &arg1);

    void lineEdit91_textEdited(const QString &arg1);
    void lineEdit92_textEdited(const QString &arg1);
    void lineEdit93_textEdited(const QString &arg1);
    void lineEdit94_textEdited(const QString &arg1);
    void lineEdit95_textEdited(const QString &arg1);
    void lineEdit96_textEdited(const QString &arg1);
    void lineEdit97_textEdited(const QString &arg1);
    void lineEdit98_textEdited(const QString &arg1);
    void lineEdit99_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QAudioOutput *d;
    QMediaPlayer *p;
    bool clip;

    // Pull events from other interfaces by right click -> refactor -> insert virtual functions
protected:
    void mouseReleaseEvent(QMouseEvent *event);
};
#endif // MAINWINDOW_H

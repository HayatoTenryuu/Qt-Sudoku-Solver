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
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void HelpButton_clicked();
    void mouseReleaseEvent(QMouseEvent *event) override;
    void positionChanged();

private:
    Ui::MainWindow *ui;
    QAudioOutput *d;
    QMediaPlayer *p;
};
#endif // MAINWINDOW_H

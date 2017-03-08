#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:

    void on_set_command_textChanged(const QString &arg1);

    void on_SPEED_editingFinished();
   // void on_comboBox_activated(const QString &arg1);
   // void on_plainTextEdit_textChanged();

    void on_pushButton_play_clicked();

    void on_pushButton_8_clicked();

    void on_openFile_clicked();


    void on_textOpenFile_textEdited(const QString &arg1);

public slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

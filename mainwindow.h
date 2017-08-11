#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QKeyEvent>

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

    void on_openFile_clicked();
    void on_loadTofileButton_clicked();
signals:
    void FileData(const QStringList &data);
    void Save(QString path);
public slots:
    void on_textOpenFile_textEdited(const QString &arg1);
  private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

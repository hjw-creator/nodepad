#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QPlainTextEdit>
#include <QPalette>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    void initUi();
    void initFileMenu(QMenuBar *&mb);
    void initEditMenu(QMenuBar *mb);
    void initFormatMenu(QMenuBar *mb);
    void initViewMenu(QMenuBar *mb);
    void initHelpMenu(QMenuBar *mb);

    void initMainEditor();

    QPlainTextEdit mainEditor;

};

#endif // MAINWINDOW_H

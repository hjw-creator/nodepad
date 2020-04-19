#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800, 600);
    initUi();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initUi(){
    QMenuBar *mb = new QMenuBar(this);
    initFileMenu(mb);
    initEditMenu(mb);
    initFormatMenu(mb);
    initViewMenu(mb);
    initHelpMenu(mb);
    setMenuBar(mb);
}

void MainWindow::initFileMenu(QMenuBar *&mb)
{
    QMenu *menu = new QMenu ("file", this);
    if(menu){
        QAction *action = nullptr;
        action = new QAction("New",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Open",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Save",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Page setting",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Exit",this);
        if(action){
            menu->addAction(action);
        }
    }
    mb->addMenu(menu);
}

void MainWindow::initEditMenu(QMenuBar *mb)
{
    QMenu *menu = new QMenu ("Edit", this);
    if(menu){
        QAction *action = nullptr;
        action = new QAction("Undo",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Cut",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Copy",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Paste",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Find",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Find",this);
        if(action){
            menu->addAction(action);
        }
    }
    mb->addMenu(menu);
}

void MainWindow::initFormatMenu(QMenuBar *mb)
{
    QMenu *menu = new QMenu ("Format", this);
    if(menu){
        QAction *action = nullptr;
        action = new QAction("Auto Wrap",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Font",this);
        if(action){
            menu->addAction(action);
        }
    }
    mb->addMenu(menu);
}

void MainWindow::initViewMenu(QMenuBar *mb)
{
    QMenu *menu = new QMenu ("View", this);
    if(menu){
        QAction *action = nullptr;
        action = new QAction("Status",this);
        if(action){
            menu->addAction(action);
        }
    }
    mb->addMenu(menu);
}

void MainWindow::initHelpMenu(QMenuBar *mb)
{
    QMenu *menu = new QMenu ("Help", this);
    if(menu){
        QAction *action = nullptr;
        action = new QAction("About",this);
        if(action){
            menu->addAction(action);
        }
        action = new QAction("Help",this);
        if(action){
            menu->addAction(action);
        }
    }
    mb->addMenu(menu);
}

void MainWindow::initMainEditor()
{
    mainEditor.setParent(this);
       //设置中央组件为mainEditor
    setCentralWidget(&mainEditor);
       //设置mainEditor的背景色为豆沙绿
    QPalette p = mainEditor.palette();
    p.setColor(QPalette::Base, QColor(204, 232, 207));
    mainEditor.setPalette(p);
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model.setRootPath("");
    model.setFilter(QDir::AllDirs);

    QTreeView& tree = *(ui->treeView);
    tree.setModel(&model);

    // Demonstrating look and feel features
    tree.setAnimated(false);
    tree.setIndentation(20);
    tree.setSortingEnabled(true);
    tree.setColumnHidden(1, true);
    tree.setColumnHidden(2, true);
    tree.setColumnHidden(3, true);

//    tree.setWindowTitle(QObject::tr("Dir View"));
//    tree.resize(640, 480);
//    tree.show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

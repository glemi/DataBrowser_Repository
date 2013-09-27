#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    directories.setRootPath(QDir::currentPath());
    directories.setResolveSymlinks(true);
    directories.setFilter(QDir::AllDirs | QDir::NoDotAndDotDot);

    QModelIndex index = directories.index("Z:/Work/Matlab/ProbeStation/Data");

    ui->treeView->setModel(&directories);
    ui->treeView->setColumnHidden(1, true);
    ui->treeView->setColumnHidden(2, true);
    ui->treeView->setColumnHidden(3, true);
    ui->treeView->setHeaderHidden(true);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->expand(index);

    files.setRootPath(directories.rootPath());
    files.setFilter(QDir::Files);
    files.setNameFilters(QStringList("*.mat"));
    files.setNameFilterDisables(false);
    ui->filesView->setModel(&files);

    ui->filesView->setWordWrap(false);
    ui->filesView->resizeColumnsToContents();
    ui->filesView->resizeRowsToContents();
    ui->filesView->verticalHeader()->hide();
    ui->filesView->setShowGrid(false);
    ui->filesView->horizontalHeader()->setStretchLastSection(true);
    ui->filesView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QFileInfo info = directories.fileInfo(index);

    if (ui->treeView->isExpanded(index))
        ui->treeView->collapse(index);
    else
        ui->treeView->expand(index);

    qDebug() << "Tree View Clicked: " << info.canonicalPath() << "\n";
    files.setRootPath(info.canonicalFilePath());
    QModelIndex newindex = files.index(info.canonicalFilePath());

    ui->filesView->setRootIndex(newindex);
    ui->filesView->resizeRowsToContents();
    ui->filesView->resizeColumnsToContents();
    //ui->filesView->horizontalHeader()->setStretchLastSection(true);
}

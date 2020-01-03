#include "file_download.h"
#include "ui_file_download.h"

File_Download::File_Download(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::File_Download)
{
    ui->setupUi(this);
}

File_Download::~File_Download()
{
    delete ui;
}

#ifndef FILE_DOWNLOAD_H
#define FILE_DOWNLOAD_H

#include <QMainWindow>

namespace Ui {
class File_Download;
}

class File_Download : public QMainWindow
{
    Q_OBJECT

public:
    explicit File_Download(QWidget *parent = 0);
    ~File_Download();

private:
    Ui::File_Download *ui;
};

#endif // FILE_DOWNLOAD_H

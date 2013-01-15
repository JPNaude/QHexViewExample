
#include <QtGui>

#include "QHexView.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Get data:
    QFile file(QApplication::applicationFilePath());
    QByteArray bytes;
    //frame->setWidget(&view);
    if (file.exists()) {
        file.open(QFile::ReadOnly);
        bytes = file.readAll();
        file.close();
    }

    // Prepare data for QHexView:
    QBuffer* buffer = new QBuffer(&bytes);
    buffer->open(QIODevice::ReadWrite);
    QSharedPointer<QBuffer> buff_ptr(buffer);

    // Create hexview
    QHexView view;
    view.setWordWidth(3);
    view.setRowWidth(4);
    view.setData(buff_ptr);
    view.show();

    return a.exec();
}

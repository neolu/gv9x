#ifndef MIXERSLIST_H
#define MIXERSLIST_H

#include <QtGui>

class MixersList : public QListWidget
{
    Q_OBJECT
public:
    explicit MixersList(QWidget *parent = 0);
//    QMimeData * mimeData ( const QList<QListWidgetItem *> items );

    void keyPressEvent(QKeyEvent *event);


signals:
    void mimeDropped(int index, const QMimeData *data, Qt::DropAction action);
    void keyWasPressed(QKeyEvent *event);


protected:

public slots:
    bool dropMimeData(int index, const QMimeData *data, Qt::DropAction action);

private:
    QPoint dragStartPosition;

};

#endif // MIXERSLIST_H

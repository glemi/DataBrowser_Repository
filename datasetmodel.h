#ifndef DATASETMODEL_H
#define DATASETMODEL_H

#include <QAbstractItemModel>

class DataSetModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit DataSetModel(QObject *parent = 0);
    
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;

signals:
    
public slots:
    
};

#endif // DATASETMODEL_H

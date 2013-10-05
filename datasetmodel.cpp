#include "datasetmodel.h"

DataSetModel::DataSetModel(QObject *parent) :
    QAbstractItemModel(parent)
{


}

Qt::ItemFlags DataSetModel::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant DataSetModel::data(const QModelIndex &index, int role) const
{
    return QVariant();
}

QVariant DataSetModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}

int DataSetModel::rowCount(const QModelIndex &parent) const
{
    return 0;
}

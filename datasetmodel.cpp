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
    switch (role) 
    {
    case Qt::DisplayRole:
        
        
        
        break;
    default:
        break;
    }
    
    
    return QVariant();
}

QVariant DataSetModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}

int DataSetModel::columnCount(const QModelIndex &parent) const
{
    return 0;
}

QModelIndex DataSetModel::index(int row, int column, const QModelIndex &parent) const
{
}

QModelIndex DataSetModel::parent(const QModelIndex &child) const
{
}

int DataSetModel::rowCount(const QModelIndex &parent) const
{
    return 0;
}

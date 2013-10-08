#ifndef DATASETNODE_H
#define DATASETNODE_H


#include <QList>
#include <QString>

class DataSetNode
{
public:
    DataSetNode(DataSetNode* parent);
    virtual ~DataSetNode();

    enum DataSetType
    {
        DATASET_BATCH,
        DATASET_DATASET,
        DATASET_GROUP,
        DATASET_MEASUREMENT,
        DATASET_COMPONENT
    };

    QString name();
    DataSetType type();

    DataSetNode* parent();
    QList<DataSetNode*> children();

protected:
    QString mName;
    DataSetType mType;

private:
    DataSetNode* mpParent;
    QList<DataSetNode*> mChildren;
};

#endif // DATASETNODE_H

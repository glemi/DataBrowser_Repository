#include "datasetnode.h"

DataSetNode::DataSetNode()
{
}


DataSetNode::DataSetNode(DataSetNode* parent)
{
    mpParent = parent;
    if (mpParent != NULL)
        mpParent->mChildren.append(this);
}

DataSetNode::~DataSetNode()
{
    if (mpParent != NULL)
        mpParent->mChildren.removeAll(this);
}

#ifndef COMPONENT_H
#define COMPONENT_H

#include "datasetnode.h"

#include "matvar.h"

#include <QString>
#include <QList>
#include <QVector>

class Component : public DataSetNode
{
public:
    Component(DataSetNode* parent);

    static Component* construct(DataSetNode* parent, const MatVar& matVar);

    QString unit();
    QString terminal();

private:
    QString mUnit;
    QString mTerminal;

    QVector<double> mArray;
};

typedef QList<Component*> Components;

#endif // COMPONENT_H

#ifndef COMPONENT_H
#define COMPONENT_H

#include "datasetnode.h"

#include "matvar.h"

#include <QString>
#include <QList>

class Component;
typedef QList<Component*> Components;


class Component : public DataSetNode
{
public:
    Component(DataSetNode* parent);

    static Measurement construct(DataSetNode* parent, const MatVar& matVar);

    QString unit();
    QString terminal();

private:
    QString mUnit;
    QString mTerminal;

    QVector<double> mArray;
};

#endif // COMPONENT_H

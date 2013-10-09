#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <QString>
#include "matstruct.h"
#include "component.h"

class Measurement : public DataSetNode
{
private:
    Measurement(DataSetNode* parent);

public:
    static Measurement construct(DataSetNode* parent, const MatStruct& matStruct);

    enum Type { SCALAR, SWEEP, MULTI_SWEEP };

    //QList<Component> components();
    int getSweepCount();

private:
     Components mComponents;

};

#endif // MEASUREMENT_H

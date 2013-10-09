#include "measurement.h"


Measurement::Measurement(DataSetNode *parent)
    : DataSetNode(parent)
{
}

Measurement Measurement::construct(DataSetNode *parent, const MatStruct &matStruct)
{
    Measurement* measurement = new Measurement(parent);

    for (MatVar var : matStruct.fields())
    {
        Component* component = Component::construct(measurement, var);
        measurement->mComponents.append(component);
    }

    return measurement;
}

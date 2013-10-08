#include "measurement.h"

Measurement::Measurement()
{


}

Measurement Measurement::construct(DataSetNode *parent, const MatStruct &matStruct)
{
    Measurement* measurement = new Measurement(parent);

    for (MatVar var : matStruct.fields())
    {
        Component component = Component::construct(measurement, var);
        mComponents.append(component);
    }
}

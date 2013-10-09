#include "component.h"

#include <QRegExp>

Component::Component(DataSetNode* parent)
    : DataSetNode(parent)
{
}

Component* Component::construct(DataSetNode *parent, const MatVar &matVar)
{
    Component* component = new Component(parent);

    QRegExp pattern("([IV])_(\\w+)");
    QString varname = matVar.getName();

    if(pattern.exactMatch(varname))
    {
        QString first = pattern.cap(0);
        QString secnd = pattern.cap(1);

        component->mTerminal = secnd;

        if (first == "I")
            component->mUnit = "A";
        else if (first == "V")
            component->mUnit = "V";

        component->mArray = matVar.getDoubleArrayData();
    }

    return component;
}

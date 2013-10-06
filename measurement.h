#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <QString>

class Measurement
{
private:

    QString name;


public:

    enum Type { SCALAR, SWEEP, SWEEPS };

    Measurement();

    int getSweepCount();


};

#endif // MEASUREMENT_H

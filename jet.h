#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Skateboard : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();
    explicit Jet(string brand, string model, string fuelType, 
		 int numEngines = 1);
    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int numEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif // DRIVINGSIMULATOR_JET_H

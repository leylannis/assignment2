#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
    string myType;	// unknown, freight, or passenger

public:
    Train();
    explicit Train(string brand, string model, string fuelType,
                 string trainType);

    virtual ~Train();
    string getTrainType();
    void setTrainType(string trainType);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_TRAIN_H

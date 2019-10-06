#include "train.h"

Train::Train() {
    myType = "unknown";
    setBrand("unknown");
    setModel("unknown");
}

Train::Train(string brand, string model, string fuelType, string trainType); {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setTrainType(trainType);
}

Train::~Train() = default;

string Train::getTrainType(){
    return myType;
}

void Train::setTrainType(string trainType){
    if (trainType == "unknown" || trainType == "passenger" || 
        trainType == "freight")
        myType = trainType; 
    else 
        myType = "unknown";
}

double Train::mileageEstimate(double time){
    double mileage = 1 * time;	// standard mileage (for unknown types)
    if (myType == "passenger")	// passenger train mileage
        mileage = 2 * time;
    if (myType == "freight")	// freight train mileage
        mileage = 0.8 * time;

    return mileage;
}

string Train::toString() {
    return "-> Train\n" + PoweredVehicle::toString() + "\n\tTrain Type: " +
           getTrainType();
}

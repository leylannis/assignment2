#include "jet.h"

#include <ctime>
#include <cstdlib>

Jet::Jet(){
    numberOfEngines = 1;
    setBrand("unknown");
    setModel("unknown");
}

Jet::Jet(string brand, string model, string fuelType, int numEngines){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines(){
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines){
    if (numEngines <= 1)
        numberOfEngines = 1;
    else
        numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time){
    srand(time(NULL));
    int mileage = 40 + ( rand() % 60);
    if (numberOfEngines => 2 && fuelType == "Rocket"){
        mileage += ((mileage * 0.055) * numberOfEngines);
    }

    return mileage;
}

string Jet::toString(){
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "
           + getNumberOfEngines();
}

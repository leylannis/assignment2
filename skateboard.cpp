#include "skateboard.h"

#include <ctime>
#include <cstdlib>

Skateboard::Skateboard(string brand = "none", string model = "none") {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time(NULL));
    double mileage = ((rand() * 0.5) + 0.1);
    if (time > 25 && time < 250){
        mileage = (rand()%(time/3)) + 1;
    }
}

string Skateboard::toString() {
    return "-> Skateboard\n" + Vehicle::toString();
}

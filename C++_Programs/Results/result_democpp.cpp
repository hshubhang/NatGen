#include <iostream>
using namespace std;

void updateTemperature(float currentTemp, bool isHeating) {
    float targetTemp;
    
    if (isHeating) { targetTemp = 25.0f ; } else { targetTemp = 18.0f; }
    cout << " " << currentTemp << " " << targetTemp << endl ;
}

int main() {
    float currentTemperature = 20.0f;
    bool heatingStatus = true;
    updateTemperature(currentTemperature, heatingStatus);
    return 0;
}

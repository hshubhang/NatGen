#include <iostream>
using namespace std;

void updateTemperature(float currentTemp, bool isHeating) {
    float targetTemp;
    
    targetTemp = isHeating ? 25.0f : 18.0f;
    cout << "Current Temperature: " << currentTemp << ", Target Temperature: " << targetTemp << endl;
}

int main() {
    float currentTemperature = 20.0f;
    bool heatingStatus = true;
    updateTemperature(currentTemperature, heatingStatus);
    return 0;
}

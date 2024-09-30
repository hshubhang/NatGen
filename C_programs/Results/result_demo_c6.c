#include <stdio.h>

void updateTemperature(float currentTemp, int isHeating) {
    float targetTemp;
    
    if ( isHeating ) { targetTemp = 25.0 ; } else { targetTemp = 18.0; }
    printf("Current Temperature: %.2f, Target Temperature: %.2f\n", currentTemp, targetTemp);
}

int main() {
    float currentTemperature = 20.0;
    int heatingStatus = 1; // Assume 1 for heating on, 0 for off
    updateTemperature(currentTemperature, heatingStatus);
    return 0;
}

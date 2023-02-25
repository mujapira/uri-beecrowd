#include <stdio.h>
 
int main() { 
    float consumption, fuelSpent;
    int distance;
    
    consumption = distance / fuelSpent;

    scanf("%d %f %f", &distance, &consumption, &fuelSpent);
    
    printf("%.3f km/l\n", consumption);

    return 0;
}
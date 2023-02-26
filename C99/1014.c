#include <stdio.h>
 
int main() { 
    float consumption, fuelSpent;
    int distance;
    

    scanf("%d %f %f", &distance, &fuelSpent);
    consumption = distance / fuelSpent;
    
    printf("%.3f km/l\n", consumption);

    return 0;
}
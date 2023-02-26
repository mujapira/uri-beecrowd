#include <stdio.h>

int main() { 

    int spentTime, averageSpeed;
    float distance, litersSpent;
    scanf("%d %d", &spentTime, &averageSpeed);
	
    distance = spentTime * averageSpeed;
    litersSpent = distance / 12.0;

    printf("%.3f\n", litersSpent);
}

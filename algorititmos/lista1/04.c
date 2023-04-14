#include <stdio.h>

int main() { 
    printf("Função ano de nascimento para dias de vida:\n");
    
    float currentYear, bornYear, calc;
	
    printf("Por favor, digite o ano atual\n");
    scanf("%f", &currentYear);

    printf("Por favor, digite o ano que você nasceu\n");
    scanf("%f", &bornYear);

    calc =  (currentYear - bornYear) * 365;


    printf("você tem aproximadamente %.0lf dias de vida\n", calc);

    return 0;
}
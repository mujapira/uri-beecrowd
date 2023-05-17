
// 7. Escreva um programa que calcule todos os números inteiros divisíveis por
// um certo valor indicado pelo usuário, e compreendidos em um intervalo também
// especificado pelo usuário.
//  O usuário deve entrar com um primeiro valor correspondente ao divisor e após
//  ele vai fornecer o
// valor inicial do intervalo, seguido do valor final deste intervalo. Exemplo:
//         Números divisíveis por 3 no intervalo de 17 a 29: 18 21 24 27

#include <stdio.h>

int main() {
	//	Solução: contar de N em N do inicio ao fim do intervalo de maneira que N sempre seja divisível (resto 0)
	// 	Exemplo: divisível por 3 no intervalo de 3 ao 9:
	//	3
	//	valor anterior + 3
	//	valor anterior + 3 até que seja igual ao fim do intervalo

	int divisor, inicioIntervaloInput, fimIntervaloInput, valor = 0, resto;
	int inicioIntervalo, fimIntervalo;

	printf("Digite o valor do divisor \n");
	scanf("%i", &divisor);
	// caso o o divisor seja 0
	if (divisor == 0) {
		printf("É proibido dividir por 0\n");
		return 0;
	}

	printf("Digite o primeiro e o último valor do intervalo\n");
	scanf("%i %i", &inicioIntervaloInput, &fimIntervaloInput);
	//caso o intervalo seja dado de maneira não crescente => exemplo: 9 e 3
	inicioIntervalo = inicioIntervaloInput;
	fimIntervalo = fimIntervaloInput;

	if (inicioIntervaloInput > fimIntervaloInput) {
		inicioIntervalo = fimIntervaloInput;
		fimIntervalo = inicioIntervaloInput;
	}

	//se for dividir por numero negativo
	if (divisor < 0) {
		divisor = divisor * (-1);
		printf("Números divisíveis por -%i no intervalo de %i a %i: \n", divisor, inicioIntervalo, fimIntervalo);
	} else {
		printf("Números divisíveis por %i no intervalo de %i a %i: \n", divisor, inicioIntervalo, fimIntervalo);
	}

	valor = inicioIntervalo;
	//caso o inicio do intervalo não seja divisível pelo divisor
	// 	Exemplo: divisível por 3 no intervalo de 2 ao 11:
	//	2 não tem resto zero, então vamos somar +1 até ter resto zero
	// 	2 + 1 = 3  => tem resto zero
	//	3
	//	valor anterior + 3 até que seja igual ao fim do intervalo
	if (valor % divisor != 0) {
		while (valor % divisor != 0) {
			valor = valor + 1;
		}
	}
	

	while (valor >= inicioIntervalo && valor <= fimIntervalo) {
        printf("%i\n", valor);
        valor = valor + divisor;
    }

	return 0;
}
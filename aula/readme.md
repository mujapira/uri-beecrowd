
[]- Introdução
[]- Funções
[]- Variáveis
[]- Print e Scanf
[]- Operadores
[]- Como evitar erros
[]- For
[]- Contador e acumulador

# C é uma linguagem de baixo nível

# Linhas gerais
1. Padrão camelCase, sem números e símbolos para declarar variáveis. Elas devem ser descritivas e podem ser longas
2. Identar o código com Tabs ou espaços

## Bibliotecas

#include <stdio.h>

# estrutura de uma função
oQueElaEspera NomeDaFunção(parâmetros){
    instruções;
    return 0;   
}

# Função Main
int main() { 
    instruções;
    return 0;
}

# Tipos de variáveis
[int]    - %i  - apenas números inteiros (consome pouca memoria)
[float]  - %f  - aceita vírgula (mais memoria, cerca de 5 casas decimais de precisão)
[double] - %lf - float com mais precisão

# Funções padrão
[printf]
[scanf]

# [printf]
printf("O dobro do número é");

## Passando uma variável junto
printf("O valor das variáveis é: %tipoDaVariávelUm, %tipoDaVariavelDois", nomeDaVariávelUm, nomeDaVariávelDois);

- Como imprimir o símbolo %? sendo que o % é usado para passar o tipo da variável?
printf("100%% dos alunos são legais");

- Como pular uma linha?
printf("\n");

- Como controlar a quantidade de casas decimais da variável?
printf("%.3i", variavel)

### Exemplo 1
01.c

# [scanf]
scanf("%i", &variavel);
- scanf é responsável pela entrada de dados do usuário
- o & é responsável por guardar essa entrada em um endereço na memória

### Exemplo 2
# Operadores lógicos etc
. if
. else

%  [resto] 10 % 2 = 0 -> Como ler? O resto de 10 dividido por 2 é igual a
+  [Soma] a + b
-  [Subtração] a -b
/  [Divisão] a / b
*  [multiplicação] a * b
=  [atribuir] a = 1
== [compararSeIgual] a == b -> compara e retorna verdadeiro ou falso
> < <= <=
!= [comparaSeDiferente] a != b -> compara e retorna verdadeiro ou falso
++ [incrementaEmUmaUnidade]
-- [decrementaEmUmaUnidade]
+= [acumula]
-= [desacumula]


> sobre o if e o else

if(condição){
    instrução do if
} else {
    instrução do else
}

Caso a condição seja verdadeira, a instrução do if será executada
caso contrario a instrução do else será executada
- O else não é obrigatório

### Exercício 4
04.c

### Como evitar 95% dos erros com 3 simples passos
1. Verificar ;
2. Verificar &
3. Verificar a compatibilidade dos tipos
4. Conferir se usou == para comparar

# Conceito de acumulador e contador
[contador]
    Método para contar
variavel = variavel + 1;

[acumulador]
    Método para guardar uma sequencia de valores
variavel = variavel + valorSoma

## Precisa saber
- media
- 

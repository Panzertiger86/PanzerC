#include <stdio.h>

int main () {

int soma;
int subtracao;
int divisao;
int multiplicacao;

int valor1;
int valor2;

printf("Escreva o valor 1: \n");
scanf("%d", &valor1);

printf("Escreva o valor 2: \n");
scanf("%d", &valor2);

soma = valor1 + valor2;

subtracao = valor1 - valor2;

multiplicacao = valor1 * valor2;

divisao = valor1 / valor2;

printf("A soma é:%d \n", soma);
printf("A subtração é:%d \n", subtracao);
printf("A multiplicação é:%d \n", multiplicacao);
printf("A divisão é:%d \n", divisao);



return 0;

}
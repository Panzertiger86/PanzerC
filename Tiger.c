#include <stdio.h>

int main () {
int idade;
float altura;
char nome[50];

printf("Informe sua idade: \n");
scanf("%d", &idade);

printf("Informe seu nome: \n");
scanf("%s", &nome);

printf("Informe sua altura: \n");
scanf("%f", &altura);

printf("idade:%d \n", idade);
printf("Nome:%s \n", nome);
printf("Tamanho:%f \n", altura);

return 0;
}
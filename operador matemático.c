#include <stdio.h>

int main () {

    int valor1, valor2, resultado;

    resultado = 10;

    resultado += 10;
    printf("soma= %d\n", resultado);

    resultado -= 20;
    printf("sub=%d\n", resultado);

    valor1= ++resultado;
    printf("préincremento=%d - valor1=%d\n", resultado, valor1);

    valor2 = --resultado;
    printf("pré decremento=%d - valor2=%d\n", resultado, valor2);


    return 0;

}

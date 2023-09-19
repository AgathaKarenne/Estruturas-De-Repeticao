#include<stdio.h>

main(){

    /*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

    int n = 1, mult, resto;
    int divisor = 3, contador = 0;

    printf("Quais são os cinco primeiros multiplos de 3 maiores que 0:\n ");
    scanf("%d\n", n);

    do {

    printf("%d\n", contador);
    contador = n * mult;
}       while (contador < 5);

    
}

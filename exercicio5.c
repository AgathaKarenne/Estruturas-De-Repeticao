#include<stdio.h>

main(){

    /* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

    int contador, soma = 0, pares = 0;

    printf("Os primeiros numeros pares de 50 são: \n");
    
    for (contador = 1; contador <= 50; contador++)
    {
        pares = pares + 2;
        soma += pares;
        

    printf("\nMostre a soma %d %d %d", contador, pares,  soma);
    }
}
    
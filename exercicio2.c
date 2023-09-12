#include<stdio.h>

main(){

    /*Faça um programa que leia um número inteiro positivo
     N e imprima todos os números naturais de 0 até N em ordem decrescente. */

     int numero;
        printf("Digite um numero");
        scanf("%d", &numero);

    while (numero >= 10) {
            printf("%d\n" , numero);
            numero = numero + 1;
        }
        
}
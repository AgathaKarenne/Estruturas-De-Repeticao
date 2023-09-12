#include<stdio.h>

main(){

    /*Faça um programa que leia um número inteiro N
     e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */

     int numero, impar = 1, N;
     printf("Digite um numero inteiro");
     scanf("%d", &numero);

    
     while (N <= 0){
        printf("%d\n", impar);
        impar += 2;
        N --;
     }
}
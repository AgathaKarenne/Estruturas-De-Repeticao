#include<stdio.h>

main(){

    /*Faça um programa que leia um número inteiro N
     e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */

     int n, i = 0, impar = 1;
     printf("Digite um numero inteiro");
     scanf("%d", &n);


    while (i < n) {
    printf("%d\n", impar);
    impar += 2;
    i++;
}

   for (i = 1; n > 0; i += 2, n--) {
        printf("%d\n", i);
    }


}
#include<stdio.h>

main(){

    /*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

    int n = 1, mult, resto;
    int divisor = 3, contador = 1;

    printf("Quais são os cinco primeiros multiplos de 3 maiores que 0:\n ");

   
      while (contador <= 50){
        if(divisor %3 == 0){
            printf("\nmostre o divisor %d", divisor);
            contador++;
        }
        divisor++;
      }


    
}
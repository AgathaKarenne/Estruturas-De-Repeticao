#include<stdio.h>

main(){

    /*Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
     Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
     O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser,
      e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 
     1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade*/

    int menufrutas, valor, quantidade, valorTotal, continuar, total = 0.0;

    switch(menufrutas){
    case 1:
        printf("Abacaxi :R$ 5,00 a unidade\n");
        break;
    case 2:
        printf("Maçã :R$ 1,00 a unidade\n");
        break;
    case 3:
        printf("Pera: R$ 4,00 a unidade\n");
        break;
    }

    while (continuar == 0); {
        printf("solicite a quantidade de frutas:");
        if("%d", &quantidade);{
                    total += quantidade * valorTotal;
                    total += quantidade * valorTotal;
        }
        
    } printf("\nMostre o valor final da compra %d %d %d", valor, quantidade, valorTotal);

}


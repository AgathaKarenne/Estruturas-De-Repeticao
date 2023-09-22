#include<stdio.h>

main(){

    /*Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
     Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
     O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser,
      e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 
     1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade*/

    int valor, continuar, opção, valorTotal = 0.0;
    
    do{
        printf("Menu de Frutas:\n");
        printf("1. Abacaxi - R$5.00 por unidade\n");
        printf("2. Maçã - R$1.00 por unidade\n");
        printf("3. Pera - R$4.00 por unidade\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
    }

    switch(opção){
        case 01
            printf("quantos abacaxis deseja comprar");
            scanf("%d", &quantidade);
            total += quantidade * 5.00;
            break;
         case 02
            printf("quantas maças deseja comprar");
            scanf("%d", &quantidade);
            total += quantidade * 1.00;
            break;
         case 03
            printf("quantas peras deseja comprar");
            scanf("%d", &quantidade);
            total += quantidade *4.00;
            break;
   
   
        
    } printf("\nMostre o valor final da compra %d %d %d", valor, quantidade, valorTotal);

}while (opção != 1, 2, 3);
    printf("Esta fruta não esta disponivel");
    scanf("%d", &opção);
    EXIT_SUCCESS



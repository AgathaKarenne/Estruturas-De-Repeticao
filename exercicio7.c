#include<stdio.h>

main(){

    char sexo, olhos, cabelos;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade;
    float salario, porcentagem;

    //cadastrar um habitante em cada repetição
    do {
        //contagem de cada habitante
        totalHabitantes++;
        //validar e preencher o campo sexo
        do{ 

            printf("digite o sexo: (m ou f)");
            scanf("%c", &sexo);
            fflush(stdin);
            if(sexo != 'm' && sexo != 'f'){
                printf("\nopção invalida");

            }

        }while(sexo != 'm' && sexo != 'f');
        //preencher e validar o campo dos olhos
        do{
            printf("Digite a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v'){
                    printf("\nopção invalida");
            }

        }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

        printf("Deseja cadastrar um novo habitante: 1 SIM -1 NAO");
        scanf("%d", &idade);
    }while(idade != -1);

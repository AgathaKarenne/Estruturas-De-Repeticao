#include<stdio.h>

main(){

    char sexo, olhos, cabelos;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade;
    float salario, porcentagem, opção;

    //cadastrar um habitante em cada repetição
    do {
        //contagem de cada habitante
        totalHabitantes++;
        //validar e preencher o campo sexo
    
        do {
            fflush(stdin);
            printf("digite o sexo: (m ou f)");
            scanf("%c", &sexo);
            fflush(stdin);
            if(sexo == 'm'){
                totalM++;
            }else if(sexo == 'f'){
                totalF++;
            }
            if(sexo != 'm' && sexo != 'f'){
                printf("\nopção invalida");

            }
        
        }

    while(sexo != 'm' && sexo != 'f');{
        //preencher e validar o campo dos olhos
    }
        do{
            printf("Digite a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v'){
                    printf("\nopção invalida");
            }

        }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

        //preencher e validar o campo cabelos
        do{
            fflush(stdin);
            printf("Digite a cor dos cabelos");
            scanf("%c", &cabelos);
            if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
            printf("Opção invalida");

            }while(cabelos != 'l'&& cabelos != 'c' && cabelos != 'p' && cabelos != 'r');
        }
        //preencher e validar o campo idade
        do{
            fflush(stdin);
            printf("Digite a idade");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
                printf("\nopção invalida");
            
            while(idade < 10 || idade > 100);}
        }
        //preencher e validar o campo salario//
        do{
            fflush(stdin);
            printf("Digite o salario");
            scanf("%d", &salario);
            
        totalHabitantes++; 
        printf("Deseja cadastrar um novo habitante: 1 SIM -1 NAO");
        scanf("%d", &opção);
    
        }while(opção != -1){

        porcentagem = totalEspecifico/totalHabitantes*100;{

        printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
        printf("\nTotal de homens cadastrados: %d", totalM);
        printf("\nTotal de mulheres cadastrados: %d", totalF);
        printf("\nPorcentagem de Pessoas com caracteristicas especificas: %.2f", porcentagem);
        
            }   
        }

    }

}

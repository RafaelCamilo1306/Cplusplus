// um programa que leia de varias pessoas a idade e sexo, e imprima a media de idade das mulheres;

//passo 1 criar um array pra armazenar a idade e sexo em forma de array 
//ex: dados[1000], info[2];
//
//ex: dados[0]=info["feminino",18];
/// vou deixar essa ideia pra um desafio futuro

//usei do-while




#include <stdio.h>
#include <ctype.h>//bibloteca uppacase pro char

int main()
{
    int  idade, count, soma;
    char sexo,sair;
    float media;
    do{
        printtf("\nDigite suas informações\n")
        printf("sexo: ");
        scanf(" %c", &sexo);
        
        sexo = toupper(sexo);
        
        printf("idade: ");
        scanf("%d", &idade);
        
        if(sexo=='F'){
            soma+= (float)idade;
            count+=1;
        }
        printf("deseja continuar?[s/n]\n");
        scanf(" %c",&sair);
        
        sair = toupper(sair);
        
    }while(sair=='S');

    media= (float) soma/count;

    printf("%0.2f",media);
    return 0;   
}
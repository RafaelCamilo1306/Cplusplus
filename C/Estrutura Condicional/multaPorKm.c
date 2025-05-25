/*Escreva um programa que pergunte a velocidade do carro de um usuário.Caso 
ultrapasse 80 km/h, exiba uma mensagem dizendo que o usuário foimultado. 
Neste caso, exiba o valor da multa, cobrando R$ 105,00 por km acima de 80 km/h.*/

#include <stdio.h>

int main()
{
    int vel;
    printf("Qual é sua velocidade?[km/h]");
    scanf("%d",&vel);
    if(vel<0){
        printf("entrada inválida!");
        return 1;
    }
    if(vel>80){
        int multa=105*(vel-80);
        printf("Você foi multado em R$%0.0f !!", multa);
        return 0;
    }
    printf("Você não foi multado.");
    return 0;
}
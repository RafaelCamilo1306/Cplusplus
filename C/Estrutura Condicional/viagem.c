/*Escreva um programa que pergunte a distância que um passageiro deseja percorrer em km. Calcule
 o preço da passagem, cobrando R$ 0,50 por km para viagens de até 200 km, e R$ 0,45 para viagens 
 mais longas. */

 
#include <stdio.h>
int main()
{
    float km;
    
    printf("Qual é distÂncia da sua viagem?\n");
    scanf("%f", &km);
    
    if(km>200){
        printf("Passagem:R$ %0.2f",km*0.45);
        return 0;
    }
    printf("Passagem:R$ %0.2f",km*0.50);
    return 0;
}

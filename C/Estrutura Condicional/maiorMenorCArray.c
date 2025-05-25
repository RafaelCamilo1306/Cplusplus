// Escreva um programa que leia três números e que imprima o maior e o menor. 

#include <stdio.h>
void troca(int *num1, int *num2){
    int aux= *num1;/* aux recebera temporariamente num1 para troca de valores*/
    *num1= *num2;
    *num2= aux;
}

int main()
{
    int nuns[3];
    int i;
    
    printf("insira os valores para verificar:");
    for(i=0; i<3; i++){
        scanf("%d", &nuns[i]); /*estrutura pra registrar valores no array nuns*/
    }
    
    for(i=0 ; i<2 ; i++){
        if(nuns[i]< nuns[i+1]){
            troca(&nuns[i], &nuns[i+1]);
            i=-1;
        }
    }
    printf("o numero maior e menor inseridos, respectivamente, são %d e %d", nuns[0], nuns[2]);
    return 0;
}
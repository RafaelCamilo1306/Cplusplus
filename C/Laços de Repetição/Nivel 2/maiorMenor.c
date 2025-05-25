/*2.	Leia um conjunto de números (terminado por zero) e imprima o maior e o menor valor. */
#include <stdio.h>

int main()
{
    int input, less, major;
    printf("Digite uma sequência de numeros\nSe quiser sair insira 0\n");
    input=1;
    while(input!=0){
        scanf("%d",&input);
        if(input!=0){
            if(less==0){
                less=input;
            }
            if(input>major){
                major=input;
            }else if(input<less){
                less=input; 
            }
        }
    } 
    printf("O Menor numero é %d e o Maior é %d", less, major);
    return 0;
}
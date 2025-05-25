
/*1.	Escreva um programa que leia um número e imprima a soma dos seus divisores (exceto o próprio número). */
#include <stdio.h>
#include <locale.h>/*biblioteca para permitir acentuação*/

int main(){
    setlocale (LC_ALL, "Portuguese");/*definindo linguagem para português*/

    int num, soma;
    printf("Digite o numero para somar seus divisores");
    scanf("%d", &num);   

    for(int i=1; i<num; i++){      
        if(num % i == 0){ /*compara se (i)indice é um divisor de (Num)*/
            printf("%d\t", i);
            soma += i;  
        }
    }
    printf("\n\na soma dos divisores é igual a %d.", soma); 
}
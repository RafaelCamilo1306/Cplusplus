/*1.	Escreva um programa que imprima os números pares de 1 a 20. */
#include <stdio.h>

int main()
{
    for(int i=1; i<=20; i++){
        if(i%2==0){
            printf("%d ,", i);
        }
    }
    return 0;
}

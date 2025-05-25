/*Escreve um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários 
superiores a R$ 1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, de 15%. */


#include <stdio.h>
int main()
{
    float salario;
    printf("Digite teu salário para calculo de reajuste:\n");   
    scanf("%f",&salario);
    if(salario>1250){
        printf("Salario: %0.2f\nReajuste: %0.2f\nNovo Salário: %0.2f",salario, salario*0.1, salario*1.10);
        return 0;
    }
   printf("Salario: %0.2f\nReajuste: %0.2f\nNovo Salário: %0.2f",salario, salario*0.15, salario*1.15);
    return 0;
}
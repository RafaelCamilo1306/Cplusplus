/* Escreva um programa que leia dois números e que pergunte qual operação você deseja realizar. Você deve poder calcular soma (+), subtração (-),
 multiplicação (*) e divisão (/). Exiba o resultado da operação solicitada.*/ 
 
#include <stdio.h>
int main()
{
    int num1, num2;
    char operador;
    float resultado;
    
    printf("Digite os dois numero da expressão\n");
    scanf("%d%d", &num1, &num2);
    
    printf("\nDigite a operação[+, -, x, /]\n");
    scanf(" %c", &operador);
    
    switch (operador){
        case '+':
        resultado= num1 +num2;
        printf("%0.0f",resultado);
        break;
    
        case '-':
        resultado= num1 - num2;
        printf("%0.0f",resultado);
        break;
        
        case 'x':
        resultado= num1 * num2;
        printf("%0.0f",resultado);
        break;
        
        case '/':
        if(num2==0){
           printf("ERRO NA DIVISÃO POR 0");
            return 1;
        }
        resultado= num1 / num2;
        printf("%0.0f",resultado);
        break;
    }
    
}

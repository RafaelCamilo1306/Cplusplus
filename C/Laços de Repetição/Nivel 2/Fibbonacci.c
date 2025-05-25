/*4.	Leia um número inteiro e imprima a sua sequência de Fibonacci (até o 10º termo,. 
sem contar o input do usuário como um termo)*/

#include <stdio.h>

int main()
{
    int fibonas[11];
    
    printf("Digite um numero para iniciar a sequencia de Fibbonacci: ");
    scanf("%d", &fibonas[0]);
    
    
    for(int i=1; i < 11; i++){
        // calculo de Fibbonacci o proximo numero da sequencia é formado pelo seu antecessor mais ele mesmo;
        fibonas[i]+=fibonas[i-1]+fibonas[i-2];
    }

// seção para exibir o array "fibonas[]"em formato de array
    printf("Conteudo do array: [");
    for ( int i = 0; i < 11; i++) {
        printf("%d", fibonas[i]);
        if (i < 10) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
    
}
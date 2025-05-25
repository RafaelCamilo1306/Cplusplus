/*2.	Leia um número inteiro e imprima sua tabuada (de 1 a 10). */


#include <stdio.h>

int main()
{
   int num;
   
   printf("digite um numero: ");
   scanf("%d", &num);
   
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d \n", i, num, i*num );
    }
    
    printf("\n fim da Execução.....");
    return 0;
    
}
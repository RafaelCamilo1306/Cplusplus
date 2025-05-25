// 3.	Leia um conjunto de números (terminado por zero) e imprima a sequência de Fibonacci para cada número. 
#include <stdio.h>

int main()
{
    int input,nuns[99];
    
    printf("Digite os numeros que queria imprimir sua sequencia fibonaacci\n[digite 0 pra gerar a sequencia]\n");
    
    for(int i=0; i<100;i++){
       scanf("%d", &input);
       if(input==0){
           nuns[i]=input;
           break;
       }else{
           nuns[i]=input;
       }
    }
    for(int i=0 ; i<100;i++){
        
        int fibonas[11]={0};
        if(nuns[i]!=0){
            fibonas[0]=nuns[i];
            printf("\nNumero:%d\nFibonnaci[",nuns[i]);
            for ( int i = 0; i < 11; i++) {
                fibonas[i+1]+=fibonas[i]+fibonas[i-1];
                printf("%d", fibonas[i]);
                if (i < 10) {
                    printf(", ");
                }
            }
            printf("]\n");
        }
        else{
            printf("\n fim da execução");
            break;
        }
    }
    return 0;

}
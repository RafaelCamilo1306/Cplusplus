#include <stdio.h>

int main()
{
    int soma;
    for(int i=1; i<=100; i++){
        if(i%2!=0){
            printf("%d ,", i);
            soma+=i;
        }
    }
    printf("\n\na soma é igual %d", soma);
    return 0;
}

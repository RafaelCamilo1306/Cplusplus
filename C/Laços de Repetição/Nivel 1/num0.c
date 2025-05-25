#include <stdio.h>
#include <ctype.h>
int main()
{
    int num;
    char op;
    while (op!= 'N'){
        printf("\nMe diga um numero:");
        scanf("%d", &num);
        
        if(num<0){
            printf("%d é menor que 0",num);
    
        }else if(num>0){
            printf("%d é maior que 0",num);
    
        }else{
            printf("%d é igual a 0",num);
        }
        printf("\nQuer continuar?[y/n]");
        scanf(" %c", &op);
        op = toupper(op);
        
    }
    printf("\ntchau!!!");
        return 0 ;
}

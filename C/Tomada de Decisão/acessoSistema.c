#include <stdio.h>
#include <ctype.h>/*biblioteca para alterar para uppercase a variavel char*/
int main()
{
    char sexo;
    int idade;
    printf("Qual é o seu gênero:[M/F] ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    printf("Qual é a sua idade: ");
    scanf("%d", &idade);
    
    
    if(sexo=='F' && idade>=18){
        printf("Acesso permitido...\nBem-vinda ao sistema!!");
    }else{
        printf("Acesso negado");
    }
    
    return 0;
}
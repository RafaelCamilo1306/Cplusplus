#include <stdio.h>

int main() {
    int idade;
    float ingresso;
    
    printf("Me diga sua idade:");
    scanf("%d", &idade);
    
    
    if(idade>0 && idade<=12){
         ingresso=5;
        printf("\nPerfeito o valor do seu ingresso é %0.2f",ingresso);
        return 0;
    }else if(idade>=60){
        ingresso=8;
        printf("\nPerfeito o valor do seu ingresso é %0.2f",ingresso);
        return 0;
    }else{
        ingresso=10;
    }
    printf("\nPerfeito o valor do seu ingresso é %0.2f",ingresso);
    return 0;
    
}

/*


ideia de código mais complexa para finalizar mais tarde



#include <stdio.h>
int quantAcompanhante, adulto, criança, idoso;

int verifyAge(){
    
}

int main() {
    
    int  quantIngresso, idade, resp;
    
    printf("Bem vindo ao cinema quantos ingressos vai quer:");
    scanf("%d",&quantIngresso);
    
    if(quantIngresso<=0){
        printf("Piada engraçada , tenha um bom dia e não atrapalhe meu trabalho");
        return 1;
    }
    
    printf("\nPerfeito sera(ão) %d .... \nantes de eu te falarqual é sua idade?", quantIngresso);
    scanf("%d",&idade);
    verifyAge(idade);
    
    if(quantIngresso>1){
        printf("\ntem alguma criança ou idoso com você?[y/n]");
        scanf(" %c", &resp);
        
        if(resp="y"){
          printf("Diga sua(s) idades"),  
          scanf("")
        }
    }else if(
    
    
  }
*/
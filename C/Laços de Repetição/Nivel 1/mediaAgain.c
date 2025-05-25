#include <stdio.h>

int main() {
    
    int count;
    
    printf("Bem vindo ao calculo de media escolar\n");
    printf("Seram 5 notas calculadas ");
    
    int notas[5];
    
    for(count=0; count<5; count++ ){
        printf("Digite a nota %d: ", count+1);
        scanf("%d", &notas[count]);
    }
    
    int soma;
    for(count=0; count<5; count++){
        soma+=notas[count];
    }
    
    float media = (float)soma/5;
    /*Para auxilio da lógica foi utilzado ChatGPT até este ponto
    Entranto apenas como ferramenta de estudo de novas estruturas não vistas 
    em aula, como o loop For*/
    
    printf("A media do aluno é %0.2f", media);
    if(media>=7){
       printf("\n \nAPROVADO");
    }else{
        printf("\n \nREPROVADO");
    }
    
}
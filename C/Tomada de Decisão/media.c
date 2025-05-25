/*algoritmmo para calcular a media com a quantidade de notas definida pelo usuário*/
#include <stdio.h>

int main() {
    
    int quantNotas, count;
    
    printf("Bem vindo ao calculo de media escolar\n");
    printf("Quantas notas serao calculadas? ");
    scanf("%d", &quantNotas);
    
    if(quantNotas<=0){
        printf("\nQuantidade de notas inválida \n");
        return 0;
    }
    
    int notas[quantNotas];
    
    for(count=0; count<quantNotas; count++ ){
        printf("Digite a nota %d: ", count+1);
        scanf("%d", &notas[count]);
    }
    
    int soma;
    for(count=0; count<quantNotas; count++){
        soma+=notas[count];
    }
    
    float media = (float)soma/quantNotas;
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

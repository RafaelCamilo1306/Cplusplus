/*Escreva um programa para aprovar o empréstimo bancário para compra de uma casa. O programa deve perguntar o valor da casa a comprar, o salário e a quantidade de anos a pagar. O valor da prestação mensal não pode ser superior a 30% do salário. Calcule o valor da prestação como sendo o valor da casa a comprar dividido pelo número de meses a pagar. */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>/*biblioteca para alterar para uppercase a variavel char*/
float valorValido(float *valor){/*função para chegar valor menor que zero*/
    if(*valor<0){
        printf("\n\nERRO......\nVALOR NEGATIVO");
        return false;
    }
    return true;
}
int main()
{
    float sal, valCasa;
    int quantParcela, aux=1;
    char op;
    
    printf("Vamos simular seu emprestimo....\nQual é o valor da casa?");
    scanf("%f", &valCasa);
    
    if(valorValido(&valCasa)){
        printf("\nÓtimo agora me diga o seu salário\nR$");
        scanf("%f" , &sal);
        if(valorValido(&sal)){
            while(aux==1){
                printf("\ne a quantidade de parcelas?");
                scanf("%d", &quantParcela);
                
                if(sal*0.3>=valCasa/quantParcela){
                    printf("\nParabens o emprestimo foi aprovado\nValor da Parcela:R$%0.2f",valCasa/quantParcela);
                }else{
                    printf("\nInfelismente o emprestimo não aprovado o valor da parcela é maior que 30%% do seu salário\nValor da Parcela:R$%0.2f",valCasa/quantParcela);
                }   
                printf("\nporcentagem do salário: %0.0f %%",(valCasa/quantParcela*100)/sal );
                aux=3;
                while (aux==3){
                    printf("\n\nQuer mudar a quantidade de Parcelas?[Y/N]\n");
                    scanf(" %c", &op);
                    op = toupper(op);/*uppercase da opção*/
                    if(op=='Y'){
                        aux= 1;
                    }else if(op=='N'){
                        printf("\naté a próxima...");
                        break;
                    }else{
                        printf("\nNão te entendi pode repetir?\n");
                    }
                }
            }
            
        }
        return 1;
    }
    return 1;

}

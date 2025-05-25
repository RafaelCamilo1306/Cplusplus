#include <stdio.h>

int main()
{
    float peso, altura;
    
    printf("CALCULO DE IMC\nQual é o seu peso?");
    scanf("%f",&peso );
    
    printf("Qual é a sua altura?[ex:1.50]  ");
    scanf("%f",&altura );
    
    
    double imc = (double)peso/(altura*altura);
    
    if(imc<18.5){
        printf("%0.2f , Você está abaixo do peso", imc);
    }else if(imc>=18.5 && imc<=24.9){
        printf("%0.2f , Você está com peso normal", imc);
    }else if(imc>=25 && imc<=29.9){
        printf("%0.2f , Você está com sobrepeso", imc);
    }else if(imc>30){
        printf("%0.2f , Você está com obesidade", imc);
    }else{
        printf("ERRO!!");
        return 1;
    }
return 0;
}
 

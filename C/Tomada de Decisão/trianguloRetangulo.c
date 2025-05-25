#include <stdio.h>
#include <stdbool.h>
int main()
{
    float  hipotenusa, cateto1, cateto2;
    bool loop=true;
    
    while (loop){
    printf("vamos verificar se o trigulo é retangulo\nDigite o valor do maior lado do triangulo: ");
    scanf("%f", &hipotenusa);
    
    printf("\nMe diga a medida do outro dois lados: ");
    scanf("%f%f", &cateto1,&cateto2);
    
        if(hipotenusa<cateto1 || hipotenusa<cateto2){
            printf("%0.0f não é o menor lado por favor corrija o valor\n", hipotenusa);
        }else{
            if(hipotenusa*hipotenusa==(cateto1*cateto1)+(cateto2*cateto2)){
                printf("os lados %0.0f , %0.0f e %0.0f formam um triangulo retangulo\n", hipotenusa, cateto1, cateto2);
                return 0;
            }
           printf("os lados %0.0f , %0.0f e %0.0f não formam um triangulo retangulo\n", hipotenusa, cateto1, cateto2);
           return 0;
        }
    }  
}
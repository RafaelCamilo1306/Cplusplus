/*Escreva um programa que calcule o preço a pagar pelo fornecimento de energia elétrica. Pergunte a quantidade de kWh consumida e o tipo de instalação: R para residencial, I para industrial e C para comércios. Calcule o preço a pagar de acordo com a tabela a seguir                                                                                      • Residencial: Até 500 kWh – R$ 0,40 e acima de 500 kWh – R$ 0,65.                          • Comercial: Até 1000 kWh – R$ 0,55 e acima de 1000 kWh – R$ 0,60.                          • Industrial: Até 5000 kWh – R$ 0,55 e acima de 5000 kWh – R$ 0,60.*/


#include <stdio.h>

int main()
{
  int aux=1;
  float kwH, preco;
  char typeInstal;
  
  printf("Qual é o consumo da sua instalação em kw/h\n");
  scanf("%f", &kwH);
  
    while(aux==1){
      printf("Qual é o tipo da sua Instalação?\nR para residencial; \nI para industrial; \nC para comércio;\nS para sair;\n");
      scanf(" %c", &typeInstal);
      
      switch(typeInstal){
          
        case 'R':
            if(kwH>=500){
                preco= kwH*0.65;
            }else{
                preco = kwH *0.4;
            }
            printf("\nvalor a pagar: R$ %0.2f", preco);
            aux=0;
            break;
        case 'I':
            if(kwH>=1000){
                preco= kwH*0.6;
            }else{
                preco = kwH *0.55;
            }
            printf("\nvalor a pagar: R$ %0.2f", preco);    
            aux=0;
            break;
        case 'C':
            if(kwH>5000){
                preco= kwH*0.6;
            }else{
                preco = kwH *0.55;
            }
            printf("\nvalor a pagar: R$ %0.2f", preco);
            aux=0;
            break;
        case 'S':
            printf("\nTchau!!");
            aux=0;
            break;
        default:
            printf("\nEntrada inválida, tente novamente\n\n");
            break;
      }
    }
}
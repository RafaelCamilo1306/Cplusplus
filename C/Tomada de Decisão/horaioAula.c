/*alforimo para dizer uma saudação dependendo do hário do aluno ,
 e repetindo a pergunda se algo inválido for digitado */

#include <stdio.h>
#include <ctype.h>/*biblioteca para alterar para uppercase a variavel char*/

int main()
{
    char horario; 
    horario='S';
    while (horario=='S'){
        
        printf("Digite seu turno \nM - matutino;\nV - vespertino, \nN - noturno\n");
        scanf(" %c", &horario);
        
        horario = toupper(horario);
        
        if(horario=='M'){
            printf("\nBom Dia aluno");
            break;
        }else if(horario=='V'){

            printf("\nBoa Tarde aluno");
            break;
        }else if(horario=='N'){
            printf("\nBoa Noite aluno");
            break;
        }else{

            printf("\nHorario inválido\n \n \n");
            horario='S';
        }
    }  
}
/*programa que le a nota de um aluno e imprime a sua conceituação de acordo com a tabela: 
•	A: 90 a 100 
•	B: 80 a 89 
•	C: 70 a 79 
•	D: 60 a 69 
•	F: Abaixo de 60 
*/

#include <stdio.h>

int main()
{
    int nota;
    printf("Qual é nota do aluno? ");
    scanf("%d", &nota);
    
    if(nota>100){
        printf("nota inválida");
        return 1;
    }else if(nota>=90){
    printf("conceituação: A");
    }else if(nota>=80){
    printf("conceituação: B");
    } else if(nota>=70){
    printf("conceituação: C");
    }  else if(nota>=60){
    printf("conceituação: D");
    } else{
    printf("conceituação: F");
    } 
    
    return 0;
    
}
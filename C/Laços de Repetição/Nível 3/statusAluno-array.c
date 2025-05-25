#include <stdio.h>
#include <ctype.h>//bibloteca uppacase para o char
#include <string.h> // Para usar a função strcpy
int main()
{
  char sair, aprovacao[1000][10], nomes[1000][100];/*[1000] defini a posições e [100] tamanho da string em cada posição*/
  int nota ,count;
  printf("Digite os nomes e as notas dos alunos e veja quem ficou aprovado.....\n");
    for(int i=0; i<1000 ;i++){
        
        printf("\nNome do aluno(a):");
        scanf("%s", nomes[i]);// %s para ler a string inteira;
        
        printf("Nota:");
        scanf("%d", &nota);
        
        // Copia a string "Aprovado" ou "Reprovado" para o array aprovação;
        if(nota>7){
            strcpy(aprovacao[i],"Aprovado");
        }else{
            strcpy(aprovacao[i],"Reprovado");
        }
        
        printf("deseja continuar?[s/n]\n");
        scanf(" %c",&sair);
        
        sair = toupper(sair);
        
        if(sair=='N'){
            printf("calculando\n");
            break;
        }
          
    }
    printf("\n Nomes      |   Status  \n");
    printf("-----------------------\n");
    for(int i=0; i<1000 ; i++){
        if(nomes[i][0]!='\0' && aprovacao[i][0]!='\0'){//verifica se nas posições possui alguma informação antes de exibila
            printf(" %s:  %s\n",nomes[i], aprovacao[i] );
        }else{
            if (count>=3){
                printf("\n\n\n...mais nenhum dado inserido...\nFIM.");
                break;
            }
            count+=1;
        }
      
    }
    return 0;
}
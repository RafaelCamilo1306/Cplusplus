#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;


typedef struct nostaff Staff;

struct nostaff
{
   string nome;
   float salario;
   Staff *ant;

};

Staff *LastInclude = NULL;

void push(string nome , int salario){
    Staff *newstaff = (Staff *) malloc (sizeof(Staff));

    if(newstaff == NULL){
        cout << "Alocação não realizada!Error!" << endl;
        system("sleep 2");
        return;
    }
    newstaff->nome = nome;
    newstaff->salario = salario;
    newstaff->ant = LastInclude; /* Na primeira alocação o LastInclude que o nosso topo da lista ainda será nulo */
    LastInclude = newstaff;
}
void pop(){
    Staff *temp;
    temp = LastInclude; 
    LastInclude = temp->ant; 
    free ( temp ); 
}
void exibir(){
    Staff *temp;
    system("clear");

    if(LastInclude==NULL){

        cout<<"Nenhum Registro!!"<<endl;

        system("sleep 2");
        return;
    }
    
    temp = LastInclude;
    
    while ( temp != NULL ) {
    cout << "\n Empregado: " << temp->nome<< endl;
    cout << "\n Salário:" << temp->salario<< endl;
    temp = temp->ant;
    }
    system("sleep 2");

}

void terminator(){
    Staff *garbageBag , *trash;/*excluira a pilha ao final da excução*/

    garbageBag = LastInclude;

    while( garbageBag != NULL){
        trash = garbageBag;
        garbageBag = garbageBag->ant;

        free(trash);

    }
    
}

void CrudEmployer(){
    bool menu;
    int item, salario;
    string nome;

    while(true)
    {
        system("clear");
        cout<<("Bem vindo ao sistema de cadastro de funcionário!\n");
        cout<<("===============================================!\n\n");
        cout<<("\n1- Cadastrar");
        cout<<("\n2- Exibir Staff");
        cout<<("\n3- Excluir!!!");
        cout<<("\n4- Sair");
        cout<<("\nItem: ");
        cin >> item;
        switch (item) {
        case 1: 
                cout << "Digite o nome do funcionario:";
                cin >> nome;

                cin.ignore();

                cout << "Digite o valor do salário:";
                cin >> salario;
    
                cin.ignore();

                push (nome, salario);
                break;
        case 2: exibir();
                break;
        case 3: pop();
                break;
        case 4: terminator();
                exit(0);
                break;
        }
    } 
}


int main (){
    CrudEmployer();
}
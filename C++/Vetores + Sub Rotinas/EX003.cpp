//Create By RafaelCamilo
#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

// Variaveis globais

int linha = -1;
string nome [ 4 ]; int idade [4 ]; double salario [4];

//Declarações de funções
string lerNome();
double lerSalario();
int lerIdade();
void guardarDados ( string nom, int ida, double sal ), listar ();

//Código principal
int main(){

string nome_; int idade_; double salario_;
int tecla;

MENU:
 system("clear");
 cout << "* Menu *\n1 ler\n2 exibir\n3sair\nitem:";
 cin >> tecla;

 switch ( tecla ){
    case 1:
        nome_ = lerNome();
        idade_ = lerIdade();
        salario_= lerSalario();
        guardarDados ( nome_, idade_,salario_);
        break;
    
    case 2: 
        listar();
        break;
    
    case 3: 
        exit(0);
        break;
    }
    goto MENU;
return 0;
}


string lerNome() {

    string nome; 
    cout << "\nNome:"; 
    cin.ignore( ); // necessário para ignorar o ENTER do cin anterior 
    getline(cin, nome); 

return nome; 

}
int lerIdade() { 
    int idade; 
    cout << "\nIdade:"; 
    cin >> idade; 

return idade; 

}
double lerSalario() {

    double sal; 
    cout << "\nSalário:"; 
    cin >> sal; 

return sal; 

}

void guardarDados ( string nom, int ida, double sal ) {
    linha ++;
    nome[linha] = nom ;
    idade[linha] = ida;
    salario[linha]= sal;

}

void listar ( ) {
    for ( int i = 0; i<=linha; i++) {
        cout << "\n |     Nome       |        Idade         |     Salário         |\n" << endl;
        cout << " |     "<< nome[i] << "    -   " << idade[i] << "  -   " << salario [i] << "   2 | " << endl ;
    }
    cout << "\n\nPressione Enter para continuar...";
    cin.ignore();
    cin.get();
}
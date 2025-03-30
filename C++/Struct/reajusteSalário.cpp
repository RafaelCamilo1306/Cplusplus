#include "iostream"
#include "iomanip"
#include "math.h"
#include "cstdlib"
#include "locale.h"
#include <limits>

using namespace std;

//declaração de variaveis
int op, row=-1;
int const n=5;
bool menu = true;

struct Reajustes{
    string nome;
    double salario;
    double percentReajuste;
    float valFinal;
};

struct Reajustes  trab[n];

//declaração de funções 
void exibir(), calcularReajuste();
double ler_salario(),ler_percentReajuste();
string ler_nome();

int main(){

    // meu de opções do programa
    while(menu){
        system("clear");
        cout<<"========== PROGRAMA DE REAJUSTE============";
        cout<<"\nO Que deseja fazer?";
        cout<<"\n1-Exibir;\n2-Calcular Reajuste;\n3-Sair\n";
        cout<<"\nOpção:  ";
        cin>>op;
        switch(op){
            case 1: exibir( ); break;
            case 2: calcularReajuste(); break;
            case 3: exit ( 0 ) ; break; 

        }
    }
}

void exibir() {
    if(row>-1){
            cout << "+--------------------+------------+----------------+------------+" << endl;
            cout << "| Nome              | Salário    | % Reajuste     | Valor Final|" << endl;
            cout << "+--------------------+------------+----------------+------------+" << endl;
    
            for (int i = 0; i <= row; i++) {
                cout << "| " << left << setw(18) << trab[i].nome  // Nome com 18 caracteres
                     << "| " << right << setw(12) << fixed << setprecision(2) << trab[i].salario  // Salário com 2 casas decimais
                     << "| " << right << setw(16) << fixed << setprecision(2) << trab[i].percentReajuste  // Percentual de reajuste
                     << "| " << right << setw(12) << fixed << setprecision(2) << trab[i].valFinal << " |" << endl;  // Valor final com 2 casas decimais
            }

            cout << "+--------------------+------------+----------------+------------+" << endl;

        cout<<"\nAperte enter para continuar.....";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa qualquer caractere extra no buffer
        cin.get();
        
    }else{
        cout<<"Nenhum reajuste foi calculado\nRealize algum calculo para poder exibir";
        system("sleep 1"); 
    }
}
// função para ler nome 
string ler_nome() {
    
    string nome;
    cout<<"\nNome do trabalhador:";
    cin.ignore(); 
    getline( cin, nome);
    return nome; 
}
    // função para ler o salário
double ler_salario(){

         double salario;
         cout<<"\nSalario Mensal:"; 
         cin>>salario;
         return salario;
}
// função para ler o Percentual do Reajuste
double ler_percentReajuste(){

    double percent;
    cout<<"\nPercentual do Reajuste:"; 
    cin>>percent;
    if(percent==1){
        return 100;
    }
    else if(percent>1){
        return percent/100;
    }
    return percent;
}
 // função para guardar as informações no Struct e calcular o reajuste
void calcularReajuste ( ) { 
        row++;
        trab[row].nome  = ler_nome();
        trab[row].salario = ler_salario();
        trab[row].percentReajuste = ler_percentReajuste();
        trab[row].valFinal= trab[row].salario * (1+ trab[row].percentReajuste);
}
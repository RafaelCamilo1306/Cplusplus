#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
#include <limits>

using namespace std;

// Declaração de variáveis globais
int op, row = -1;
const int n = 4;
bool menu = true;

struct Valores {
    int A, B, C, D;
    int P; // Produto de 1° * 3°
    int S; // Soma de 2³ + 4°
};

Valores dados[n];

// Declaração de funções
void exibir(), informarValores();
int ler_inteiro(string mensagem);

int main() {
    while (menu) {
        system("clear");
        cout << "========== CALCULADORA DE PRODUTO E SOMA ============";
        cout << "\nO Que deseja fazer?";
        cout << "\n1-Informar Valores\n2-Exibir\n3-Sair\n";
        cout << "\nOpção:  ";
        cin >> op;
        
        switch (op) {
            case 1: informarValores(); break;
            case 2: exibir(); break;
            case 3: exit(0); break;
            default: cout << "Opção inválida!\n";
        }
    }
}

void exibir() {
    if (row > -1) {
        cout << "+--------+--------+--------+--------+--------+--------+" << endl;
        cout << "|   A    |   B    |   C    |   D    |   P    |   S    |" << endl;
        cout << "+--------+--------+--------+--------+--------+--------+" << endl;
        
        for (int i = 0; i <= row; i++) {
            cout << "| " << setw(6) << dados[i].A
                 << " | " << setw(6) << dados[i].B
                 << " | " << setw(6) << dados[i].C
                 << " | " << setw(6) << dados[i].D
                 << " | " << setw(6) << dados[i].P
                 << " | " << setw(6) << dados[i].S << " |" << endl;
        }
        
        cout << "+--------+--------+--------+--------+--------+--------+" << endl;
        system("sleep 6");
        cout << "\nAperte Enter para continuar.....";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    } else {
        cout << "Nenhum valor foi informado.\n";
        system("sleep 1");
    }
}

// Função para ler um valor inteiro com mensagem personalizada
int ler_inteiro(string mensagem) {
    int valor;
    cout << mensagem;
    cin >> valor;
    return valor;
}

// Função para armazenar os valores e calcular os resultados
void informarValores() {
    row++;
    if (row >= n) {
        cout << "Limite de valores atingido!" << endl;
        return;
    }
    
    dados[row].A = ler_inteiro("\nInforme o valor de A: ");
    dados[row].B = ler_inteiro("\nInforme o valor de B: ");
    dados[row].C = ler_inteiro("\nInforme o valor de C: ");
    dados[row].D = ler_inteiro("\nInforme o valor de D: ");
    
    // Calculando os resultados
    dados[row].P = dados[row].A * dados[row].C;
    dados[row].S = dados[row].B + dados[row].D;
}
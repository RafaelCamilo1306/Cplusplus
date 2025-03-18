
//
#include "iostream"
#include "math.h"
#include "cstdlib"
#include "locale.h"

using namespace std;

// Cada função representa um enunciado
// Código E00A = exercicio A e assim por diante
int E00A(), E00B(), E00C(), E00D(), E00E(), E00F(), E00G();
int exibeVetor(int vetor[], int tamanho);
bool loop = true;
char op;

int main() {
    
	setlocale ( LC_ALL, "Portuguese");
	
	while (loop) {
	    
		cout <<" ============ Menu de exercicio ========";
		cout <<"\nEscolha uma opção abaixo:";
		cout <<"\nA) multiplicação de vetor\n"; 
		cout << "\nS) Sair";
        cout << "\nOpção: ";
		cin>> op;

		switch (op) {
    		case 'B':
    		case 'b':
    			E00B();
                break;
    
            case 'S':
            case 's':
                    loop = false;  // Encerrar o loop
                    cout  << "\nSaindo...\n";
                    break;
            default:
                    cout << "\nOpção inválida!\n";
        }
    }
	return 0;
}

int exibeVetor(int vetor[], int tamanho){
    cout<<" [";
    
    for( int i=0 ; i < tamanho; i++){
        cout<<vetor[i]<<" ,";
    }
    
    cout<<"]"<< endl;
    return 0;
}

int E00A(){
    int vet[10];
    for( int i= 0; i < 10 ; i++) {
		cout<<"\r"<<i+1 <<"° valor:";
		cout.flush(); 
		cin>> vet[i];
    }
    cout<< "\n vetor: ";
    exibeVetor(vet, 10);
    cout<< "\n"<<endl;
}



int E00B() {
	int vetA[8], vetB[8];

	cout<<"\nDigite 8 valores para compor o vetor esse digitos serão multiplicado por 3\n";

	for( int i= 0; i < 8 ; i++) {
		cout<<"\r"<<i+1 <<"° valor:";
		cout.flush(); 
		cin>> vetA[i];
		vetB[i] = vetA[i] * 3;
	}
        
    cout<< "\n vetor original: ";
    exibeVetor(vetA, 8);
    
    cout<< "\n valores multiplicados: ";
    exibeVetor(vetB, 8);
    cout<< "\n"<<endl;
    return 0; 

}
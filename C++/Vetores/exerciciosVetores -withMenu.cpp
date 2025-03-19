
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
char op, verificaSaida();

int main() {
    
	setlocale ( LC_ALL, "Portuguese");
	
	while (loop) {
	    system("clear");
		cout <<" ============ Menu de exercicio ========";
		cout <<"\nEscolha uma opção abaixo:";
        cout <<"\nA) Armazena vetor\n"; 
		cout <<"\nB) multiplicação de vetor\n"; 
        cout <<"\nC) subtraição de vetores\n"; 
        cout <<"\nD) Quadrado de vetor\n"; 
        cout <<"\nE) Cocatena vetores semelhantes\n"; 
        cout <<"\nF) Cocatena vetores distintos\n"; 
        cout <<"\nG) Inverte vetor\n"; 
		cout << "\nS) Sair";
        cout << "\nOpção: ";
		cin>> op;

		switch (op) {
            case 'A':
    		case 'a':
    			E00A();
                break;
    		case 'B':
    		case 'b':
    			E00B();
                break;
            case 'c':
    		case 'C':
    			E00C();
                break;
            case 'D':
    		case 'd':
    			E00D();
                break;
            case 'E':
    		case 'e':
    			E00E();
                break;
            case 'F':
            case 'f':
                E00F();
                break;
            case 'G':
            case 'g':
                E00G();
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
        if (i == tamanho-1){
            cout<<vetor[i];
        }else{
            cout<<vetor[i]<<" ,";
        }
    }
    
    cout<<"]"<< endl;
    return 0;
}
/*Exercicio A
Ler 10 elementos de uma matriz tipo vetor e apresentá-los.*/
int E00A(){
    int vet[10];
    cout<<"\nDigite 10 valores para compor o vetor.\n";
    for( int i= 0; i < 10 ; i++) {
		cout<<"\r"<<i+1 <<"° valor:";
		cout.flush(); 
		cin>> vet[i];
    }
    cout<< "\n vetor: ";
    exibeVetor(vet, 10);
    cout<< "\n"<<endl;
    verificaSaida();
    return 0;
}

/* Exercicio B
b) Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma 
dimensão com os elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e 
assim por diante, até 8. Apresentar o vetor B. */ 

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

    verificaSaida();
    return 0; 

}
/*Exercicio C
Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada elemento de C é a subtração do elemento
correspondente de A com B. Apresentar a matriz C. */
int E00C() {
    int vetA[20], vetB[20], vetC[20];

    cout << "\nDigite 20 valores para o primeiro vetor:\n";
    for (int i = 0; i < 20; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetA[i];
    }

    cout << "\nDigite 20 valores para o segundo vetor:\n";
    for (int i = 0; i < 20; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetB[i];
        vetC[i] = vetA[i] - vetB[i];  // Soma dos vetores
    }

    cout << "\nVetor A: ";
    exibeVetor(vetA, 20);

    cout << "\nVetor B: ";
    exibeVetor(vetB, 20);

    cout << "\nSubtração dos vetores (A - B): ";
    exibeVetor(vetC, 20);

    cout << "\n" << endl;

    verificaSaida();
    return 0;
}

/* Exercicio D
Ler 15 elementos de uma matriz tipo vetor. 
Construir uma matriz B de mesmo tipo, observando as seguintes leis de formação: 
“Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. 
Apresentar as matrizes A e B. */

int E00D() {
    int vetA[15], vetB[15];

    cout << "\nDigite 15 valores para o vetor:\n";
    for (int i = 0; i < 15; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetA[i];
        vetB[i] = pow(vetA[i], 2); // Eleva ao quadrado
    }

    cout << "\nVetor A (original): ";
    exibeVetor(vetA, 15);

    cout << "\nVetor B (quadrados de A): ";
    exibeVetor(vetB, 15);

    cout << "\n" << endl;

    verificaSaida();
    return 0;
}

/* Exercicio E
Ler duas matrizes A e B do tipo vetor com 15 elementos cada. 
Construir uma matriz C, sendo esta a junção das duas outras matrizes. 
Desta forma, C deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C. */

int E00E() {
    int vetA[15], vetB[15], vetC[30];

    cout << "\nDigite 15 valores para o primeiro vetor:\n";
    for (int i = 0; i < 15; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetA[i];
        vetC[i] = vetA[i]; // Copia para C
    }

    cout << "\nDigite 15 valores para o segundo vetor:\n";
    for (int i = 0; i < 15; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetB[i];
        vetC[i + 15] = vetB[i]; // Adiciona após os elementos de A
    }

    cout << "\nVetor A: ";
    exibeVetor(vetA, 15);

    cout << "\nVetor B: ";
    exibeVetor(vetB, 15);

    cout << "\nVetor C (junção de A e B): ";
    exibeVetor(vetC, 30);

    cout << "\n" << endl;

    verificaSaida();
    return 0;
}

/* Exercicio F
Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. 
Construir uma matriz C, sendo esta a junção das duas outras matrizes. 
Desta forma, C deverá ter a capacidade de armazenar 50 elementos. Apresentar a matriz C. */

int E00F() {
    int vetA[20], vetB[30], vetC[50];

    cout << "\nDigite 20 valores para o primeiro vetor:\n";
    for (int i = 0; i < 20; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetA[i];
        vetC[i] = vetA[i]; // Copia para C
    }

    cout << "\nDigite 30 valores para o segundo vetor:\n";
    for (int i = 0; i < 30; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetB[i];
        vetC[i + 20] = vetB[i]; // Adiciona após os elementos de A
    }

    cout << "\nVetor A: ";
    exibeVetor(vetA, 20);

    cout << "\nVetor B: ";
    exibeVetor(vetB, 30);

    cout << "\nVetor C (junção de A e B): ";
    exibeVetor(vetC, 50);

    cout << "\n" << endl;
    verificaSaida();
    return 0;
}

/* Exercicio G
Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão 
com os mesmos elementos da matriz A, sendo que deverão estar invertidos. 
Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A 
passa a ser o penúltimo elemento de B e assim por diante. Apresentar as matrizes A e B lado a lado. */

int E00G() {
    int vetA[20], vetB[20];

    cout << "\nDigite 20 valores para o vetor:\n";
    for (int i = 0; i < 20; i++) {
        cout << "\r" << i + 1 << "° valor: ";
        cout.flush();
        cin >> vetA[i];
        vetB[19 - i] = vetA[i]; // Inverte a posição na cópia
    }

    cout << "\nVetor A (original): ";
    exibeVetor(vetA, 20);

    cout << "\nVetor B (invertido): ";
    exibeVetor(vetB, 20);

    cout << "\n" << endl;
    verificaSaida();
    return 0;
}

char verificaSaida(){
    char op;
    
    cout<<"\nDeseja Sair?[y] [n]";
    cin>>op;
    
    switch (op){
    case 's':
    case 'S':
    case 'y':
    case 'Y':
        loop = false;
        return 0;
        break;
    case 'n':
    case 'N':
        return 1;
    default:
        cout << "\nOpção inválida!\n";
        return 1;
    }
}
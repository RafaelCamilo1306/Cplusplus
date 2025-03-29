//Create By RafaelCamilo
#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int vet [ ] = {1, 3, 4, -1 };

float MediaVetor ( ) { 
    float soma = 0, media;
    int n = sizeof(vet)/sizeof(int);
 
    for (int i = 0; i<n; i++) { 
        soma += vet[i]; 
    }
    media = soma / n ;
    return media ;
}
int main () { 

    float vlmedia = MediaVetor();
    cout << vlmedia << endl; 

    system("pause"); 

}

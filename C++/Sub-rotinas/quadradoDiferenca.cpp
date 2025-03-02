//byRafaelCamilo

#include "stdio.h"
#include "math.h"
#include "iostream"
#include "cstdlib"

using namespace std;

int square(int a, int b );
int valA, valB, diferenca;

int main(){
    
    cout<<"========= Vamos calcular a diferença!!! ==============";
    
    cout<<"\nDigite o primeiro valor: ";
    cin>> valA;
    
    cout<<"\nDigite o segundo valor: ";
    cin>> valB;

    
    cout<<"\n=====================================================";
    cout<<"\n O quadrado da diferença de "<< valA << " por "<< valB << " é igual a "<< square(valA, valB) << endl;
    cout<<"\n=====================================================";
    
    return 0;
}



int square(int a, int b){
    int squreDifere;
    
    squreDifere = pow(a-b, 2 );
    
    return squreDifere;
    
}
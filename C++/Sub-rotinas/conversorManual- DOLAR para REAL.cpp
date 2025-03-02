//byRafaelCamilo

#include "stdio.h"
#include "math.h"
#include "iostream"
#include "cstdlib"
#include "string"

using namespace std;

float converter(float cotacao, float valReal);
int valor;
float cotacao;
string moeda;

int main(){
    
    cout<<"========= Casa de cambio!!! ==============";
    
    cout<<"\nDigite o valor: ";
    cin>> valor;
    
    cout<<"\nDigite a moeda que quer converter: ";
    cin>> moeda;
    
    cout<<"\nDigite a cotação atual: ";
    cin>> cotacao;
    
    cout<<"\n=====================================================\n";
    cout<<"R$ "<<valor<<" em "<< moeda<<" é igual a: USD "<< converter(cotacao, valor);
    cout<<"\n=====================================================";
    
    return 0;
}



float converter(float cotacao, float valReal){
    
    
    return valReal/cotacao;
    
}
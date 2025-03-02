
#include "stdio.h"
#include "math.h"
#include "iostream"
#include "cstdlib"

using namespace std;

int calVolume(int altura, int largura, int comprimento);
int alt,  larg,  compri;

int main(){
    
    cout<<"========= Vamos calcular o volume!!! ==============";
    
    cout<<"\nDigite a altura: ";
    cin>> alt;
    
    cout<<"\nDigite a largura: ";
    cin>> larg;
    
    cout<<"\nDigite o comprimento: ";
    cin>> compri;
    
    cout<<"\n=====================================================";
    cout<<"\n O volume é igual a "<< calVolume(alt, larg, compri)<< "m³"<< endl;
    cout<<"\n=====================================================";
    
    return 0;
}

int calVolume(int altura, int largura, int comprimento){
    int volume;
    
    volume = altura * (largura*comprimento);
    return volume;
    
}
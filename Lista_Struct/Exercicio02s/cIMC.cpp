#include <iostream>
#include "cIMC.h"
#include <math.h>

using namespace std;

cIMC::cIMC() {
}

cIMC::cIMC(const cIMC& orig) {
}

cIMC::~cIMC() {
}
void cIMC:: lerDados(){
    
    char opc;
    int i=0, cpfBusca=0;
    
    do{
    cout << "Digite seu nome: " << endl;
    cin>>this->vetPessoas[i].nome;
    cout << "Digite seu cpf: " << endl;
    cin>>this->vetPessoas[i].cpf;
    cout << "Digite seu sexo: " << endl;
    cin>>this->vetPessoas[i].sexo;
    cout << "Digite seu peso: " << endl;
    cin>>this->vetPessoas[i].peso;
    cout << "Digite sua altura: " << endl;
    cin>>this->vetPessoas[i].altura;
    i++;
    
    cout << "Deseja continuar? S para continuar cadastrando. " << endl;
    cin >> opc;    
    
    }while ((opc == 'S')&&(i<3));
    
    cout << "Digite um cpf para buscar: " << endl;
    cin >> cpfBusca;
    cout<< "O imc do pesquisa é:" << this->pesquisa(cpfBusca, i);
                  
}

void cIMC:: pesquisa(int cpfBusca, int i){
    
    float imc=0.0;
    for(int x=0; x<i; x++){
        if (cpfBusca == this->vetPessoas[x].cpf)
            imc = (this->vetPessoas[x].peso / pow(this->vetPessoas[x].altura, 2));
    }
    return imc;
}
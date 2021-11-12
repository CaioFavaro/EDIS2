#include <iostream>
#include "cPessoas.h"

using namespace std;

cPessoas::cPessoas() {
}

cPessoas::cPessoas(const cPessoas& orig) {
}

cPessoas::~cPessoas() {
}

void cPessoas:: lerDados(){
    
    int limite =0;
    char opc;
    
    
    do{
    cout << "Digite o nome da pessoa: " << endl;
    cin>>this->vetPessoas[limite].nome;
    cout << "Digite o cpf da pessoa: " << endl;
    cin>>this->vetPessoas[limite].cpf; 
    
    
    cout << "Deseja continuar? S para continuar cadastrando. " << endl;
    cin >> opc; 
    limite++;
    
    }while ((opc == 'S')&&(limite<3));

this->bolha(limite);
this->imprimirDados(limite);

int cpfBusca;
cout << " Digite o cpf para encontrar: " << endl;
cin >> cpfBusca;
if ((this->localizarBinario(limite, cpfBusca)) != -1)
    cout << "PESSOA ENCONTRADO" << endl;
else
    cout << "PESSOA INEXISTENTE" << endl;
   
}

void cPessoas:: localizarSequencial(int limite, int cpfBusca){
    
    for(int i=0; i<limite; i++){
        if (cpfBusca == this->vetPessoas[i].cpf)
            cout << "CPF ENCONTRADO" << endl;
    
    }
}    
 
int cPessoas:: localizarBinario(int contador, int cpfBusca){
    
    int inf, sup, meio;
    inf=0;
    sup=contador-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (cpfBusca == this->vetPessoas[meio].cpf)
            return meio;
        else if (cpfBusca < this->vetPessoas[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
        
    }
    return -1;
}

void cPessoas:: bolha (int limite){
    
    int i,j;
    int temp;
    
    for (i= limite-1; i >=1; i--){
        for(j= 0; j < i; j++){
            if (this->vetPessoas[j].cpf > this->vetPessoas[j+i].cpf){
                temp = this->vetPessoas[j].cpf;
                this->vetPessoas[j].cpf = this->vetPessoas[j+i].cpf;
                this->vetPessoas[j+i].cpf = temp;
            }
            
        }
        
    }
    
}

void cPessoas:: imprimirDados(int limite){
    
    for (int i=0; i<limite; i++)
        cout<< this->vetPessoas[i].cpf;
    
}
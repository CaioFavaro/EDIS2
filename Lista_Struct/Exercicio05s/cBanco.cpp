#include <iostream>
#include "cBanco.h"

using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco:: lerDados(){
    
    char opc;
    int limite=0;
    float depositoinicial=0.0;
    
    do{
    cout << "BEM VINDO A CRIAÇÃO DE CONTA NO BANCO" << endl;
    cout << "Digite seu nome: " << endl;
    cin >>this->vetConta[limite].name; 
    cout << "Digite seu cpf: " << endl;
    cin >>this->vetConta[limite].cpf;
    cout << "PARA ABRIR A CONTA É OBRIGATORIO UM DEPOSITO INICIAL " << endl;
    cout << "Digite o valor do deposito inicial: " << endl;
    cin >>this->vetConta[limite].depositoinicial;
    
    cout << "Deseja continuar? S para continuar cadastrando. " << endl;
    cin >> opc; 
    limite++;
        
    }while ((opc == 'S')&&(limite<3));
    
this->bolha(limite);
this->imprimirDados(limite, depositoinicial);

int cpfBusca;
cout << " Digite o cpf para encontrar: " << endl;
cin >> cpfBusca;
if ((this->localizarBinario(limite, cpfBusca)) != -1)
    cout << "PESSOA ENCONTRADO" << endl;
else
    cout << "PESSOA INEXISTENTE" << endl;
            
         
}

void cBanco:: localizarSequencial(int limite, int cpfBusca){
    
    for(int i=0; i<limite; i++){
        if (cpfBusca == this->vetConta[i].cpf)
            cout << "CPF ENCONTRADO" << endl;
            cout<< this->vetConta[limite].name; 
    
    }
}    
 
int cBanco:: localizarBinario(int contador, int cpfBusca){
    
    int inf, sup, meio;
    inf=0;
    sup=contador-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (cpfBusca == this->vetConta[meio].cpf)
            return meio;
        else if (cpfBusca < this->vetConta[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
        
    }
    return -1;
}

void cBanco:: bolha (int limite){
    
    int i,j;
    int temp;
    
    for (i= limite-1; i >=1; i--){
        for(j= 0; j < i; j++){
            if (this->vetConta[j].cpf > this->vetConta[j+i].cpf){
                temp = this->vetConta[j].cpf;
                this->vetConta[j].cpf = this->vetConta[j+i].cpf;
                this->vetConta[j+i].cpf = temp;
            }
            
        }
        
    }
    
}

void cBanco:: imprimirDados(int limite, float depositoinicial){
    
    char opc;
    float saldofinal, saque, deposito;
    
    
    for (int i=0; i<limite; i++)
        cout<< this->vetConta[i].cpf;
        cout<< this->vetConta[limite].name; 
    
    cout << "cout Digite S para para realizzar um saque e D para realizar um deposito " << endl;
    cin >> opc;
            if (opc == 'S'){
                cout << "Digite o valor para sacar " << endl;
                cin >> saque;
                saldofinal = (this->vetConta[limite].depositoinicial - saque);
                        cout <<this->vetConta[limite].name << "ficou com o saldo final de : " << saldofinal << endl;
            }
            else if (opc == 'D'){
                cout << "Digite o valor para depositar " << endl;
                cin >> deposito;
                saldofinal = (this->vetConta[limite].depositoinicial + deposito);
                        cout <<this->vetConta[limite].name << "ficou com o saldo final de : " << saldofinal << endl;
                
            }
    
}


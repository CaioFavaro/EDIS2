#include <iostream>
#include "cProdutos.h"

using namespace std;

cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos:: lerDados(){
    
    char opc;
    int limite=0;
           
    do{
        cout << "Digite nome do produto: " << endl;
        cin>>this->vetProdutos[limite].nome;
        cout << "Digite o codigo do produto: " << endl;
        cin>>this->vetProdutos[limite].codigo;
        cout << "Digite o preco do produto: " << endl;
        cin>>this->vetProdutos[limite].preco;
        cout << "-------------------------------" << endl;
        
        
  cout << "Deseja continuar? S para continuar cadastrando. " << endl;
  cin >> opc; 
  limite++;
              
    }while ((opc == 'S')&&(limite<3));
    
   

}

void cProdutos:: imprimir(int limite){
    
     for (int limite=0; limite<=2; limite++){
        cout<<"nomes registrados: " << this->vetProdutos[limite].nome << endl;
        cout<<"codigos registrados: " << this->vetProdutos[limite].codigo << endl;
        cout << "-------------------------------------------------------------" << endl;
              
    }   
int produtoBusca;     
     cout << "Digite o codigo de um produto para buscar o preco: " << endl;
     cin >> produtoBusca;
if ((this->localizarSequencial(limite, produtoBusca)))
     cout<<"precos registrados: " << this->vetProdutos[limite].preco << endl;

}

int cProdutos:: localizarSequencial(int limite, int produtoBusca){
    
 for(int i=0; i<=2; i++){
        if (produtoBusca == this->vetProdutos[limite].codigo)
            cout<<"precos registrados: " << this->vetProdutos[i].preco << endl;
        
    }

}


#include <iostream>
#include "cProduto.h"

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::lerDados(){
    
    int codigo, quantidade;
    
    cout << "TABELA DE PRECO DE PRODUTOS DIGITE O CODIGO DO PRODUTO PARA COMPRA-LO" << endl;
    cout << "O produto 1001 custa 5.32!!!" << endl;
    cout << "O produto 1324 custa 6.45!!!" << endl;
    cout << "O produto 6548 custa 2.37!!!" << endl;
    cout << "O produto 9870 custa 5.32!!!" << endl;
    cout << "O produto 7623 custa 6.45!!!" << endl << endl;
    cin >> codigo;
    
    
    cout << endl <<"Digite a quantiade do produto: " << endl;
    cin >> quantidade;
    
    cout << "O valor do produto ficou: " << this->compra(codigo, quantidade);
    
    
}

float cProduto::compra(int codigo, int quantidade){
    
    float valorf; 
    
    switch(codigo)
    {
        case 1001:
              valorf = (5.32 * quantidade); 
        break;
        case 1324:
              valorf = (6.45 * quantidade); 
        break;
        case 6548:
              valorf = (2.37 * quantidade); 
        break;
        case 9870:
              valorf = (5.32 * quantidade); 
        break;
        case 7623:
              valorf = (6.45 * quantidade); 
        break;
        
        default:
            cout << "Opção inválida!!!";
    }
                
  return valorf;  
}
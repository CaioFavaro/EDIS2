#include <iostream>
#include "cCardapio.h"

using namespace std;

cCardapio::cCardapio() {
}

cCardapio::cCardapio(const cCardapio& orig) {
}

cCardapio::~cCardapio() {
}

void cCardapio::lerDados(){
    
    int codigo, quantidade;
    
    cout << "O CARDAPIO DA LANCHEIRA É O SEGUINTE" << endl;
    cout << "Digite o codigo 100 para comprar o cachorro quente de 1.20!!!" << endl;
    cout << "Digite o codigo 101 para comprar o Bauru Simples de 1.30!!!" << endl;
    cout << "Digite o codigo 102 para comprar o Bauru com ovo de 1.50!!!" << endl;
    cout << "Digite o codigo 103 para comprar o Hambúrger de 1.20!!!" << endl;
    cout << "Digite o codigo 104 para comprar o Cheeseburger de 1.30!!!" << endl;
    cout << "Digite o codigo 105 para comprar o Refrigerante de 1.00!!!" << endl;
    cin >> codigo;
    
    cout << endl << "Digite a qauntidade do produto" << endl;
    cin >> quantidade;
    
    cout << "O valor a ser pago pelo lanche: " << this->compra(codigo, quantidade);
    
}

float cCardapio::compra(int codigo, int quantidade){
    
    float valorf;
    
    switch(codigo){
        case 100:
              valorf = (1.20 * quantidade); 
        break;
        case 101:
              valorf = (1.30 * quantidade); 
        break;
        case 102:
              valorf = (1.50 * quantidade); 
        break;
        case 103:
              valorf = (1.20 * quantidade); 
        break;
        case 104:
              valorf = (1.30 * quantidade); 
        break;
        case 105:
              valorf = (1.00 * quantidade); 
        break;
        
        default:
            cout << "Opção inválida!!!";
        
        
        
    } 
          
    
   return valorf; 
}
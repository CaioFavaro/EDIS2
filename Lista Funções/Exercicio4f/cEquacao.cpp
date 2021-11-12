#include <iostream>
#include "cEquacao.h"

using namespace std;

cEquacao::cEquacao() {
}

cEquacao::cEquacao(const cEquacao& orig) {
}

cEquacao::~cEquacao() {
}

void cEquacao::lerDados(){
    
    float a, b, c;
    
    cout << "CODIGO PARA UMA EQUACAO DE SEGUNDO GRAU" << endl;
    cout << "Digite o primeiro valor: " << endl;
    cin >> a;
    cout << "Digite o segundo valor: " << endl;
    cin >> b;
    cout << "Digite o terceiro valor: " << endl;
    cin >> c;
    
    cout << "O resultado foi: " << this->conta(a, b , c);
}

float cEquacao::conta(float a, float b, float c){
    
    float delta;
    
    delta = b*b - 4* a * c;
    
    return delta;
    
}
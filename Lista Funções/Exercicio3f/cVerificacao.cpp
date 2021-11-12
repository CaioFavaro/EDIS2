#include <iostream>
#include "cVerificacao.h"

using namespace std;

cVerificacao::cVerificacao() {
}

cVerificacao::cVerificacao(const cVerificacao& orig) {
}

cVerificacao::~cVerificacao() {
}

void cVerificacao::lerDados(){
    
    int v1;
    
    cout << "Digite um valor" << endl;
    cin >> v1;
    
    cout  << this->entrada(v1);
    
}

int cVerificacao::entrada( int v1){
    
    if (v1 >= 1)
        cout << "O valor é positivo" << endl; return 1;
    if (v1 <= -1  )
        cout << "O valor é negativo" << endl; return -1;
    if (v1 = 0) 
        cout << "O valor é zero" << endl; return 0;
  
    
    
}
#include <iostream>

#include "cAluno.h"

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){
    
    float n1, n2, n3;
    
    cout << "Digite a priemira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    cout << "Digite a terceira nota: " << endl;
    cin >> n3;
    cout << this->media( n1 , n2, n3);
    
}

float cAluno::media(float n1, float n2, float n3){
    
    float mediaf;
    
    mediaf = (n1 + n2 + n3)/3;
    
   if (mediaf >= 6)
       cout << "Aprovado" << endl;
   else
       cout << "Reprovado" << endl;
    
    return mediaf;
    
}
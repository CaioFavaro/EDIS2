#include <iostream>
#include "cAluno.h"

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDdos(){
    
    float n1 = 0.0, n2 = 0.0, n3 = 0.0;
    char tm;
    
    cout << "Digite a primeira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    cout << "Digite a terceira nota: " << endl;
    cin >> n3;
    cout << "Informe o tipo de media(A/P): " << endl;
    cin >> tm;
    cout << "A media final foi: " << this->media( n1 , n2, n3, tm);
} 


float cAluno::media(float n1, float n2, float n3, char tm){
    
    float mediaf;
    
    if (tm == 'A')
        mediaf = (n1+n2+n3)/3;
    else
         if (tm == 'P')
        mediaf = (n1*5 + n2*3 + n3*2)/10;     
    
    return mediaf;
}



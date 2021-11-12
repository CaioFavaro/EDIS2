
#include <iostream>
#include "cMenor.h"

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor::lerDados(){
    
    float n1 = 0.0, n2 = 0.0;
    
    cout << "Digite o primeiro número: " << endl;
    cin >> n1;
    cout << "Digite o segundo número: " << endl;
    cin >> n2;
    
    cout << this->conta( n1 , n2);
    
}

float cMenor::conta(float n1, float n2){
    
    float vf;

if (n1 > n2)
        cout << "O " << n2 << " foi o menor número!!!" ;
                     
else
        cout << "O " << n1 << " foi o menor número!!!";
     
return vf;      
}
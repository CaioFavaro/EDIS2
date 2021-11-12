#include <iostream>
#include "cMaior.h"

using namespace std;

cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior::lerDados(){
    
    float n1 = 0.0, n2 = 0.0 , n3 = 0.0;
    
cout << "Digite o primeiro número: " << endl;
cin >> n1;
cout << "Digite o segundo número: " << endl;
cin >> n2;
cout << "Digite o terceiro número: " << endl;
cin >> n3;

cout << this->conta( n1 , n2, n3);
    
}

float cMaior::conta(float n1, float n2, float n3){
    
float vf;

if (n1 > n2)
    if (n1>n3)
        cout << "O " << n1 << " foi o maior número!!!" ;
    else 
         cout << "O " << n3 << " foi o maior número!!!";               

else
    if (n2>n3)
        cout << "O " << n2 << " foi o maior número!!!";
    else 
        cout << "O " << n3 << " foi o maior número!!!";

   
return vf;    
}


#include <iostream>
#include "cVolume.h"

using namespace std;

cVolume::cVolume() {
}

cVolume::cVolume(const cVolume& orig) {
}

cVolume::~cVolume() {
}
void cVolume:: lerDados(){
    
   float raio;
   
   cout << "Digite o raio que sera usado para o calculo: " << endl;
   cin >> raio;
   
     cout << "O volume da esfera é: " << this->conta(raio) << "cm³" << endl;
    
}

float cVolume:: conta (float raio){
    
    float volume;
    
    volume = 4 * 3.14 * (raio * raio * raio)/3;
 
    
    return volume;
}
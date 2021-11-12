#include <iostream>
#include "cTempo.h"

using namespace std;

cTempo::cTempo() {
}

cTempo::cTempo(const cTempo& orig) {
}

cTempo::~cTempo() {
}

void cTempo::lerDados(){
    
    int anos, mes, dias;
    
    cout << "Digite quantos anos você tem: " << endl;
    cin >> anos;
    cout << "Digite quantos meses se passaram do seu ultimo aniversario: " << endl;
    cin >> mes;
    cout << "Digite quantos dias se passaram desde o ultimo mes: " << endl;
    cin >> dias;
    
    cout << "sua idade total em dias: " << this-> passagem(anos, mes, dias);
}

int cTempo::passagem(int anos, int mes, int dias){
    
    int diastotal;
    
    diastotal = (anos * 365) + (mes * 30) + dias;
    
    
 return diastotal;   
}

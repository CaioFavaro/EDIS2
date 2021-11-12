#include <iostream>
#include "cNadador.h"

using namespace std;

cNadador::cNadador() {
}

cNadador::cNadador(const cNadador& orig) {
}

cNadador::~cNadador() {
}

void cNadador::lerDados(){
    
    int idade;
    
    cout << "Digite sua idade: " << endl;
    cin >> idade;
    cout << this->classificacao(idade);
    
}

int cNadador:: classificacao(int idade){
    
if (idade >= 5 && idade <= 7)
cout << "infantil A! \n";
if (idade >= 8 && idade <= 10)
cout << "infantil B! \n";
if (idade >= 11 && idade <= 13)
cout << "juvenil A! \n";
if (idade >= 14 && idade <= 17)
cout << "juvenil B! \n";    
if (idade >= 18)
cout << "adulta! \n";    
      
return idade;
}

#include <iostream>
#include "cTriangulo.h"

using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo:: lerDados(){
    
    float x = 0.0, y = 0.0, z = 0.0;
    
    cout << "Digite o primeiro lado do triangulo: " << endl;
    cin >> x;
    cout << "Digite o segundo lado do triangulo: " << endl;
    cin >> y;
    cout << "Digite o terceiro lado do triangulo: " << endl;
    cin >> z;
    
    cout <<this->conta(x, y, z);
}

float cTriangulo:: conta(float x, float y, float z){
    
    if(x + y > z && x + z > y && y + z > x){
        cout << ("Os 3 lados formam um triangulo!") << endl;
        if(x == y && x == z)
            cout << ("Triangulo Equilatero") << endl;
        else
            if(x == y || x == z || y == z)
                cout << ("Triangulo Isosceles") << endl;
            else
                cout << ("Triangulo Escaleno") << endl;
    }
    else
        cout << ("Os 3 lados não formam um triangulo!") << endl;
    

}

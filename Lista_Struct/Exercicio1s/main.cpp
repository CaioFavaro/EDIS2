
#include <cstdlib>

#include "cMatricula.h"

using namespace std;


int main(int argc, char** argv) {
    
    cMatricula *objMatricula = new cMatricula();
    objMatricula->lerDados();
    objMatricula->imprimirDados();

    return 0;
}


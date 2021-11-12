
#include <cstdlib>

#include "cProduto.h"

using namespace std;


int main(int argc, char** argv) {
    
    cProduto *objProduto = new cProduto();
    objProduto->lerDados();

    return 0;
}


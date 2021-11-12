
#include <cstdlib>

#include "cProdutos.h"



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int limite;
    cProdutos *objProdutos = new cProdutos();
    objProdutos->lerDados();
    objProdutos->imprimir(limite);

    return 0;
}


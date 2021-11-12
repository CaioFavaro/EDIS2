//Um vendedor necessita de um algoritmo que calcule o preço total devido por um
//cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e
//calcular o preço total, usando a tabela abaixo
#ifndef CPRODUTO_H
#define CPRODUTO_H

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    void lerDados();
    float compra( int codigo, int quantidade);
    
private:

};

#endif /* CPRODUTO_H */


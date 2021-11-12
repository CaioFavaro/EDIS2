//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a
//ser pago por aquele lanche. Considere que a cada execução somente será calculado um
//item
#ifndef CCARDAPIO_H
#define CCARDAPIO_H

class cCardapio {
public:
    cCardapio();
    cCardapio(const cCardapio& orig);
    virtual ~cCardapio();
    void lerDados();
    float compra(int codigo, int quantidade);
private:

};

#endif /* CCARDAPIO_H */


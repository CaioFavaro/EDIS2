//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do
//segundo grau e retorne o valor do delta, que é dado por 'b² – 4ac'

#ifndef CEQUACAO_H
#define CEQUACAO_H

class cEquacao {
public:
    cEquacao();
    cEquacao(const cEquacao& orig);
    virtual ~cEquacao();
    void lerDados();
    float conta(float a, float b, float c);
private:

};

#endif /* CEQUACAO_H */


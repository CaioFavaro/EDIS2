//Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.

#ifndef CMAIOR_H
#define CMAIOR_H

class cMaior {
public:
    cMaior();
    cMaior(const cMaior& orig);
    virtual ~cMaior();
    void lerDados();
    float conta(float n1, float n2, float n3);
    
private:

};

#endif /* CMAIOR_H */


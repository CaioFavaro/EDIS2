//Escreva uma função que receba dois números inteiros retorne o menor número

#ifndef CMENOR_H
#define CMENOR_H

class cMenor {
public:
    cMenor();
    cMenor(const cMenor& orig);
    virtual ~cMenor();
    void lerDados();
    float conta(float n1, float n2);
    
private:

};

#endif /* CMENOR_H */


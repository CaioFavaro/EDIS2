//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
//mostre-a expressa apenas em dias
#ifndef CTEMPO_H
#define CTEMPO_H

class cTempo {
public:
    cTempo();
    cTempo(const cTempo& orig);
    virtual ~cTempo();
    void lerDados();
    int passagem(int dias, int mes, int anos);   
private:

};

#endif /* CTEMPO_H */


//Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
//seguintes categorias:
//infantil A = 5 - 7 anos 
//infantil B = 8-10 anos
//juvenil A = 11-13 anos
//juvenil B = 14-17 anos
//adulto = maiores de 18 anos

#ifndef CNADADOR_H
#define CNADADOR_H

class cNadador {
public:
    cNadador();
    cNadador(const cNadador& orig);
    virtual ~cNadador();
    void lerDados();
    int classificacao(int idade);
    
private:

};

#endif /* CNADADOR_H */


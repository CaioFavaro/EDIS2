//Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A
//função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0

#ifndef CVERIFICACAO_H
#define CVERIFICACAO_H

class cVerificacao {
public:
    cVerificacao();
    cVerificacao(const cVerificacao& orig);
    virtual ~cVerificacao();
    void lerDados();
    int entrada(int v1);

};

#endif /* CVERIFICACAO_H */


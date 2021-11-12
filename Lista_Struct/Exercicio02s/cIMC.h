

#ifndef CIMC_H
#define CIMC_H

class cIMC {
public:
    struct pessoas{
        char nome[40], sexo;
        float peso, altura;
        int cpf;       
    }vetPessoas[3];
    
    
    cIMC();
    cIMC(const cIMC& orig);
    virtual ~cIMC();
    void lerDados();
    float pesquisa(int cpfBusca, int i);
    
private:

};

#endif /* CIMC_H */


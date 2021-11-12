
#ifndef CMATRICULA_H
#define CMATRICULA_H

class cMatricula {
public:
    
    struct aluno{
        char nome[40];
       long int matricula;
        float n1, n2;
    }DadosAlunos[3];
          
    cMatricula();
    cMatricula(const cMatricula& orig);
    virtual ~cMatricula();
    void lerDados();
    void imprimirDados();
    
private:

};

#endif /* CMATRICULA_H */


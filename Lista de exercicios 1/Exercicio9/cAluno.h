//Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média,
//uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem
//"reprovado", caso contrário. 
#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void lerDados();
    float media(float n1, float n2, float n3);
    
private:

};

#endif /* CALUNO_H */


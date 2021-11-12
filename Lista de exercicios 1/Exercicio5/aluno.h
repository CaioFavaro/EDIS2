//Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
//Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 
#ifndef ALUNO_H
#define ALUNO_H

class aluno {
public:
    aluno();
    aluno(const aluno& orig);
    virtual ~aluno();
     void lerDdos();
     float media(float n1, float n2, float n3, char tm);
    
private:

};

#endif /* ALUNO_H */


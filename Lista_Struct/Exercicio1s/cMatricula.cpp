#include <iostream>
#include "cMatricula.h"

using namespace std;

cMatricula::cMatricula() {
}

cMatricula::cMatricula(const cMatricula& orig) {
}

cMatricula::~cMatricula() {
}

void cMatricula:: lerDados(){
    
    for (int i=0; i<=2; i++){
        cout << "Digite nome do aluno: " << endl;
        cin>>this->DadosAlunos[i].nome;
        cout << "Digite a matricula do aluno: " << endl;
        cin>>this->DadosAlunos[i].matricula;
        cout << "Digite a primeira nota do aluno: " << endl;
        cin>>this->DadosAlunos[i].n1;
        cout << "Digite a segunda nota do aluno: " << endl;
        cin>>this->DadosAlunos[i].n2;
        cout << "-------------------------------------" << endl;
        
        
    }       
}

void cMatricula:: imprimirDados(){
    
    for (int i=0; i<=2; i++){
        cout<<"nome aluno: " << this->DadosAlunos[i].nome << endl;
        cout<<"Sua matricula" << this->DadosAlunos[i].matricula << endl;
        cout<<"Sua media final: " <<(this->DadosAlunos[i].n1+this->DadosAlunos[i].n2)/2 << endl;
              
    }        
}
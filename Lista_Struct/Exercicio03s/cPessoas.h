/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoas.h
 * Author: caio
 *
 * Created on 12 de outubro de 2021, 12:44
 */

#ifndef CPESSOAS_H
#define CPESSOAS_H

class cPessoas {
public:
    struct cadastro{
        char nome[40];
        int cpf;
    }vetPessoas[3];
    
    
    cPessoas();
    cPessoas(const cPessoas& orig);
    virtual ~cPessoas();
    void lerDados();
    void localizarSequencial(int limite, int cpfaux);
    int localizarBinario(int contador, int cpfaux);
    void bolha (int limite);
    void imprimirDados(int limite);
    
    
private:

};

#endif /* CPESSOAS_H */


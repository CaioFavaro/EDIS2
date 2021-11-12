/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBanco.h
 * Author: caio
 *
 * Created on 13 de outubro de 2021, 15:03
 */

#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    struct conta{
        char name[40];
        int cpf;
        float depositoinicial;
        
    }vetConta[3];
    
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    void lerDados();
    void localizarSequencial(int limite, int cpfaux);
    int localizarBinario(int contador, int cpfaux);
    void bolha (int limite);
    void imprimirDados(int limite, float depositoinicial);
private:

};

#endif /* CBANCO_H */


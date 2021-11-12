/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cProdutos.h
 * Author: caio
 *
 * Created on 12 de outubro de 2021, 16:48
 */

#ifndef CPRODUTOS_H
#define CPRODUTOS_H

class cProdutos {
public:
    struct produtos{
        char nome[40];
        long int codigo;
        float preco;              
    }vetProdutos[3];
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    void lerDados();
    int localizarSequencial(int limite, int produtoaux);
    void imprimir (int limite);
private:

};

#endif /* CPRODUTOS_H */


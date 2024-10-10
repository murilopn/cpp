#include <stdio.h>
#include "universidade.h"
#pragma once
class Pessoa {
private:
    int diaP, mesP, anoP, idadeP;
    char nomeP[30];

    //ASSOCIANDO COM A UNIVERSIDADE (atenção na utilização do ponteiro):
    Universidade* pUniv_afilhado;
    Departamento* pDept_afilhado;

public:
    Pessoa(int dia_input, int mes_input, int ano_input,const char nome[]);
    Pessoa(); 
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    int get_idade();
    void printa_idade();
    void inicializa(int dia_input, int mes_input, int ano_input,const char nome[]);


    // Este método abaixo permite associar uma Univ. à Pessoa.
    void setUnivFiliado (Universidade* pu, Departamento* pd);
    void OndeTrabalho();

};
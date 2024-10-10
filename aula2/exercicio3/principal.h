#include "pessoa.h"
#include "universidade.h"
#pragma once
class Principal{
private:
    Pessoa Simao;
    Pessoa Einstein;
    Pessoa Newton;

    int diaAtual;
    int mesAtual;
    int anoAtual;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;
    
public:
    Principal();
    void Executar();
};
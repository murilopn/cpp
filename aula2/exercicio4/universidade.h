#pragma once
#include "departamento.h"

class Universidade{
private:
    char  nome[30];
    Departamento *pdept_afilhado;   

public:
    Universidade( const char nomeP[]="");//construtuora já inicializada (então não precisa de uma construtora vazia)
    ~Universidade(); //destrutora
    void setNome( const char nomeP[]="");
    char* getNome(); //atenção no ponteiro
};
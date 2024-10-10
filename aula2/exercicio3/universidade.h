#pragma once

class Universidade{
private:
    char  nome[30];
public:
    Universidade( const char nomeP[]="");//construtuora já inicializada (então não precisa de uma construtora vazia)
    ~Universidade(); //destrutora
    void setNome( const char nomeP[]="");
    char* getNome(); //atenção no ponteiro
};
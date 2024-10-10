#include <stdio.h>
#pragma once
class Departamento {
private:
    char dept[30];



public:
    Departamento(const char dept_input[]="");
    ~ Departamento();
    void setNome( const char dept_input[]="");
    char* getNome(); 
};


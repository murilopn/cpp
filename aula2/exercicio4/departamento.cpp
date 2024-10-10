#include "departamento.h"
#include <string.h>

Departamento::Departamento(const char dept_input[]){
     strcpy(dept,dept_input);
}


Departamento::~Departamento(){}

void Departamento::setNome( const char dept_input[]){
    strcpy(dept,dept_input);
}



char* Departamento::getNome(){
    return dept;
}
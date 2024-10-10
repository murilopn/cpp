#include "universidade.h"
#include <string.h>
Universidade :: Universidade (const char n[]){
    strcpy(nome,n);
}
Universidade :: ~Universidade(){}

void Universidade :: setNome(const char n[]){ // o nome vai chegar lá da pessoa.cpp
    strcpy(nome,n);

}
char* Universidade :: getNome(){
    return nome;
}
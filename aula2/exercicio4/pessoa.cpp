#include "pessoa.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


Pessoa::Pessoa(int dia_input, int mes_input, int ano_input, const char nome[])
{
    inicializa(dia_input,mes_input,ano_input,nome);  
}

Pessoa::Pessoa(){ //vai ser chamada antes da de cima, pois é construtora vazia (por padrão é assim)
    inicializa(0,0,0,"");
}
void Pessoa::inicializa(int dia_input, int mes_input, int ano_input,const char nome[]){
    diaP = dia_input;
    mesP = mes_input;
    anoP = ano_input;
    idadeP=0;
    strcpy(nomeP, nome);
   
}



void Pessoa::calc_idade(int dia_atual, int mes_atual, int ano_atual){
    idadeP = ano_atual - anoP;
    if (mesP > mes_atual){
        idadeP = idadeP - 1;
    }

    else{
        if (mesP == mes_atual)
        {
            if (diaP < dia_atual){
                idadeP = idadeP - 1;
            }
        }
    }
    printa_idade();
}

int Pessoa::get_idade(){
    return idadeP;
}

void Pessoa::printa_idade(){
    cout<<"A idade da Pessoa "<<nomeP<<" seria "<<get_idade()<<" anos\n"<<endl;
}

void Pessoa::setUnivFiliado (Universidade* pu,Departamento* pd){
    pUniv_afilhado=pu; //o ponteiro da univ vai ser o ponteiro lá da principal.cpp
    pDept_afilhado=pd;
    OndeTrabalho();
}
void Pessoa::OndeTrabalho(){
    cout<<"\n"<< nomeP <<" trabalha na " << pUniv_afilhado->getNome() << " mais especificamente no departamento: " <<
    pDept_afilhado->getNome()<<"\n"<<endl;
}
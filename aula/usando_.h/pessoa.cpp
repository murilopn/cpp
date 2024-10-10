#include "pessoa.h"

Pessoa::Pessoa (int dia_recebido, int mes_recebido, int ano_recebido){
      dia = dia_recebido;
      mes = mes_recebido;
      ano = ano_recebido;
      idade = -1;
}

void Pessoa::calc_idade(int dia_atual, int mes_atual, int ano_atual){
    idade = ano_atual - ano;
}
int Pessoa::get_idade(){
    return idade;
}

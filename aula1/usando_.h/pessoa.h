//COLOCANDO A CLASSE AQUI
#pragma once 
#include <stdio.h>
class Pessoa{
private:
    int idade;
    int mes;
    int ano;
    int dia;
    
public:
    Pessoa (int dia_recebido, int mes_recebido, int ano_recebido);
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    int get_idade();
};
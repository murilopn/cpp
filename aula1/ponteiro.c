//PASSANDO A IDADE POR REFERÊNCIA, OU SEJA, COM PONTEIROS
#include <stdio.h>
struct Pessoa{
    int idade;
    int mes;
    int ano;
    int dia;

};
//Atenção para a declaração da struct - AQUI ela vai ser ponteiro, mas não precisar ser na main não
int calc_idade(struct Pessoa *p, int dia_atual, int mes_atual,int ano_atual ){ 
    int idd = ano_atual - p->ano;

    if (mes_atual< p->mes){
        idd-=1;
    }
    else if(mes_atual==p->mes){
        if(dia_atual < p->dia){
            idd-=1;
        }
    }
    p->idade=idd; 
}

int main (){
    struct Pessoa einstein, newton;
    einstein.ano= 1879;
    einstein.dia= 14;
    einstein.mes= 3;
    newton.ano= 1643;
    newton.dia= 1;
    newton.mes=4;

    calc_idade(&einstein,2,10,2024); //LEMBRAR do "&", porque na calc_idade estou usando um ponteiro p struct 
    calc_idade(&newton,2,10,2024);

    printf("Idade do Einstein:%d\nIdade do Newtown:%d", einstein.idade,newton.idade);
    return 0;
}
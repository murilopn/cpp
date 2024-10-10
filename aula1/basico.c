/*ATENÇÃO:
Se eu só chamasse sem atribuir, assim: calc_idade(einstein,2,10,2024) e na função fizesse p.idade=idd, DARIA ERRADO.
PASSAR VALOR POR REFERÊNCIA EM C É SÓ COM PONTEIRO!!!!!!!
*/
#include <stdio.h>
struct Pessoa{
    int idade;
    int mes;
    int ano;
    int dia;

};

int calc_idade(struct Pessoa p, int dia_atual, int mes_atual,int ano_atual ){
    int idd = ano_atual - p.ano;

    if (mes_atual< p.mes){
        idd-=1;
    }
    else if(mes_atual==p.mes){
        if(dia_atual < p.dia){
            idd-=1;
        }
    }
    return idd; 
}

int main (){
    struct Pessoa einstein, newton;
    einstein.ano= 1879;
    einstein.dia= 14;
    einstein.mes= 3;
    newton.ano= 1643;
    newton.dia= 1;
    newton.mes=4;

    einstein.idade=calc_idade(einstein,2,10,2024);
    newton.idade= calc_idade(newton,2,10,2024);

    printf("Idade do Einstein:%d\nIdade do Newtown:%d", einstein.idade,newton.idade);
    return 0;
}
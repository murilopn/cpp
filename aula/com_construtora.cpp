#include<stdio.h>

struct Pessoa {
public:
    int dia;
    int mes;
    int ano;
    int idade;

    Pessoa (int dia_recebido, int mes_recebido, int ano_recebido){
        dia = dia_recebido;
        mes = mes_recebido;
        ano = ano_recebido;
        idade = -1;
    }

void calc_idade(int dia_atual, int mes_atual, int ano_atual){
    idade = ano_atual - ano;
    /*A lógica é a mesma. Só é legal perceber a extensão do closeure do meu método, como eu estou usando um método (uma função dentro da classe), eu posso usar a variável
      da mesma forma que ela está na Struct. Eu não preciso usar .idade, ou ->idade, nada disso.
    */
}
};


int main(){
    Pessoa einstein(14,3,1879);
    Pessoa newton(4,1,1643);

    einstein.calc_idade(2,10,2024);
    newton.calc_idade(2,10,2024);

    printf("Idade do Einstein: %d\nIdade do Newton: %d",einstein.idade,newton.idade);
    

    return 0;
}
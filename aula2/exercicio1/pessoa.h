/*Criar uma classe Principal, onde cada objeto que venha existir no sistema (Objetos da Classe
Pessoa) sejam criados ou instanciados.*/
class Pessoa {
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];



public://declaração dos métodos:
    Pessoa(int dia_input, int mes_input, int ano_input,const char nome[]);//construtora
    Pessoa(); // CONSTRUTORA VAZIA
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    int get_idade();//como meus atributos são privados, eu não consigo dar Pessoa.dia na main, por ex
    void printa_idade();
    void inicializa(int dia_input, int mes_input, int ano_input,const char nome[]);
};


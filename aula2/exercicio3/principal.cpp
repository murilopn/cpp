#include "principal.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//#include "pessoa.h" já está em "principal.h"
Principal::Principal(){ //construtora vai ser chamada antes da executar, como padrão
    Simao.inicializa(3,10,1976, "Jean Simão");
    Einstein.inicializa(14,3,1879,"Albert Einstein");
    Newton.inicializa(4,1,1643,"Isaac Newton");
    cout<<"Informe o dia/mes/ano"<<endl ;
    cin>>diaAtual>>mesAtual>>anoAtual;

    UTFPR.setNome("UTFPR"); //meu objeto da universidade.
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");
    Simao.setUnivFiliado(&UTFPR); //passando como argumento o ponteiro para o objeto criado. 
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);
}
void Principal:: Executar(){
    Simao.calc_idade (diaAtual,mesAtual,anoAtual);
    Einstein.calc_idade (diaAtual,mesAtual,anoAtual);
    Newton.calc_idade (diaAtual,mesAtual,anoAtual);
}

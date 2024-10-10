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

    /*Se eu quiser ler com barra, devo fazer o cin separado e usar cin.ignore. No problema isso não ia alterar nada.
        cin>>diaAtual;
        cin.ignore(1, '/');
        cin>>mesAtual;
        cin.ignore(1, '/')
        cin>>anoAtual;
        cin.ignore(1, '/')

        O 1 do ignore é referente a quantidade de coisas a serem ignorados quando achar a barra. Elé é 1 porque vai
        ignorar somente a barra.    
    */
}
void Principal:: Executar(){
    Simao.calc_idade (diaAtual,mesAtual,anoAtual);
    Einstein.calc_idade (diaAtual,mesAtual,anoAtual);
    Newton.calc_idade (diaAtual,mesAtual,anoAtual);
}

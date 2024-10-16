#include "stdfax.h"
#include "SistemaSolar.h"
SistemaSolar :: SistemaSolar(){

        cout<<"oi"<<endl;
        jupiter.setTempoOrbita(300);
        sol.setTempoExistencia(300000);
        jupiter.setSol(&sol);
        executar();
} 
SistemaSolar :: ~SistemaSolar(){
    cout<<"tchau"<<endl;
} 

void SistemaSolar :: executar(){
    float q_jupiter = jupiter.calc_QuantOrbitas();
    cout<< "A quantidade de órbitas de júpiter é: "<<q_jupiter<<endl;
    cout<< " Número astronômico de Sol: "<<sol.getNA()<<endl;
}

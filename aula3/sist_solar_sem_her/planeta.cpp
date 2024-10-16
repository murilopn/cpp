#include "stdfax.h"
#include "planeta.h"


Planeta :: Planeta(){
    tempo_orbita=0;
    pSol= nullptr;
    NA=0;
}
Planeta :: ~Planeta(){}

float Planeta :: calc_QuantOrbitas(){
    float resultado=0.0;
    if (nullptr!=pSol){
        int tempo_sol = pSol->getTempoExistencia();
        resultado = (float)tempo_sol/tempo_orbita;
    }
    else{
        cout<<"Ponteiro do sol está nulo!"<<endl;
        resultado=-1;
    }
    return resultado;
}


void Planeta :: setTempoOrbita(int to){
    tempo_orbita=to;
}
int Planeta :: getTempoOrbita(){
    return tempo_orbita;
}
void Planeta :: setSol(Estrela* ps){
    pSol=ps;
}
void Planeta :: setNa(int na){
    NA=na;
}
int Planeta:: getNa(){
    return NA;
}


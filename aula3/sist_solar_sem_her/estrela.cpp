#include "stdfax.h"
#include "estrela.h"
#include "planeta.h"

Estrela :: Estrela(){
    cout<<"I'm shinning"<<endl;
    tempo_existencia=0;
    pPlaneta=nullptr;
}
Estrela :: ~Estrela(){}

int Estrela :: getTempoExistencia(){
    return tempo_existencia;
}
void Estrela :: setTempoExistencia(int te){
    tempo_existencia=te;
}
 int Estrela :: getNA(){
    return NA;
 }
 void Estrela:: setNA(int na){
    NA=na;
 }
#pragma once
class Planeta;
class Estrela{
private:
    int tempo_existencia;
    Planeta* pPlaneta;
    int NA;

public:
Estrela();
~Estrela();
int getTempoExistencia();
void setTempoExistencia(int te);
void setNA(int na);
int getNA();

};
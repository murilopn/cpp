#pragma once
#include "astro.h"
class Planeta;
class Estrela: public Astro{
private:
    int tempo_existencia;
    Planeta* pPlaneta;

public:
Estrela();
~Estrela();
int getTempoExistencia();
void setTempoExistencia(int te);

};
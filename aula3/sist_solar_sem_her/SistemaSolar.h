#pragma once
#include "planeta.h"
#include "estrela.h"

class SistemaSolar{
private:
    Estrela sol;
    Planeta jupiter;
public:

SistemaSolar();
~SistemaSolar();
void executar();
};
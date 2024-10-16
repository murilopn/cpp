#include "estrela.h"
class Planeta {
private:
    int tempo_orbita;
    Estrela* pSol;
    int NA;
public:
    Planeta();
    ~Planeta();
    float calc_QuantOrbitas();
    void setTempoOrbita(int to);
    int getTempoOrbita();
    void setSol(Estrela* ps);
    void setNa(int na);
    int getNa();

};
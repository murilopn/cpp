#include "estrela.h"
class Planeta {
private:
    int tempo_orbita;
    Estrela* pSol;
public:
    Planeta();
    ~Planeta();
    float calc_QuantOrbitas();
    void setTempoOrbita(int to);
    void setSol(Estrela* ps);

};
#pragma once
//posso inicializar aqui mesmo.
class Astro{
protected:
    int NA;
public:
    Astro(){NA=0;};
    ~Astro(){};
    void setNA(int na){NA=na; }
    int getNA(){return NA; }
};
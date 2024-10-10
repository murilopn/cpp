#include "pessoa.h"

int main (){
    Pessoa einstein(14,3,1879), newtown(4,1,1643);

    einstein.calc_idade(2,10,2024);
    newtown.calc_idade(2,10,2024);

    printf("A idade do einstein é: %d\n", einstein.get_idade());
    printf("A idade do newton é: %d\n", newtown.get_idade());
    

    return 0;
}
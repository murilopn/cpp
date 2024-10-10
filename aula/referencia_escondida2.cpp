#include <stdio.h>

void alteraNum(int& num,int valor){
    num=valor;
}
int main(){
    int n=10;
    int &ref=n;
    alteraNum(n,2);
    printf("valor de n: %d\n",n);
    ref=12;
    printf("Alterar ref altera n: %d\n",n);



    return 0;
}
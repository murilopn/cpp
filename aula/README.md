Nessa aula 1 o professor Simão nos apresentou um novo paradigma (uma nova forma de pensar): Programação Orientada a Objetos.


Os arquivos .c e .cpp são formas distintas, de se fazer o mesmo código. A intenção do professor era comparar as linguagens. Um ponto importante é que em C só podemos passar valores por referência através de ponteiros! Em c++ é possível fazer isso de outras formas.

Além de ponteiros e variáveis normais, em C++ há um noto tipo de variável simples, chamada de REFERÊNCIAS (é um pseudônimo para a variável, uma vez que vai apontar para o mesmo endereço de memória)

Ela é utilizada, quase que exclusivamente, para facilitar a execução de funções, sejam como parâmetros (referência escondida) ou como retorno (encadeamento de chamadas).


Referência escondida:
Em C só conseguimos passar valores por referência a partir de ponteiros. Em C++, além dos ponteiros, também conseguimos passar por referência escondida. Um detalhe é que ela é escondida, ou seja, em determinado momento, por não estar explícita, o valor pode sofrer transformações as quais não são desejadas. Ela é escondida, pois na hora da chamada da função na main, eu passo o valor normalmente e na hora de declarar a função eu preciso do "&". Por conta disso, muitos programadores preferem permanecer utilizando ponteiros, pois o efeito é o mesmo e ele é mais explícito.


Vale ressaltar que C++ possui tudo que o C possui + POO, ou seja, posso dar copiar e colar qualquer arquivo do c e rodar no c++ que irá funcionar.
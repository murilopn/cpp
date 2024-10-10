Nesse exercício ele quis que associassemos a classse Pessoa com a classe Universidade. Em resumo, cada objeto da classe
Pessoa poderá ser associada a um objeto da classe Universidade!

Como pode-se perceber, para se associar, devo usar ponteiro. Por isso no meio da classe pessoa tem um ponteiro para a 
classe Univerisdade.

#pragma once - Ele evita a importação repetitiva de bibliotecas e/ou arquivos.h. Ele é utilizado apenas nos arquivos .h e é extremamente útil. Em versões mais antigas, pode-se ver um comando equivalente:
#ifndef
#def<nome do arquivo.h>.
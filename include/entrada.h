/*
Header para a entrada de dados do programa
*/

#ifndef ENTRADA_H //include guards para evitar inclusão múltipla do módulo ENTRADA
#define ENTRADA_H

#include "structs.h"

    extern float valorDisponivel; //'extern float' é usado para acessar a variável que já foi criada em entrada.c, evitando criar uma cópia da mesma  
    float lerValorPositivo(char mensagem[]);
    void lerTodasAsContas(Conta contas[], int tamanho);
    int lerVencimento(char mensagem[]);
    void lerTodosVencimentos(Conta contas[], int tamanho);

#endif
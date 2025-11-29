/*
Header para o processamento de dados do programa
*/

#ifndef PROCESSAMENTO_H //include guards para evitar inclusão múltipla do módulo PROCESSAMENTO
#define PROCESSAMENTO_H

#include "structs.h"

    float calcularTotal(Conta contas[], int tamanho);
    float calcularDiferenca(float total, float disponivel);
    void ordenarPorVencimento(Conta contas[], int tamanho);

#endif
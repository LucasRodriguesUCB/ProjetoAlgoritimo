/*
Header para a exibição (interface) do programa, que declara as funções da exibição.
*/

#ifndef EXIBICAO_H // include guards para evitar inclusão múltipla do módulo EXIBICAO
#define EXIBICAO_H

#include "structs.h"

void mostrarCabecalho();
void mostrarResumo(float total, float disponivel, float diferenca);
void mostrarRanking(Conta contas[], int tamanho);
void mostrarMensagemFinal();

#endif
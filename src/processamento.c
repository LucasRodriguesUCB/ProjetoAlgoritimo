/* 
modularização do processamento de dados do programa, calculos aritméticos de soma das contas a pagar, 
diferença entre valor disponível pra pagamento - valor total a ser pago e 
ordenação por data mais próxima do vencimento
*/

#include <stdio.h>
#include "processamento.h"
#include "structs.h"


/* processamento dos valores obtidos de valores a serem pagos. Aqui faremos a soma dessas contas, e 
também a conta de subtração entre o valor disponível para pagamento e o valor total das contas somado, 
para definir se o saldo será suficiente para a quitação */

    float calcularTotal(Conta contas[], int tamanho) {
    float soma = 0;

        for (int i = 0; i < tamanho; i++){
            soma += contas[i].valor;
        }

        return soma;
    }


    float calcularDiferenca(float total, float disponivel) {
    return disponivel - total;
    
    }

    void ordenarPorVencimento(Conta contas[], int tamanho) {

/* Ordenação das contas por seu vencimento utilizando bubble sort */
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (contas[j].vencimento > contas[j + 1].vencimento) {

                Conta temp = contas[j];
                contas[j] = contas[j + 1];
                contas[j + 1] = temp;

            }
        }
    }
    }

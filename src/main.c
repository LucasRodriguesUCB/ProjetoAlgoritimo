/* 
 Projeto: Organizador de Contas
 Autor: Clara Rodrigues Dias, Lucas Alves Rodrigues
 Descrição: estrutura da função principal do programa de organização de contas. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entrada.h" // chama o header da entrada de dados
#include "processamento.h" // chama o header do processamento dos dados coletados
#include "exibicao.h" // header da exibição da saída dos dados finais para o usuário
#include "structs.h" // header da struct conta, que coleta os dados: dia do vencimento, valor e nome da conta.

 extern float valorDisponivel; //'extern float' é usado para acessar a variável que já foi criada em entrada.c, evitando criar uma cópia da mesma

int main(void) {

/* Declaração do array com as contas fixas que serão inseridas pelo o usuário  */
    Conta contas[5] = { {"Agua", 0, 0}, {"Energia", 0, 0}, {"Gas", 0, 0}, {"Internet", 0, 0}, {"Mercado", 0, 0}};

    mostrarCabecalho();

    lerTodasAsContas(contas, 5);

    lerTodosVencimentos(contas, 5);

    float valorTotal = calcularTotal(contas, 5);
    float diferenca = calcularDiferenca(valorTotal, valorDisponivel);

    mostrarResumo(valorTotal, valorDisponivel, diferenca);

    ordenarPorVencimento(contas, 5);

    mostrarRanking(contas, 5);

    mostrarMensagemFinal();

    return 0;
}
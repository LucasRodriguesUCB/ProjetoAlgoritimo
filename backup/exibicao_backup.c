/* 
modularização da interface do programa, responsável pela apresentação e 
exibição final dos resultados para o usuário 
*/

#include <stdio.h>
#include "exibicao.h"
#include "structs.h"

/* apresentacao do programa e sua funcionalidade */
void mostrarCabecalho() {
    puts("");
    printf("======================= ORGANIZADOR DE CONTAS (ODC) =========================\n");
    puts("");
    printf("Ola! Bem vindo ao ODC, programa que auxilia na organizacao de contas fixas\n");
    printf("a vencer, por prioridade de pagamento e mostrando o risco de saldo insuficiente.\n");

    }


/* Resumo final e sequência das informações mostradas ao usuário */
void mostrarResumo(float total, float disponivel, float diferenca){
    puts("");
    printf("======================= RESULTADO OBTIDO =========================\n");
    printf("\nCom base nas informacoes inseridas pelo senhor(a), temos: \n");
    printf("\nValor total a ser pago: %.2f reais \n", total);
    printf("Valor disponivel para pagamento: %.2f reais\n", disponivel);
    
   
/* Mensagem de défict ou superávit do valor a pagar x valor diponível */
    if (diferenca >=0) 
        printf("\n- Boas noticias! Vai sobrar %.2f reais apos pagar as contas.\n", diferenca);
    else 
    printf("\n- Atencao! Falta ainda %.2f reais para pagar todas as contas.\n", -diferenca);

    }

/* Resultado do ranking para o usuário */
void mostrarRanking(Conta contas[], int tamanho) {
    printf("\n=== CONTAS EM ORDEM DE VENCIMENTO ===\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d: %s, dia %d - (R$ %.2f)\n", i + 1, contas[i].nome, contas[i].vencimento, contas[i].valor);
        }
    }
/* mensagem final de agradecimento */
void mostrarMensagemFinal() {
    printf("\n================ Fim do resumo. Ate breve! ======================\n");
    printf("================= Programa encerrado! :) ========================\n");
    }


    

/* 
 Projeto: Organizador de Contas
 Autor: Clara Rodrigues Dias, Lucas Alves Rodrigues
 Data de criação: 12/11/2025
 Descrição: Estrutura do programa de organização de contas fixas a serem pagas, ranking das mais próximas do vencimento
 e diferença entre saldo disponível e total de contas a serem pagas.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 


    int main(void) {

/* declaração de variáveis: float para valores em reais, int para valores inteiros de dia de vencimentos, char com ponteiro para definição
dos nomes das contas do int vencimentos*/
    float valorAgua, valorEnergia, valorGas, valorInternet, valorMercado, valorDisponivel, valorTotal, diferenca;
    int vencimentos[5];
    char *nomesContas[5] = {"Agua", "Energia", "Gas", "Internet", "Mercado"};

/* apresentacao do programa ao usuário e sua funcionalidade */
    printf("=============================================================================\n");
    printf("======================= ORGANIZADOR DE CONTAS (ODC) =========================\n");
    printf("=============================================================================\n");
    printf("Ola! Bem vindo ao ODC, programa que auxilia na organizacao de contas fixas\na vencer, por prioridade de pagamento e mostrando o risco de saldo insuficiente.\n");

/* Entrada de dados dos valores das contas. Aqui o usuário vai inserir os valores a pagar
e também o valor disponível que tem para quitação dessas contas */
    printf("\nPor favor, digite abaixo o valor de cada conta a pagar (exemplo: Valor conta de agua: 0000.00)\n");
    printf("\nValor da conta de agua: ");
    scanf("%f", &valorAgua);
        while (valorAgua < 0) // utilização de while para evitar que entrada inválida de número negativo
        {
            printf("\nValor invalido! Digite um numero positivo para a agua: ");
            scanf("%f", &valorAgua);
        }
    printf("Valor da conta de energia: ");
    scanf("%f", &valorEnergia);
        while (valorEnergia < 0)
        {
            printf("\nValor invalido! Digite um numero positivo para a energia: ");
            scanf("%f", &valorEnergia);
        }
    printf("Valor da conta de Gas: ");
    scanf("%f", &valorGas);
        while (valorGas < 0)
        {
            printf("\nValor invalido! Digite um numero positivo para o gas: ");
            scanf("%f", &valorGas);
        }
    printf("Valor da conta de Internet: ");
    scanf("%f", &valorInternet);
        while (valorInternet < 0)
        {
            printf("\nValor invalido! Digite um numero positivo para a internet: ");
            scanf("%f", &valorInternet);
        }
    printf("Valor da conta do Mercado: ");
    scanf("%f", &valorMercado);
        while (valorMercado < 0)
        {
            printf("\nValor invalido! Digite um numero positivo para o mercado: ");
            scanf("%f", &valorMercado);
        }
    printf("\nDigite o valor disponivel para pagamento: ");
    scanf("%f", &valorDisponivel);
        while (valorDisponivel < 0)
        {
            printf("\nValor invalido! Digite um numero positivo para pagamento: ");
            scanf("%f", &valorDisponivel);
        }

/* Entrada de dados das datas de vencimento das contas. Aqui o usuário indicará os dias de vencimento de cada conta
para processarmos o ranking de vencimento da mais próxima a mais distante, em ordem crescente */

    printf("\nAgora, por favor, digite abaixo somente o dia (numero inteiro de 1 a 31) do vencimento de cada conta.\n");

    printf("\nVencimento da conta de agua: "); 
    scanf("%d", &vencimentos[0]);
        while (vencimentos[0] < 1 || vencimentos[0] > 31) // utilização de while para evitar que entrada inválida de número fora do intervalo
        {
            printf("Vencimento invalido! Digite um valor de 1 a 31: ");
            scanf("%d", &vencimentos[0]);
        }
    printf("Vencimento da conta de energia: "); 
    scanf("%d", &vencimentos[1]);
        while (vencimentos[1] < 1 || vencimentos[1] >31)
        {
            printf("Vencimento invalido! Digite um valor de 1 a 31: ");
            scanf("%d", &vencimentos[1]);
        }
    printf("Vencimento da conta de gas: "); 
    scanf("%d", &vencimentos[2]);
        while (vencimentos[2] < 1 || vencimentos[2] >31)
        {
            printf("Vencimento invalido! Digite um valor de 1 a 31: ");
            scanf("%d", &vencimentos[2]);
        }

    printf("Vencimento da conta de internet: "); 
    scanf("%d", &vencimentos[3]);
        while (vencimentos[3] < 1 || vencimentos[3] >31)
        {
            printf("Vencimento invalido! Digite um valor de 1 a 31: ");
            scanf("%d", &vencimentos[3]);
        }

    printf("Vencimento da conta do mercado: "); 
    scanf("%d", &vencimentos[4]);
        while (vencimentos[4] < 1 || vencimentos[4] >31)
        {
            printf("Vencimento invalido! Digite um valor de 1 a 31: ");
            scanf("%d", &vencimentos[4]);
        }
        
/* processamento dos valores obtidos dos valores a serem pagos. Aqui faremos a soma dessas contas, e 
temos aqui também a conta de subtração entre o valor disponível para pagamento e o valor total das contas somado, 
para definir se o saldo será suficiente para a quitação */

    valorTotal = valorAgua + valorEnergia + valorGas + valorInternet + valorMercado;

    diferenca = valorDisponivel - valorTotal; 

/* Resultados que aparecerão ao usuário e processamento dos dados apresentados */
    printf("\n==================================================================\n");
    printf("======================= RESULTADO OBTIDO =========================\n");
    printf("==================================================================\n");
    printf("\nCom base nas informacoes inseridas pelo senhor(a), temos: \n");
    printf("\nValor total a ser pago: %.2f reais \n", valorTotal);
    printf("Valor disponivel para pagamento: %.2f reais\n", valorDisponivel);
   
/* utilização de If else para verificar se o saldo disponível é maior ou menor que a soma de todas as contas e 
mensagem apresentada ao usuário a depender da situação */
    if (diferenca >=0) 
        printf("\n- Boas noticias! Vai sobrar %.2f reais apos pagar as contas.\n", diferenca);
    else 
    printf("\n- Atencao! Falta ainda %.2f reais para pagar todas as contas.\n", -diferenca);


/* Ordenação por vencimento das contas utilizando bubble sort */ 
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (vencimentos[j] > vencimentos[j + 1]) {
                int tempDia = vencimentos[j];
                vencimentos[j] = vencimentos[j + 1];
                vencimentos[j + 1] = tempDia;

                char *tempNome = nomesContas[j];
                nomesContas[j] = nomesContas[j + 1];
                nomesContas[j + 1] = tempNome;
            }
        }
    }

/* Resultado apresentado ao usuário do ranking para o usuário com utilização de for */
    printf("\nContas mais proximas do vencimento:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %s, dia %d\n", i + 1, nomesContas[i], vencimentos[i]);
    }

/* mensagem final de agradecimento ao finalizar o resumo apresentado */
    printf("\n================ Fim do resumo. Ate breve! ======================\n");
    printf("================= Programa encerrado! :) ========================\n");

    return 0;
}
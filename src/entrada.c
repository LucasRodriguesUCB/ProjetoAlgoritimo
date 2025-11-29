/* 
modularização da entrada e validação de dados do programa, 
coleta de valores a pagar, valor disponível para pagamento e dia de vencimento de cada conta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entrada.h"



/*string para verificação de valor inserido para o usuário, 
para evitar bug por caractere inválido, sugerindo o usuário a inserir o valor novamente*/

    float valorDisponivel = 0;  // declaração da variável global inicializada com valor 0, assim o programa irá reservá-la de forma única na memória 
    float lerValorCerto(char mensagem[]){
    float valor;
    char extra;
    char buffer[100];


        while (1) { // utilização de while para caso o usuário digite um caractere ou número não permitido para a variável valor da conta
            printf("%s", mensagem);
            scanf("%s", buffer);

            if (sscanf(buffer, "%f%c", &valor, &extra) == 1 && valor >= 0){ //limita os valores apenas a números e posivitos.
                
                return valor;
            }
            
            printf("Valor invalido! Digite apenas numeros positivos\n");
            printf("%s", mensagem);
        }
    }

    int lerDataCerta(char mensagem[]) {
    int valor;
    char extra;
    char buffer [100];

        while (1) { // utilização de while para caso o usuário digite um caractere ou número não permitido para a variável data
            printf("%s", mensagem);
            scanf("%s", buffer);

            if (sscanf(buffer, "%d%c", &valor, &extra) == 1 && valor >= 1 && valor <= 31){ // limita os valores entre 1 e 31
                
                return valor;
            }
            
            printf("Valor invalido! Digite apenas um numero de 1 a 31.\n");
            printf("%s", mensagem);
        }


    }

    float lerValorPositivo(char mensagem[]) {
        return lerValorCerto(mensagem);
    }

    int lerVencimento(char mensagem[]) {
        return lerDataCerta(mensagem);
    }


/* Entrada de dados dos valores das contas. Aqui o usuário vai inserir os valores a serem somados para pagar
e também o valor que tem para quitação das contas */
    void lerTodasAsContas(Conta contas[], int tamanho) {

        printf("\nPor favor, digite abaixo o valor de cada conta a pagar (Exemplo - Valor conta de agua: 0000.00).\n");
        puts("");

        for (int i = 0; i < tamanho; i++) {
            printf("Valor da conta de %s: ", contas[i].nome);
            contas[i].valor = lerValorPositivo("");
        }
        
    }   
        

/* Entrada de dados das datas de vencimento das contas. Aqui o usuário indicará os dias de vencimento de cada conta
para processarmos o ranking de vencimento da mais próxima a mais distante, em ordem crescente */
    void lerTodosVencimentos(Conta contas[], int tamanho) {

        printf("\nAgora, digite abaixo somente o dia (de 1 a 31) do vencimento de cada conta.\n");
        puts("");

        for (int i = 0; i < tamanho; i++){
            printf("Vencimento da conta de %s: ", contas[i].nome);
            contas[i].vencimento = lerVencimento("");
            
        }
        puts("");

        printf("\nPor ultimo, digite o valor disponivel para pagamento: ");
        valorDisponivel = lerValorPositivo("");
        
        puts("");

    }
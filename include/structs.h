/*
Header para a definição da struct utilizada no programa
A struct conta irá pegar os dados repetidos das diferentes contas fixas, sendo estes: 
Conta:
- nome
- Valor a pagar
- Dia do vencimento
*/

#ifndef STRUCTS_H 
#define STRUCTS_H

    typedef struct {
        char nome[20];
        float valor;
        int vencimento;
    } Conta;

#endif


# PROJETO: ORGANIZADOR DE CONTAS (ODC)

## OBJETIVO: 
 O objetivo do sistema Organizador de contas é auxiliar pessoas a realizar a somatória de suas contas fixas mensais a serem pagas, mostrar a diferença entre o saldo disponível para a quitação dessas contas ao final da soma destas, e mostrar qual conta necessita de prioridade pois está mais próxima do seu vencimento, através de uma listagem em ordem crescente dos dias de vencimento. 

## FUNCIONALIDADES PRINCIPAIS: 
 1. Calculadora de valores a serem pagos; 
 2. diferença de déficit ou superativ entre valores; 
 3. Listagem da conta mais próxima à mais distante de data do vencimento. 
 4. Ordem das contas com dia do vencimento e valor, para prioridade e urgência de pagamento.

## CONTEUDOS EM C UTILIZADOS:
 1. Modularização
 2. Structs
 3. Vetores
 4. Arrays
 5. Laços (While, for)
 6. Bubble sort
 7. Calculos aritméticos
 8. Funções
 9. If else
 10. String
 11. Variaveis

## INTRUÇÕES DE COMPILAÇÃO E EXECUÇÃO:
A compilação do programa será feita somente pelo terminal, seguindo os seguintes comandos: 

- opção 1: Na pasta do projeto, em qualquer campo vazio clique com o botão direito do mouse, escolha a opção "Abrir no terminal" e insira: 
gcc -Wall -std=c99 src/*.c -I include -o bin/projeto 
clique enter.
em seguida, digite: .\bin\projeto.exe 
clique enter.

- opção 2: Abra o terminal do seu computador (prompt de comando) através do menu iniciar, digite: cd e o link completo da pasta do projeto, e clique enter. 
Após, digite: gcc -Wall -std=c99 src/*.c -I include -o bin/projeto 
clique enter.
em seguida, digite: .\bin\projeto.exe 
clique enter.


## ETRUTURA DAS PASTAS: 
projeto_ODC/
├── src/
│   ├── main.c
│   ├── entrada.c
│   ├── processamento.c
│   ├── entrada.c
│   └── exibicao.c
├── include/
│   ├── entrada.h
│   ├── processamento.h
│   ├── struct.h
│   └── exibicao.h
├── docs/
│   ├── README.md
│   ├── pseudocodigo.docx
│   ├── requisitos.docx
│   ├── registro_de_testes.docx
│   ├── analise_refatoracao.txt
│   ├── definicao_structs.txt
│   ├── estrutura_modulos.txt
│   ├── definicao_headers.txt
│   └── relatorio_final.txt
├── bin/
├── backup/
└── .gitignore

## AUTORES: 
 Clara Rodrigues Dias e Lucas Alves Rodrigues

## CONSIDERAÇÕES FINAIS: 
 Projeto desenvolvido durante a sequência de aulas da disciplina "Algoritmos e Programação Estruturada", ministrada pela docente Mestra Jessica Sousa Oliveira, na Universidade Católica de Brasília, durante o segundo semestre de 2025. 


## Link do repositório: 
https://github.com/LucasRodriguesUCB/Projeto_ODC.git
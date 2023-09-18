#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"
#include "vendas.h"

//MODULO PRODUTOS
void moduloprodutos(void) {
    char opcao;
    do {
        opcao = menuprodutos();
        switch(opcao) {
            case '1': 	cadastrarprodutos();
                        break;
            case '2': 	editarprodutos();
                        break;
            case '3': 	excluirprodutos();
                        break;
            case '4': 	listarprodutos();
                        break;
            case '5': 	pesquisarprodutos();
                        break;
        } 		
    } while (opcao != '0');
}

char menuprodutos (void){
    char op;
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- MENU PRODUTOS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");  
    printf("||                                                  ||\n");
    printf("|| (1) - CADASTRAR PRODUTO                          ||\n");
    printf("|| (2) - EDITAR PRODUTO                             ||\n");
    printf("|| (3) - EXCLUIR PRODUTO                            ||\n");
    printf("|| (4) - LISTAR PRODUTOS                            ||\n");
    printf("|| (5) - PESQUISAR PRODUTO                          ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void cadastrarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR PRODUTO --------------- ||\n");
    printf("|| -------------------------------------------------||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| MARCA:                                           ||\n");
    printf("|| DESCRICAO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void editarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EDITAR PRODUTO ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| MARCA:                                           ||\n");
    printf("|| DESCRICAO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void excluirprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EXCLUIR PRODUTO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void pesquisarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR PRODUTO --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void listarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR PRODUTOS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| PRODUTOS CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}
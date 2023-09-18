#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

//MODULO VENDAS
void modulovendas(void) {
    char opcao;
    do {
        opcao = menuvendas();
        switch(opcao) {
            case '1': 	cadastrarvendas();
                        break;
            case '2': 	editarvendas();
                        break;
            case '3': 	excluirvendas();
                        break;
            case '4': 	listarvendas();
                        break;
            case '5': 	pesquisarvendas();
                        break;
        } 		
    } while (opcao != '0');
}

char menuvendas (void){ 
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ----------------- MENU VENDAS ------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - CADASTRAR VENDA                            ||\n");
    printf("|| (2) - EDITAR VENDA                               ||\n");
    printf("|| (3) - EXCLUIR VENDA                              ||\n");
    printf("|| (4) - LISTAR VENDAS                              ||\n");
    printf("|| (5) - PESQUISAR VENDA                            ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void cadastrarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n"); //chave ser gerada automaticamente ou ser data+hora
    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    printf("|| CODIGO DO PRODUTO:                               ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void editarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR VENDA ------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    printf("|| CODIGO DO PRODUTO:                               ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void excluirvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EXCLUIR VENDA ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void pesquisarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar(); 
}

void listarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- LISTAR VENDAS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| VENDAS CADASTRADAS:                              ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

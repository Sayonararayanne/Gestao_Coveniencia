#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"
#include "util.h"

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
    char cod[11];
    char nome[100];
    char marca[50];
    char desc[100];
    char quant[10];
    char tip[50];
    char valor[10];
    int dia;
    int mes;
    int ano;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR PRODUTO --------------- ||\n");
    printf("|| -------------------------------------------------||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n");
    scanf("%s", cod);
    if (validaCodBarras(cod)){
        printf("||                 CÓD VÁLIDO                       ||\n");
    }else{
        printf("||                 CÓD INVÁLIDO                     ||\n");
    }
    printf("\n");
    printf("|| NOME:                                            ||\n");
    scanf("%s", nome);
    if (validaNome(nome)){
        printf("||                 NOME VÁLIDO                      ||\n");
    }else{
        printf("||                 NOME INVÁLIDO                    ||\n");
    }
    printf("\n");
    printf("|| MARCA:                                           ||\n");
    scanf("%s", marca);
    if (validaNome(marca)){
        printf("||                 MARCA VÁLIDA                     ||\n");
    }else{
        printf("||                 MARCA INVÁLIDA                   ||\n");
    }
    printf("\n");
    printf("|| DESCRICAO:                                       ||\n");
    scanf("%s", desc);
    printf("\n");
    printf("|| QUANTIDADE:                                      ||\n");
    scanf("%s", quant);
    printf("\n");
    printf("|| TIPO:                                            ||\n");
    scanf("%s", tip);
    if (validaNome(tip)){
        printf("||                 TIPO VÁLIDO                      ||\n");
    }else{
        printf("||                 TIPO INVÁLIDO                    ||\n");
    }
    printf("|| VALOR:                                           ||\n");
    scanf("%s", valor);
    printf("\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("|| Dia:                                             ||\n");
    scanf("%d", &dia);
    printf("|| Mês (em número):                                 ||\n");
    scanf("%d", &mes);
    printf("|| Ano:                                             ||\n");
    scanf("%d", &ano);
    if (validaData(dia, mes, ano)){
        printf("||               DATA VÁLIDA                        ||\n");
    }else{
        printf("||              DATA INVÁLIDA                       ||\n");
    }
    printf("\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void editarprodutos (void){
    char cod[11];
    char nome[100];
    char marca[50];
    char desc[100];
    char tip[50];
    char valor[10];
    int dia;
    int mes;
    int ano;

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
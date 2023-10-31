#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"
#include "util.h"

//MODULO CLIENTES
int moduloclientes(void) {
    Clientes* cli;
    int opcao;
    opcao = menuclientes();
        while (opcao !=0) {
            switch(opcao) {
            case '1': 	cli = cadastrarclientes();
                        gravaclientes(cli);
                        free(cli);
                        break;
            case '2': 	editarclientes();
                        break;
            case '3': 	cli = pesquisarclientes();
                        excluirclientes(cli);
                        free(cli);
                        break;
            case '4': 	listarclientes();
                        break;
            case '5': 	cli = pesquisarclientes();
                        exibeclientes(cli);
                        free(cli);
                        break;		
    } opcao = menuclientes();
}
return 0;
}

char menuclientes (void){
    char op;
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- MENU CLIENTES ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - CADASTRAR CLIENTE                          ||\n");
    printf("|| (2) - EDITAR CLIENTE                             ||\n");
    printf("|| (3) - EXCLUIR CLIENTE                            ||\n");
    printf("|| (4) - LISTAR CLIENTES                            ||\n");
    printf("|| (5) - PESQUISAR CLIENTE                          ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

Clientes* cadastrarclientes (void){
    Clientes* c;
    c = (Clientes*) malloc(sizeof(Clientes));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR CLIENTES -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF (11 digitos sem espaço nem pontuação):       ||\n");
    scanf(" %11[^\n]", c->cpf);
    while(!validaCPF(c->cpf)) {
      printf("CPF inválido!\n");
      printf("Informe um novo CPF: ");
      scanf(" %11[^\n]", c->cpf);
      getchar();
    }

    printf("|| NOME:                                            ||\n");
    scanf(" %100[^\n]", c->nome);
    while(!validaNome(c->nome)) {
      printf("Nome inválido!\n");
      printf("Informe um novo Nome: ");
      scanf(" %100[^\n]", c->nome);
      getchar();
    }

    printf("|| TELEFONE (DD + xxxxxxxxx):                        ||\n");
    scanf(" %12[^\n]", c->tel);
    while(!validaTelefone(c->tel)) {
      printf("Telefone inválido!\n");
      printf("Informe um novo Telefone: ");
      scanf(" %12[^\n]", c->tel);
      getchar();
    }

    printf("|| DATA DE NASCIMENTO (xx/xx/xxxx):                 ||\n");
    scanf(" %8[^\n]", c->data);
    getchar();
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    c->status = 'a';
    return c;
}

void gravaclientes(Clientes* c) {
    FILE* fp;
    fp = fopen("clientes.dat", "ab");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    fwrite(c, sizeof(Clientes), 1, fp);
    fclose(fp);
}

void editarclientes (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR CLIENTES --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CPF DO CLIENTE:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| TELEFONE:                                        ||\n");
    printf("|| DATA DE NASCIMENTO:                              ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void excluirclientes (Clientes* cliLido){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EXCLUIR CLIENTES --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO CLIENTE QUE DESEJA EXCLUIR:               ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

Clientes* pesquisarclientes (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR CLIENTES -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
}

void listarclientes (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    FILE* fp;
    Clientes* c;
    printf("|| CLIENTES CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
    c = (Clientes*) malloc(sizeof(Clientes));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    while(fread(c, sizeof(Clientes), 1, fp)) {
        if (c->status != 'x') {
        exibeclientes(c);
        getchar();
        }
    }
    fclose(fp);
    free(c);
}

void exibeclientes(Clientes* c) {
    char situacao[20];
    if ((c == NULL) || (c->status == 'x')) {
        printf("CLIENTE INEXISTENTE");
    }else {
        printf("CLIENTES CADASTRADOS: \n");
        printf("CPF: %s\n", c->cpf);
        printf("Nome do cliente: %s\n", c->nome);
        printf("Telefone: %s\n", c->tel);
        printf("Data de nascimento: %s\n", c->data);
        if (c->status == 'a') {
            strcpy(situacao, "Ativo");
        }else if (c->status == 'd') {
            strcpy(situacao, "desativado");
        }else {
            strcpy(situacao, "Não informada");
        }
        printf("Situação do cliente: %s\n", situacao);
    }
}
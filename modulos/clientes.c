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
            case '3': 	excluirclientes();
                        break;
            case '4': 	cli = pesquisarclientes();
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
    printf("|| (4) - PESQUISAR CLIENTE                          ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
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
    scanf(" %10[^\n]", c->data);
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
  FILE* fp;
  Clientes* c = (Clientes*) malloc(sizeof(Clientes));
  char cpf[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR CLIENTES --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CPF DO CLIENTE:                        ||\n");
    scanf(" %11[^\n]", c->cpf);
    getchar();
    fp = fopen("clientes.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(c, sizeof(Clientes), 1, fp) == 1) {
        if(strcmp(c->cpf, cpf) == 0) {
          printf("\n");
          printf("|| Cliente Encontrado!                              ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||             CADASTRE OS NOVOS DADOS:             ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||                                                  ||\n");
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
          scanf(" %10[^\n]", c->data);
          getchar();
          fseek(fp, -sizeof(Clientes), SEEK_CUR);
          fwrite(c, sizeof(Clientes), 1, fp);
          achou = 1;
          break;
        }
    }
}
    if (!achou) {
        printf("\n");
        printf("CPF não encontrado!\n");
    } else {
        printf("\n");
        printf("Cliente atualizado com sucesso!\n");
    }
  getchar();
  fclose(fp);
}

void excluirclientes (void){
  FILE* fp;
  Clientes* c = (Clientes*) malloc(sizeof(Clientes));
  char cpf[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EXCLUIR CLIENTES --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO CLIENTE QUE DESEJA EXCLUIR:               ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", c->cpf);
    getchar();
    fp = fopen("clientes.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(c, sizeof(Clientes), 1, fp) == 1) {
        if(strcmp(c->cpf, cpf) == 0) {
          c->status = 'd';
          fseek(fp, -sizeof(Clientes), SEEK_CUR);
          fwrite(c, sizeof(Clientes), 1, fp);
          achou = 1;
          break;
        }
      }
    }
    if (!achou) {
        printf("\n");
        printf("CPF não encontrado!\n");
    } else {
        printf("\n");
        printf("Cliente excluído com sucesso!\n");
    }
  getchar();
  fclose(fp);
}

Clientes* pesquisarclientes(void){
  FILE* fp;
  Clientes* c;
  char cpf[12];
  
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CPF DO CLIENTE:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cpf);
    getchar();
    c = (Clientes*) malloc(sizeof(Clientes));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        getchar();
    } else {
        while(!feof(fp)) {
            fread(c, sizeof(Clientes), 1, fp);
            if((strcmp(c->cpf, cpf) == 0) && (c->status != 'x')) {
            exibeclientes(c);
            getchar();
            fclose(fp);
            return c;
        }
    }
}
fclose(fp);
return NULL;
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
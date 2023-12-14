#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "produtos.h"
#include "util.h"

//MODULO PRODUTOS
int moduloprodutos(void) {
    Produtos* pro;
    char opcao;
    opcao = menuprodutos();
        do {
            switch(opcao) {
                case '1':   pro = cadastrarprodutos();
                            gravaprodutos(pro);
                            free(pro);
                            break;
                case '2': 	editarprodutos();
                            break;
                case '3': 	excluirprodutos();
                            break;
                case '4': 	pro = pesquisarprodutos();
                            exibeprodutos(pro);
                            free(pro);
                            break;
    } 		
} while (opcao != '0');
return 0;
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
    printf("|| (4) - PESQUISAR PRODUTO                          ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

Produtos* cadastrarprodutos (void){
    Produtos* p;
    p = (Produtos*) malloc(sizeof(Produtos));
    
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR PRODUTO --------------- ||\n");
    printf("|| -------------------------------------------------||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n");
    scanf(" %13[^\n]", p->cod);
    while(!validaCodBarras(p->cod)) {
      printf("Código inválido!\n");
      printf("Informe um novo Código: ");
      scanf(" %11[^\n]", p->cod);
      getchar();
    }

    printf("|| NOME:                                            ||\n");
    scanf(" %100[^\n]", p->nome);
    while(!validaNome(p->nome)) {
      printf("Nome inválido!\n");
      printf("Informe um novo Nome: ");
      scanf(" %100[^\n]", p->nome);
      getchar();
    }

    printf("|| MARCA:                                           ||\n");
    scanf(" %50[^\n]", p->marca);
    while(!validaNome(p->marca)) {
      printf("Marca inválido!\n");
      printf("Informe uma nova marca: ");
      scanf(" %50[^\n]", p->marca);
      getchar();
    }

    printf("|| DESCRIÇÃO:                                       ||\n");
    scanf(" %100[^\n]", p->desc);

    printf("|| QUANTIDADE:                                      ||\n");
    scanf(" %10[^\n]", p->quant);

    printf("|| TIPO:                                            ||\n");
    scanf(" %50[^\n]", p->tip);
    while(!validaNome(p->tip)) {
      printf("Marca inválido!\n");
      printf("Informe uma nova marca: ");
      scanf(" %50[^\n]", p->tip);
      getchar();
    }

    printf("|| VALOR:                                           ||\n");
    scanf(" %10[^\n]", p->valor);
    getchar();
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    p->status = 'a';
    return p;
}

void gravaprodutos(Produtos* p) {
    FILE* fp;
    fp = fopen("produtos.dat", "ab");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    fwrite(p, sizeof(Produtos), 1, fp);
    fclose(fp);
}

void editarprodutos (void){
  FILE* fp;
  Produtos* p = (Produtos*) malloc(sizeof(Produtos));
  char cod[12];
  int achou = 0;
  
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EDITAR PRODUTO ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    scanf(" %11[^\n]", cod);
    getchar();
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(p, sizeof(Produtos), 1, fp) == 1) {
        if(strcmp(p->cod, cod) == 0) {
          printf("\n");
          printf("|| Produto Encontrado!                              ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||             CADASTRE OS NOVOS DADOS:             ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("|| CODIGO:                                          ||\n");
          scanf(" %11[^\n]", p->cod);
            while(!validaCodBarras(p->cod)) {
            printf("Código inválido!\n");
            printf("Informe um novo Código: ");
            scanf(" %11[^\n]", p->cod);
            getchar();
            }

          printf("|| NOME:                                            ||\n");
          scanf(" %100[^\n]", p->nome);
            while(!validaNome(p->nome)) {
            printf("Nome inválido!\n");
            printf("Informe um novo Nome: ");
            scanf(" %100[^\n]", p->nome);
            getchar();
            }

          printf("|| MARCA:                                           ||\n");
          scanf(" %50[^\n]", p->marca);
            while(!validaNome(p->marca)) {
            printf("Marca inválido!\n");
            printf("Informe uma nova marca: ");
            scanf(" %50[^\n]", p->marca);
            getchar();
            }

          printf("|| DESCRIÇÃO:                                       ||\n");
          scanf(" %100[^\n]", p->desc);

          printf("|| QUANTIDADE:                                      ||\n");
          scanf(" %10[^\n]", p->quant);

          printf("|| TIPO:                                            ||\n");
          scanf(" %50[^\n]", p->tip);
            while(!validaNome(p->tip)) {
            printf("Marca inválido!\n");
            printf("Informe uma nova marca: ");
            scanf(" %50[^\n]", p->tip);
            getchar();
            }

          printf("|| VALOR:                                           ||\n");
          scanf(" %10[^\n]", p->valor);
            getchar(); 
            fseek(fp, -sizeof(Produtos), SEEK_CUR);
            fwrite(p, sizeof(Produtos), 1, fp);
            achou = 1;
            break;
        }
    }
}
    if (!achou) {
        printf("\n");
        printf("Código não encontrado!\n");
    } else {
        printf("\n");
        printf("Produto atualizado com sucesso!\n");
    }
  getchar();
  fclose(fp);
}   
    

void excluirprodutos (void){
  FILE* fp;
  Produtos* p = (Produtos*) malloc(sizeof(Produtos));
  char cod[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EXCLUIR PRODUTO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cod);
    getchar();
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(p, sizeof(Produtos), 1, fp) == 1) {
        if(strcmp(p->cod, cod) == 0) {
          p->status = 'd';
          fseek(fp, -sizeof(Produtos), SEEK_CUR);
          fwrite(p, sizeof(Produtos), 1, fp);
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


Produtos* pesquisarprodutos(void){
  FILE* fp;
  Produtos* p;
  p = (Produtos*) malloc(sizeof(Produtos));
  char cod[12];

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cod);
    getchar();
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        getchar();
    } else {
        while(!feof(fp)) {
            fread(p, sizeof(Produtos), 1, fp);
            if((strcmp(p->cod, cod) == 0) && (p->status != 'x')) {
            exibeprodutos(p);
            getchar();
            fclose(fp);
            return p;
        }
    }
}
fclose(fp);
return NULL;
}

void exibeprodutos(Produtos* p) {
    char situacao[20];
    if ((p == NULL) || (p->status == 'x')) {
        printf("PRODUTO INEXISTENTE");
    }else {
        printf("PRODUTOS CADASTRADOS: \n");
        printf("Código: %s\n", p->cod);
        printf("Nome do produto: %s\n", p->nome);
        printf("Marca: %s\n", p->marca);
        printf("Descrição do produto: %s\n", p->desc);
        printf("Quantidade: %s\n", p->quant);
        printf("Tipo: %s\n", p->tip);
        printf("Valor individual: %s\n", p->valor);
        if (p->status == 'a') {
            strcpy(situacao, "Em estoque");
        }else if (p->status == 'd') {
            strcpy(situacao, "Sem estoque");
        }else {
            strcpy(situacao, "Não informada");
        }
        printf("Situação do funcionário: %s\n", situacao);
    }
}
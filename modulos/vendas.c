#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vendas.h"
#include "util.h"
#include "clientes.h"

//MODULO VENDAS
int modulovendas(void) {
    Vendas* ven;
    int opcao;
    opcao = menuvendas();
        while (opcao !=0) {
            switch(opcao) {
                case '1': 	ven = cadastrarvendas();
                            gravavendas(ven);
                            free(ven);
                            break;
                case '2': 	editarvendas();
                            break;
                case '3': 	excluirvendas();
                            break;
                case '4': 	ven = pesquisarvendas();
                            exibevendas(ven);
                            free(ven);
                            break;
    } opcao = menuvendas(); 		
} 
return 0;
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
    printf("|| (4) - PESQUISAR VENDA                            ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

Vendas* cadastrarvendas (void){ //função baseada no slide da Semana 11
    Vendas* v;
    char* nome_cli;
    v = (Vendas*) malloc(sizeof(Vendas));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n"); //Na venda fazer um laço de repetição para 
    printf("||                                                  ||\n"); //na hora da compra poder comprar mais de um produto
    printf("|| CODIGO:                                          ||\n"); //diferente por vez. Ex: pedir código e quantidade até se encerrarem os vendas.
    scanf(" %11[^\n]", v->cod);

    printf("|| CPF DO CLIENTE:                              ||\n");
    scanf(" %12[^\n]", v->codcli);
    nome_cli = get_cliente(v->codcli);
    getchar();
    
    printf("|| DESCRIÇÃO DO CLIENTE:\n",nome_cli);

    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    scanf(" %11[^\n]", v->codven);

    printf("|| CODIGO DO PRODUTO:                               ||\n"); //função para verificar se o produto existe
    scanf(" %13[^\n]", v->codprod);
    while(!validaCodBarras(v->codprod)) {
      printf("Código inválido!\n");
      printf("Informe um novo Código: ");
      scanf(" %11[^\n]", v->codprod);
      getchar();
    }

    printf("|| QUANTIDADE:                                      ||\n");
    scanf(" %11[^\n]", v->quant);

    printf("|| VALOR DA UNIDADE:                                           ||\n");
    scanf(" %11[^\n]", v->valor);
    getchar();
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    return v;
}

void gravavendas(Vendas* v) {
    FILE* fp;
    fp = fopen("vendas.dat", "ab");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    fwrite(v, sizeof(Vendas), 1, fp);
    fclose(fp);
}


void editarvendas (void){
  FILE* fp;
  Vendas* v = (Vendas*) malloc(sizeof(Vendas));
  char cod[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR VENDA ------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    scanf(" %11[^\n]", v->cod);
    getchar();
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(v, sizeof(Vendas), 1, fp) == 1) {
        if(strcmp(v->cod, cod) == 0) {
          printf("\n");
          printf("|| Venda Encontrada!                                ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||             CADASTRE OS NOVOS DADOS:             ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||                                                  ||\n");
          printf("|| CODIGO DO VENDEDOR:                              ||\n");
          scanf(" %11[^\n]", v->codven);

          printf("|| CODIGO DO PRODUTO:                               ||\n");
          scanf(" %13[^\n]", v->codprod);
            while(!validaCodBarras(v->codprod)) {
            printf("Código inválido!\n");
            printf("Informe um novo Código: ");
            scanf(" %11[^\n]", v->codprod);
            getchar();
        }

          printf("|| QUANTIDADE:                                      ||\n");
          scanf(" %11[^\n]", v->quant);

          printf("|| VALOR:                                           ||\n");
          scanf(" %11[^\n]", v->valor);
          getchar();
          fseek(fp, -sizeof(Vendas), SEEK_CUR);
          fwrite(v, sizeof(Vendas), 1, fp);
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
        printf("Venda atualizada com sucesso!\n");
    }
  getchar();
  fclose(fp);
}

void excluirvendas (void){ 
  FILE* fp;
  Vendas* v = (Vendas*) malloc(sizeof(Vendas));
  char cod[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EXCLUIR VENDA ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cod);
    getchar();
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(v, sizeof(Vendas), 1, fp) == 1) { //função baseada na de @maricaico
        if(strcmp(v->cod, cod) == 0) {
          v->status = 'd';
          fseek(fp, -sizeof(Vendas), SEEK_CUR);
          fwrite(v, sizeof(Vendas), 1, fp);
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
        printf("Venda excluída com sucesso!\n");
    }
  getchar();
  fclose(fp);
}

Vendas* pesquisarvendas(void){
  FILE* fp;
  Vendas* v;
  v = (Vendas*) malloc(sizeof(Vendas));
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
    fp = fopen("Vendas.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        getchar();
    } else {
        while(!feof(fp)) {
            fread(v, sizeof(Vendas), 1, fp);
            if((strcmp(v->cod, cod) == 0) && (v->status != 'x')) {
            exibevendas(v);
            getchar();
            fclose(fp);
            return v;
        }
    }
}
fclose(fp);
return NULL;
}

void exibevendas(Vendas* v) { //função baseada no slide da Semana 11
    if ((v == NULL) || (v->status == 'x')) {
        printf("VENDA INEXISTENTE");
    }else {
        printf("VENDAS CADASTRADOS: \n");
        printf("Código: %s\n", v->cod);
        printf("Código do vendedor: %s\n", v->codven);
        printf("Código do produto: %s\n", v->codprod);
        printf("Quantidade: %s\n", v->quant);
        printf("Valor: %s\n", v->valor);
    }
}


//Clientes* get_cliente(char cpf[12]){
//FILE *fp;
//Clientes *c;
//fp = fopen("clientes.dat", "rb");
   //if (fp == NULL) {
        //printf("Ops! Erro na abertura do arquivo!\n");
        //printf("Não é possível continuar...\n");
        //getchar();
   //}else{
      //while(fread(c, sizeof(Clientes), 1, fp)) {
            //if((strcmp(c->cpf, cpf) == 0)){
            //fclose(fp);
            //return c;
    //}
  //}
//}
//fclose(fp);
//return NULL;
//}

char* get_cliente(const char* cpf){
    Clientes c;
    FILE* fp = fopen("clientes.dat", "rb");
   if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        getchar();
    }
    while (fread(&c, sizeof(c), 1, fp) == 1){
        if(strcmp(c.cpf, cpf) == 0){
            char* x = (char*) malloc(strlen(c.nome) + 1);
            if (x == NULL){
                printf("Ocorreu um erro!\n");
                fclose(fp);
                return x;
            }
            strcpy(x, c.nome);
            fclose(fp);
            return x;
    }
  }
  fclose(fp);
  return NULL;
}
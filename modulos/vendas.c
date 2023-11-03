#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vendas.h"
#include "util.h"

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
                case '4': 	listarvendas();
                            break;
                case '5': 	pesquisarvendas();
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

Vendas* cadastrarvendas (void){
    Vendas* v;
    v = (Vendas*) malloc(sizeof(Vendas));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n"); //Na venda fazer um laço de repetição para 
    printf("||                                                  ||\n"); //na hora da compra poder comprar mais de um produto
    printf("|| CODIGO:                                          ||\n"); //diferente por vez. Ex: pedir código e quantidade até se encerrarem os vendas.
    scanf(" %11[^\n]", v->cod);

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

Vendas* pesquisarvendas(void){
  FILE* fp;
  Vendas* v;
  char cod[12];
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    fgets (cod, 12, stdin);
    getchar();
    v = (Vendas*) malloc(sizeof(Vendas));
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

void listarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- LISTAR VENDAS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    FILE* fp;
    Vendas* v;
    printf("|| VENDAS CADASTRADAS:                              ||\n");
    printf("|| ------------------------------------------------ ||\n");
    v = (Vendas*) malloc(sizeof(Vendas));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    while(fread(v, sizeof(Vendas), 1, fp)) {
        if (v->status != 'x') {
        exibevendas(v);
        getchar();
        }
    }
    fclose(fp);
    free(v);
}

void exibevendas(Vendas* v) {
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
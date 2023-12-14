#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    op = op -'0';
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

Vendas* cadastrarvendas (void){ //função baseada no slide da Semana 11
    int valido = 0;  
    int codDuplicado = 0;  
    Vendas* v;
    v = (Vendas*) malloc(sizeof(Vendas));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");  
    printf("||                                                  ||\n"); 
    //Função baseada na do Aluno Gabriel Ygor                         
    do {
      printf("|| Código (5 digitos):                             ||\n");
      scanf("%s", v->cod); 
      getchar();
      codDuplicado = verificaCODDuplicado(v->cod);  
      if (codDuplicado) { 
          printf("Código já cadastrado!\n");
          printf("\n");
      } else if (validaCOD(v->cod)) { 
          printf("Código válido!\n");
          printf("\n");
          valido = 1;
      } else {
          printf("Código inválido!\n");
      }
    } while (!valido || codDuplicado);  //Enquanto nao for valido e n duplicado continua no loop 
    
    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    scanf(" %11[^\n]", v->cpf_ven);

    geraDatahora(v->dataHora);
    printf("|| DATA E HORA DA VENDA: %s\n", v->dataHora);


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

    printf("|| VALOR DA UNIDADE:                                ||\n");
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

void editarvendas (void){ //Função baseada na da aluna Mariana
  FILE* fp;
  Vendas* v = (Vendas*) malloc(sizeof(Vendas));
  char cod[6];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR VENDA ------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    scanf(" %11[^\n]", cod);
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
          scanf(" %11[^\n]", v->cpf_ven);
            while(!validaCPF(v->cpf_ven)) {
              printf("CPF inválido!\n");
              printf("Informe um novo CPF: ");
              scanf(" %12[^\n]", v->cpf_ven);
              getchar();
          }

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
  char cod[6];
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

Vendas* pesquisarvendas(void){ //função baseada no slide da Semana 11
  FILE* fp;
  Vendas* v;
  v = (Vendas*) malloc(sizeof(Vendas));
  char cod[6];

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%s", cod);
    getchar();
    fp = fopen("vendas.dat", "rb");
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
        printf("\n");
        printf("VENDA INEXISTENTE");
        printf("\n");
    }else {
        printf("VENDAS CADASTRADAS: \n");
        printf("Código: %s\n", v->cod);
        printf("Código do vendedor: %s\n", v->cpf_ven);
        printf("Código do produto: %s\n", v->codprod);
        printf("Quantidade: %s\n", v->quant);
        printf("Valor: %s\n", v->valor);
    }
}

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

int verificaCODDuplicado(const char* cod) { //Função baseada na do aluno Guilherme Medeiros
FILE* fp = fopen("vendas.dat", "rb");

if (fp == NULL) {
  printf("Erro ao abrir o arquivo para leitura.\n");
  return 0; 
}

Vendas v;

while (fread(&v, sizeof(Vendas), 1, fp) == 1) {
  if (strcmp(v.cod, cod) == 0) {            
    fclose(fp);
    return 1;
  }
}
fclose(fp);
return 0;
}

void geraDatahora(char* dataHora) { //Função baseada na da aluna Mariana
    time_t tempoAtual;
    struct tm *infoTempo;

    time(&tempoAtual);
    infoTempo = localtime(&tempoAtual);

    strftime(dataHora, 20, "%d/%m/%Y %H:%M:%S", infoTempo);
}
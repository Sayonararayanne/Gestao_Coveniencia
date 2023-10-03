#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "util.h"

//MODULO CLIENTES
void moduloclientes(void) {
    char opcao;
    do {
        opcao = menuclientes();
        switch(opcao) {
            case '1': 	cadastrarclientes();
                        break;
            case '2': 	editarclientes();
                        break;
            case '3': 	excluirclientes();
                        break;
            case '4': 	listarclientes();
                        break;
            case '5': 	pesquisarclientes();
                        break;
        } 		
    } while (opcao != '0');
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

void cadastrarclientes (void){
    char cpf[11];
    char nome[100];
    char tel[12];
    int dia;
    int mes;
    int ano;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR CLIENTES -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF:                                             ||\n");
    scanf("%s", cpf);
    if (validaCPF(cpf)){
        printf("||                 CPF VÁLIDO                       ||\n");
    }else{
        printf("||                 CPF INVÁLIDO                     ||\n");
    }
    printf("\n");
    printf("|| NOME:                                            ||\n");
     scanf("%s", nome);
    if (validaNome(nome)){
        printf("||                 NOME VÁLIDO                      ||\n");
    }else{
        printf("||                NOME INVÁLIDO                     ||\n");
    }
    printf("\n");
    printf("|| TELEFONE:                                        ||\n");
    scanf("%s", tel);
    if (validaTelefone(tel)){
        printf("||              TELEFONE VÁLIDO                     ||\n");
    }else{
        printf("||             TELEFONE INVÁLIDO                    ||\n");
    }
    printf("\n");
    printf("|| DATA DE NASCIMENTO:                              ||\n");
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

void excluirclientes (void){
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

void pesquisarclientes (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR CLIENTES -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO CLIENTE QUE DESEJA PESQUISAR:             ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void listarclientes (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CLIENTES CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionarios.h"
#include "util.h"

//MODULO FUNCIONARIOS
int modulofuncionarios(void) {
    Funcionarios* fun;
    int opcao;
        opcao = menufuncionarios();
        while (opcao !=0) {
            switch(opcao) {
                case '1': 	fun = cadastrarfuncionarios();
                            gravafuncionarios(fun);
                            free(fun);
                            break;
                case '2': 	editarfuncionarios();
                            break;
                case '3': 	excluirfuncionarios();
                            break;
                case '4': 	listarfuncionarios();
                            break;
                case '5': 	pesquisarfuncionarios();
                            break;		
    } opcao = menufuncionarios();
}
return 0;
}

char menufuncionarios(void){
    char op;
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- MENU FUNCIONARIOS --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - CADASTRAR FUNCIONARIO                      ||\n");
    printf("|| (2) - EDITAR FUNCIONARIO                         ||\n");
    printf("|| (3) - EXCLUIR FUNCIONARIO                        ||\n");
    printf("|| (4) - LISTAR FUNCIONARIOS                        ||\n");
    printf("|| (5) - PESQUISAR FUNCIONARIO                      ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

Funcionarios* cadastrarfuncionarios (void){
    Funcionarios* f;
    f = (Funcionarios*) malloc(sizeof(Funcionarios));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------ CADASTRAR FUNCIONARIOS ------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF (11 digitos sem espaço nem pontuação):       ||\n");
    scanf(" %11[^\n]", f->cpf);
    while(!validaCPF(f->cpf)) {
      printf("CPF inválido!\n");
      printf("Informe um novo CPF: ");
      scanf(" %11[^\n]", f->cpf);
      getchar();
    }

    printf("|| NOME:                                            ||\n");
    scanf(" %100[^\n]", f->nome);
    while(!validaNome(f->nome)) {
      printf("Nome inválido!\n");
      printf("Informe um novo Nome: ");
      scanf(" %100[^\n]", f->nome);
      getchar();
    }

    printf("|| TELEFONE (DD + xxxxxxxxx):                        ||\n");
    scanf(" %12[^\n]", f->tel);
    while(!validaTelefone(f->tel)) {
      printf("Telefone inválido!\n");
      printf("Informe um novo Telefone: ");
      scanf(" %12[^\n]", f->tel);
      getchar();
    }

    printf("|| CARGO:                                           ||\n");
    scanf(" %50[^\n]", f->cargo);

    printf("|| SALARIO:                                         ||\n");
    scanf(" %7[^\n]", f->sala);

    printf("|| DATA DE NASCIMENTO (xx/xx/xxxx):                 ||\n");
    scanf(" %8[^\n]", f->data);
    getchar();
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    f->status = 'a';
    return f;
}

void gravafuncionarios(Funcionarios* f) {
    FILE* fp;
    fp = fopen("funcionarios.dat", "ab");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    fwrite(f, sizeof(Funcionarios), 1, fp);
    fclose(fp);
}

void editarfuncionarios (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- EDITAR FUNCIONARIOS -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO FUNCIONARIO QUE IRA EDITAR:               ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| TELEFONE:                                        ||\n");
    printf("|| CARGO:                                           ||\n");
    printf("|| SALARIO:                                         ||\n");
    printf("|| DATA DE NASCIMENTO:                              ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void excluirfuncionarios (void){
    
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- EXCLUIR FUNCIONARIOS ------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO FUNCIONARIO QUE DESEJA EXCLUIR:           ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void pesquisarfuncionarios (void){
    
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------ PESQUISAR FUNCIONARIOS ------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO FUNCIONARIO QUE DESEJA PESQUISAR:         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void listarfuncionarios (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- LISTAR FUNCIONARIOS -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    FILE* fp;
    Funcionarios* f;
    printf("|| FUNCIONARIOS CADASTRADOS:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    f = (Funcionarios*) malloc(sizeof(Funcionarios));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    while(fread(f, sizeof(Funcionarios), 1, fp)) {
        if (f->status != 'x') {
        exibefuncionarios(f);
        getchar();
        }
    }
    fclose(fp);
    free(f);
}

void exibefuncionarios(Funcionarios* f) {
    char situacao[20];
    if ((f == NULL) || (f->status == 'x')) {
        printf("FUNCIONÁRIO INEXISTENTE");
    }else {
        printf("FUNCIONÁRIOS CADASTRADOS: \n");
        printf("CPF: %s\n", f->cpf);
        printf("Nome do funcionário: %s\n", f->nome);
        printf("Cargo: %s\n", f->cargo);
        printf("Salário: %s\n", f->sala);
        printf("Telefone: %s\n", f->tel);
        printf("Data de nascimento: %s\n", f->data);
        if (f->status == 'a') {
            strcpy(situacao, "Ativo");
        }else if (f->status == 'd') {
            strcpy(situacao, "desativado");
        }else {
            strcpy(situacao, "Não informada");
        }
        printf("Situação do funcionário: %s\n", situacao);
    }
}

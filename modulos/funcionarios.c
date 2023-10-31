#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"
#include "util.h"

//MODULO FUNCIONARIOS
void modulofuncionarios(void) {
    char opcao;
    do {
        opcao = menufuncionarios();
        switch(opcao) {
            case '1': 	cadastrarfuncionarios();
                        break;
            case '2': 	editarfuncionarios();
                        break;
            case '3': 	excluirfuncionarios();
                        break;
            case '4': 	listarfuncionarios();
                        break;
            case '5': 	pesquisarfuncionarios();
                        break;
        } 		
    } while (opcao != '0');
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

Funcionarios cadastrarfuncionarios (void){
    Funcionarios *funcionarios = malloc(sizeof(Funcionarios));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------ CADASTRAR FUNCIONARIOS ------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF:                                             ||\n");
    fgets(funcionarios->cpf, sizeof(funcionarios->cpf), stdin);
    if (!(validaCPF(funcionarios->cpf))){
        printf("||                 CPF VÁLIDO                       ||\n");
    }else{
        printf("||                 CPF INVÁLIDO                     ||\n");
    }
    printf("\n");
    printf("|| NOME:                                            ||\n");
    fgets(funcionarios->nome, sizeof(funcionarios->nome), stdin);
    if (!(validaNome(funcionarios->nome))){
        printf("||                 NOME VÁLIDO                      ||\n");
    }else{
        printf("||                NOME INVÁLIDO                     ||\n");
    }
    printf("\n");
    printf("|| TELEFONE:                                        ||\n");
    fgets(funcionarios->tel, sizeof(funcionarios->tel), stdin);
    if (!(validaTelefone(funcionarios->tel))){
        printf("||              TELEFONE VÁLIDO                     ||\n");
    }else{
        printf("||             TELEFONE INVÁLIDO                    ||\n");
    }
    printf("\n");
    printf("|| CARGO:                                           ||\n");
    fgets(funcionarios->cargo, sizeof(funcionarios->cargo), stdin);
    printf("\n");
    printf("|| SALARIO:                                         ||\n");
    fgets(funcionarios->sala, sizeof(funcionarios->sala), stdin);
    printf("\n");
    printf("|| DATA DE NASCIMENTO:                              ||\n");
     scanf("%d/%d/%d", &funcionarios->dia, &funcionarios->mes, &funcionarios->ano);
    // if (!(validaData(funcionarios->dia, funcionarios->mes, funcionarios->ano))){
    //     printf("||               DATA VÁLIDA                        ||\n");
    // }else{
    //     printf("||              DATA INVÁLIDA                       ||\n");
    // }
    printf("\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();

    return *funcionarios;
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
    printf("|| FUNCIONARIOS CADASTRADOS:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

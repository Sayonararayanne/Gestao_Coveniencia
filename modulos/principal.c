#include <stdio.h>
#include <stdlib.h>
#include "principal.h"

void moduloprin(void) {
    char opcao;
    do {
        opcao = menuprincipal();
        switch(opcao) {
            case '1': 	moduloprodutos();
                        break;
            case '2': 	modulovendas();
                        break;
            case '3': 	moduloclientes();
                        break;
            case '4': 	modulofuncionarios();
                        break;
            case '5': 	modulorelatorios();
                        break;
        } 		
    } while (opcao != '0');
}

char menuprincipal(void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- MENU PRINCIPAL ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - MODULO DE PRODUTOS                         ||\n");
    printf("|| (2) - MODULO DE VENDAS                           ||\n");
    printf("|| (3) - MODULO DE CLIENTES                         ||\n");
    printf("|| (4) - MODULO DE FUNCIONARIOS                     ||\n");
    printf("|| (5) - MODULO RELATÓRIOS                          ||\n"); 
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}
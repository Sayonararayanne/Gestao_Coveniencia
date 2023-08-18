#include <stdio.h>

void menuop (void);
void menuprincipal (void);

int main (void){
menuop();
menuprincipal();
return 0; 
}

void menuop (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("-------------- SEJA BEM - VINDO ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - MENU PRINCIPAL\n");
    printf("(2) - SOBRE\n");
    printf("(3) - EQUIPE\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}

void menuprincipal (void){
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- MENU PRINCIPAL -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - MÓDULO DE PRODUTOS\n");
    printf("(2) - MÓDULO DE VENDAS\n");
    printf("(3) - MÓDULO DE CLIENTES\n");
    printf("(4) - MÓDULO DE FUNCIONÁRIOS\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}



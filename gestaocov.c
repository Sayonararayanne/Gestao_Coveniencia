#include <stdio.h>

void menuop (void);
void menuprincipal (void);
void menusobre (void);

int main (void){
menuop();
menuprincipal();
menusobre();
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

void menusobre (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("----------------- MENU SOBRE -------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf ( "Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf ( "Departamento de Computação e Tecnologia\n" );
    printf ( "Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido para obtenção da nota da disciplina Programação.\n");
    printf("O foco principal do sistema é fazer um modelo que consiga gerenciar uma loja de coveniência, diante\n");
    printf("disso, os módulos e funcionalidades do projeto foram criados voltados para facilitar e otimizar os\n");
    printf("processos realizados em uma coveniência.\n");
    printf("------------------------------------------------\n");

}





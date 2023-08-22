#include <stdio.h>
#include <locale.h>

void menuop (void);
void menuprincipal (void);
void menusobre (void);
void menuequipe (void);
void menuprodutos(void);
void cadastrarprodutos (void);
void editarprodutos (void);
void excluirprodutos (void);
void pesquisarprodutos (void);
void listarprodutos (void);

int main (void){
setlocale(LC_ALL,"Portuguese_Brazil");

menuop();
menuprincipal();
menusobre();
menuequipe();
menuprodutos();
cadastrarprodutos();
editarprodutos();
excluirprodutos();
pesquisarprodutos();
listarprodutos();
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
    printf("(5) - RELATÓRIO\n");
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

void menuequipe (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("----------------- MENU EQUIPE ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf ( "Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf ( "Departamento de Computação e Tecnologia\n" );
    printf ( "Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido pela aluna Sayonara Rayanne Soares de Araújo,\n");
    printf("graduanda do curso de Bacharelado em Sistemas de Informação da UFRN - CERES\n");
    printf("------------------------------------------------\n");

}

void menuprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("---------------- MENU PRODUTOS -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - CADASTRAR PRODUTO\n");
    printf("(2) - EDITAR PRODUTO\n");
    printf("(3) - EXCLUIR PRODUTO\n");
    printf("(4) - LISTAR PRODUTOS\n");
    printf("(5) - PESQUISAR PRODUTO\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}

void cadastrarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("-------------- CADASTRAR PRODUTO ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CÓDIGO: \n");
    printf("NOME: \n");
    printf("MARCA: \n");
    printf("DESCRIÇÃO: \n");
    printf("QUANTIDADE: \n");
    printf("TIPO: \n");
    printf("VALOR: \n");
    printf("VALIDADE: \n");
    printf("------------------------------------------------\n");

}

void editarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- EDITAR PRODUTO -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("MARCA: \n");
    printf("DESCRIÇÃO: \n");
    printf("QUANTIDADE: \n");
    printf("TIPO: \n");
    printf("VALOR: \n");
    printf("VALIDADE: \n");
    printf("------------------------------------------------\n");

}

void excluirprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- EXCLUIR PRODUTO ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");

}

void pesquisarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("-------------- PESQUISAR PRODUTO ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");
    
}

void listarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- LISTAR PRODUTOS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("PRODUTOS CADASTRADOS: \n");
    printf("------------------------------------------------\n");
    
}
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
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
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
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- MENU PRINCIPAL -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - M�DULO DE PRODUTOS\n");
    printf("(2) - M�DULO DE VENDAS\n");
    printf("(3) - M�DULO DE CLIENTES\n");
    printf("(4) - M�DULO DE FUNCION�RIOS\n");
    printf("(5) - RELAT�RIO\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}

void menusobre (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("----------------- MENU SOBRE -------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf ( "Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf ( "Departamento de Computa��o e Tecnologia\n" );
    printf ( "Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido para obten��o da nota da disciplina Programa��o.\n");
    printf("O foco principal do sistema � fazer um modelo que consiga gerenciar uma loja de coveni�ncia, diante\n");
    printf("disso, os m�dulos e funcionalidades do projeto foram criados voltados para facilitar e otimizar os\n");
    printf("processos realizados em uma coveni�ncia.\n");
    printf("------------------------------------------------\n");

}

void menuequipe (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("----------------- MENU EQUIPE ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf ( "Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf ( "Departamento de Computa��o e Tecnologia\n" );
    printf ( "Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido pela aluna Sayonara Rayanne Soares de Ara�jo,\n");
    printf("graduanda do curso de Bacharelado em Sistemas de Informa��o da UFRN - CERES\n");
    printf("------------------------------------------------\n");

}

void menuprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
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
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- CADASTRAR PRODUTO ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("C�DIGO: \n");
    printf("NOME: \n");
    printf("MARCA: \n");
    printf("DESCRI��O: \n");
    printf("QUANTIDADE: \n");
    printf("TIPO: \n");
    printf("VALOR: \n");
    printf("VALIDADE: \n");
    printf("------------------------------------------------\n");

}

void editarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- EDITAR PRODUTO -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("MARCA: \n");
    printf("DESCRI��O: \n");
    printf("QUANTIDADE: \n");
    printf("TIPO: \n");
    printf("VALOR: \n");
    printf("VALIDADE: \n");
    printf("------------------------------------------------\n");

}

void excluirprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- EXCLUIR PRODUTO ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");

}

void pesquisarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- PESQUISAR PRODUTO ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DO PRODUTO: \n");
    printf("------------------------------------------------\n");
    
}

void listarprodutos (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- LISTAR PRODUTOS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("PRODUTOS CADASTRADOS: \n");
    printf("------------------------------------------------\n");
    
}
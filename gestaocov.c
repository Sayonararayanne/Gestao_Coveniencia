#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//SEMANA 2 

void menuop (void);
void menuprincipal (void);
void menusobre (void);
void menuequipe (void);
void menuprodutos(void);
void cadastrarprodutos (void);
void editarprodutos (void);
void excluirprodutos (void);
void pesquisarprodutos (void);
void menuvendas (void);
void listarprodutos (void);
void cadastrarvendas (void);
void editarvendas (void);
void excluirvendas (void);
void pesquisarvendas (void);
void listarvendas (void);
void menufuncionarios (void);
void cadastrarfuncionarios (void);
void editarfuncionarios (void);
void excluirfuncionario (void);
void pesquisarfuncionario (void);
void listarfuncionarios (void);
void menuclientes (void);
void cadastrarclientes (void);
void editarclientes (void);
void excluircliente (void);
void pesquisarcliente (void);
void listarclientes (void);

int main (void){

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
menuvendas();
cadastrarvendas();
editarvendas();
excluirvendas();
pesquisarvendas();
listarvendas();
menufuncionarios();
cadastrarfuncionarios();
editarfuncionarios();
excluirfuncionario();
pesquisarfuncionario();
listarfuncionarios();
menuclientes();
cadastrarclientes();
editarclientes();
excluircliente();
pesquisarcliente();
listarclientes();

return 0; 
}

void menuop (void){ 
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); //menu inicial
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - MENU PRINCIPAL                             ||\n");
    printf("|| (2) - SOBRE                                      ||\n");
    printf("|| (3) - EQUIPE                                     ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();

}

void menuprincipal (void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); //menu principal com os m�dulos dispon�veis 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- MENU PRINCIPAL ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - MODULO DE PRODUTOS                         ||\n");
    printf("|| (2) - MODULO DE VENDAS                           ||\n");
    printf("|| (3) - MODULO DE CLIENTES                         ||\n");
    printf("|| (4) - MODULO DE FUNCIONARIOS                     ||\n"); //ideia: funcion�rio do m�s ??
    printf("|| (5) - RELATORIO                                  ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
}

void menusobre (void){ 
    system("clear||cls");
    printf("|| --------------------------------------------------------- ||\n"); //descri��o do projeto
    printf("|| ------------ GESTAO PARA LOJA DE COVENIENCIA ------------ ||\n");
    printf("|| --------------------- MENU SOBRE ------------------------ ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("||                                                           ||\n");
    printf("|| Universidade Federal do Rio Grande do Norte - CERES       ||\n");
    printf("|| Departamento de Computa�ao e Tecnologia                   ||\n");
    printf("|| Desenvolvido por @sayonararayanne -- desde Ago, 2023      ||\n");
    printf("||                                                           ||\n");
    printf("|| Projeto desenvolvido para obten��o da nota da disciplina  ||\n");
    printf("|| Programa�ao.                                              ||\n");
    printf("|| O foco principal do sistema e fazer um modelo que consiga ||\n");
    printf("|| gerenciar uma loja de coveniencia, diante disso, os       ||\n");
    printf("|| m�dulos e funcionalidades do projeto foram criados        ||\n");
    printf("|| voltados para facilitar e otimizar os processos           ||\n");
    printf("|| realizados em uma coveniencia.                            ||\n");
    printf("||                                                           ||\n");
    printf("|| --------------------------------------------------------- ||\n");

}

void menuequipe (void){ 
    system("clear||cls");
    printf("|| --------------------------------------------------------- ||\n"); //descri��o da equipe
    printf("|| ------------ GESTAO PARA LOJA DE COVENIENCIA ------------ ||\n");
    printf("|| --------------------- MENU EQUIPE ----------------------- ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("||                                                           ||\n");
    printf("|| Universidade Federal do Rio Grande do Norte - CERES       ||\n");
    printf("|| Departamento de Computa�ao e Tecnologia                   ||\n");
    printf("|| Desenvolvido por @sayonararayanne -- desde Ago, 2023      ||\n");                                                         
    printf("||                                                           ||\n");
    printf("|| Projeto desenvolvido pela aluna Sayonara Rayanne Soares   ||\n");
    printf("|| de Araujo, graduanda do curso de Bacharelado em Sistemas  ||\n");
    printf("|| de Informa��o da UFRN - CERES                             ||\n");
    printf("||                                                           ||\n");
    printf("|| --------------------------------------------------------- ||\n");
}
//M�DULO PRODUTOS
void menuprodutos (void){
    char op;
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- MENU PRODUTOS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");  
    printf("||                                                  ||\n");
    printf("|| (1) - CADASTRAR PRODUTO                          ||\n");
    printf("|| (2) - EDITAR PRODUTO                             ||\n");
    printf("|| (3) - EXCLUIR PRODUTO                            ||\n");
    printf("|| (4) - LISTAR PRODUTOS                            ||\n");
    printf("|| (5) - PESQUISAR PRODUTO                          ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a op��o desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
}

void cadastrarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR PRODUTO --------------- ||\n");
    printf("|| -------------------------------------------------||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| MARCA:                                           ||\n");
    printf("|| DESCRI�AO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    getchar();
}

void editarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EDITAR PRODUTO ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| MARCA:                                           ||\n");
    printf("|| DESCRI�AO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    getchar();
}

void excluirprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- EXCLUIR PRODUTO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    getchar();
}

void pesquisarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR PRODUTO --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     || \n");
    printf("|| ------------------------------------------------ ||\n");
    getchar();
}

void listarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR PRODUTOS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| PRODUTOS CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
    getchar();
}

//M�DULO VENDAS
void menuvendas (void){ 
    char op;
    system("clear||cls");
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("----------------- MENU VENDAS ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - CADASTRAR VENDA\n");
    printf("(2) - EDITAR VENDA\n");
    printf("(3) - EXCLUIR VENDA\n");
    printf("(4) - LISTAR VENDAS\n");
    printf("(5) - PESQUISAR VENDA\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");
    printf("Digite a op��o desejada: ");
    scanf("%c", &op);
    getchar();
}

void cadastrarvendas (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- CADASTRAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("C�DIGO: \n"); //chave ser gerada automaticamente ou ser data+hora
    printf("C�DIGO DO VENDEDOR: \n");
    printf("C�DIGO DO PRODUTO: \n");
    printf("QUANTIDADE: \n");
    printf("VALOR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void editarvendas (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("---------------- EDITAR VENDA ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    printf("C�DIGO DO VENDEDOR: \n");
    printf("C�DIGO DO PRODUTO: \n");
    printf("QUANTIDADE: \n");
    printf("VALOR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void excluirvendas (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("---------------- EXCLUIR VENDA -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void pesquisarvendas (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- PESQUISAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    getchar(); 
}

void listarvendas (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- LISTAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("VENDAS CADASTRADAS: \n");
    printf("------------------------------------------------\n");
    getchar();
}

//M�DULO FUNCION�RIOS
void menufuncionarios (void){
    char op;
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- MENU FUNCION�RIOS ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - CADASTRAR FUNCION�RIO\n");
    printf("(2) - EDITAR FUNCION�RIO\n");
    printf("(3) - EXCLUIR FUNCION�RIO\n");
    printf("(4) - LISTAR FUNCION�RIOS\n");
    printf("(5) - PESQUISAR FUNCION�RIO\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");
    printf("Digite a op��o desejada: ");
    scanf("%c", &op);
    getchar();
}

void cadastrarfuncionarios (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------ CADASTRAR FUNCION�RIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF: \n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SAL�RIO: \n");
    printf("DATA DE NASCIMENTO: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void editarfuncionarios (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- EDITAR FUNCION�RIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE IR� EDITAR: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SAL�RIO: \n");
    printf("DATA DE NASCIMENTO: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void excluirfuncionario (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- EXCLUIR FUNCION�RIOS -------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE DESEJA EXCLUIR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void pesquisarfuncionario (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------ PESQUISAR FUNCION�RIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE DESEJA PESQUISAR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void listarfuncionarios (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- LISTAR FUNCIONARIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("FUNCION�RIOS CADASTRADOS: \n");
    printf("------------------------------------------------\n");
    getchar();
}

//M�DULO CLIENTES
void menuclientes (void){
    char op;
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("---------------- MENU CLIENTES -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - CADASTRAR CLIENTE\n");
    printf("(2) - EDITAR CLIENTE\n");
    printf("(3) - EXCLUIR CLIENTE\n");
    printf("(4) - LISTAR CLIENTES\n");
    printf("(5) - PESQUISAR CLIENTE\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");
    printf("Digite a op��o desejada: ");
    scanf("%c", &op);
    getchar();
}

void cadastrarclientes (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- CADASTRAR CLIENTES --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF: \n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("DATA DE NASCIMENTO: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void editarclientes (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("---------------- EDITAR CLIENTES ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CPF DO CLIENTE: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("DATA DE NASCIMENTO: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void excluircliente (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- EXCLUIR CLIENTES ---------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO CLIENTE QUE DESEJA EXCLUIR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void pesquisarcliente (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- PESQUISAR CLIENTES --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO CLIENTE QUE DESEJA PESQUISAR: \n");
    printf("------------------------------------------------\n");
    getchar();
}

void listarclientes (void){
    system("clear||cls"); 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- LISTAR CLIENTES ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CLIENTES CADASTRADOS: \n");
    printf("------------------------------------------------\n");
    getchar();
}
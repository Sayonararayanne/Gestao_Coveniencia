#include <stdio.h>
#include <stdlib.h>

//SEMANA 4

char menuop(void);
void moduloprin(void);
char menuprincipal (void);
void menusobre (void);
void menuequipe (void);

void moduloprodutos(void);
char menuprodutos(void);
void cadastrarprodutos (void);
void editarprodutos (void);
void excluirprodutos (void);
void pesquisarprodutos (void);

void modulovendas(void);
char menuvendas (void);
void listarprodutos (void);
void cadastrarvendas (void);
void editarvendas (void);
void excluirvendas (void);
void pesquisarvendas (void);
void listarvendas (void);

void modulofuncionarios (void);
char menufuncionarios (void);
void cadastrarfuncionarios (void);
void editarfuncionarios (void);
void excluirfuncionarios (void);
void pesquisarfuncionarios (void);
void listarfuncionarios (void);

void moduloclientes (void);
char menuclientes (void);
void cadastrarclientes (void);
void editarclientes (void);
void excluirclientes (void);
void pesquisarclientes (void);
void listarclientes (void);

int main (void){
char opcao;

do {
    opcao = menuop();
    switch(opcao) {
        case '1': moduloprin();
                  break;
        case '2': menusobre();
                  break;
        case '3': menuequipe();
                  break;
    }
} while (opcao != '0');

return 0; 
}

char menuop (void){ 
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
    return op;

}

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
    printf("|| (4) - MODULO DE FUNCIONARIOS                     ||\n"); //ideia: funcionorio do mes ??
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void menusobre (void){ 
    system("clear||cls");
    printf("|| --------------------------------------------------------- ||\n"); //descricao do projeto
    printf("|| ------------ GESTAO PARA LOJA DE COVENIENCIA ------------ ||\n");
    printf("|| --------------------- MENU SOBRE ------------------------ ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("||                                                           ||\n");
    printf("|| Universidade Federal do Rio Grande do Norte - CERES       ||\n");
    printf("|| Departamento de Computacao e Tecnologia                   ||\n");
    printf("|| Desenvolvido por sayonararayanne -- desde Ago, 2023       ||\n");
    printf("||                                                           ||\n");
    printf("|| Projeto desenvolvido para obtencao da nota da disciplina  ||\n");
    printf("|| Programacao.                                              ||\n");
    printf("|| O foco principal do sistema e fazer um modelo que consiga ||\n");
    printf("|| gerenciar uma loja de coveniencia, diante disso, os       ||\n");
    printf("|| modulos e funcionalidades do projeto foram criados        ||\n");
    printf("|| voltados para facilitar e otimizar os processos           ||\n");
    printf("|| realizados em uma coveniencia.                            ||\n");
    printf("||                                                           ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void menuequipe (void){ 
    system("clear||cls");
    printf("|| --------------------------------------------------------- ||\n"); //descricao da equipe
    printf("|| ------------ GESTAO PARA LOJA DE COVENIENCIA ------------ ||\n");
    printf("|| --------------------- MENU EQUIPE ----------------------- ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("||                                                           ||\n");
    printf("|| Universidade Federal do Rio Grande do Norte - CERES       ||\n");
    printf("|| Departamento de Computacao e Tecnologia                   ||\n");
    printf("|| Desenvolvido por @sayonararayanne -- desde Ago, 2023      ||\n");                                                         
    printf("||                                                           ||\n");
    printf("|| Projeto desenvolvido pela aluna Sayonara Rayanne Soares   ||\n");
    printf("|| de Araujo, graduanda do curso de Bacharelado em Sistemas  ||\n");
    printf("|| de Informacao da UFRN - CERES                             ||\n");
    printf("||                                                           ||\n");
    printf("|| --------------------------------------------------------- ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

//MODULO PRODUTOS

void moduloprodutos(void) {
    char opcao;
    do {
        opcao = menuprodutos();
        switch(opcao) {
            case '1': 	cadastrarprodutos();
                        break;
            case '2': 	editarprodutos();
                        break;
            case '3': 	excluirprodutos();
                        break;
            case '4': 	listarprodutos();
                        break;
            case '5': 	pesquisarprodutos();
                        break;
        } 		
    } while (opcao != '0');
}

char menuprodutos (void){
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
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void cadastrarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR PRODUTO --------------- ||\n");
    printf("|| -------------------------------------------------||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| MARCA:                                           ||\n");
    printf("|| DESCRICAO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
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
    printf("|| DESCRICAO:                                       ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| TIPO:                                            ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("|| VALIDADE:                                        ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
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
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void pesquisarprodutos (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR PRODUTO --------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DO PRODUTO:                     ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
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
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

//MODULO VENDAS
void modulovendas(void) {
    char opcao;
    do {
        opcao = menuvendas();
        switch(opcao) {
            case '1': 	cadastrarvendas();
                        break;
            case '2': 	editarvendas();
                        break;
            case '3': 	excluirvendas();
                        break;
            case '4': 	listarvendas();
                        break;
            case '5': 	pesquisarvendas();
                        break;
        } 		
    } while (opcao != '0');
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
    printf("|| (4) - LISTAR VENDAS                              ||\n");
    printf("|| (5) - PESQUISAR VENDA                            ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void cadastrarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO:                                          ||\n"); //chave ser gerada automaticamente ou ser data+hora
    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    printf("|| CODIGO DO PRODUTO:                               ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void editarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EDITAR VENDA ------------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CODIGO DO VENDEDOR:                              ||\n");
    printf("|| CODIGO DO PRODUTO:                               ||\n");
    printf("|| QUANTIDADE:                                      ||\n");
    printf("|| VALOR:                                           ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void excluirvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- EXCLUIR VENDA ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

void pesquisarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CODIGO DA VENDA:                       ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar(); 
}

void listarvendas (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- LISTAR VENDAS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| VENDAS CADASTRADAS:                              ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
    getchar();
}

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

void cadastrarfuncionarios (void){
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------ CADASTRAR FUNCIONARIOS ------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF:                                             ||\n");
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
    printf("|| CPF DO FUNCIONARIO QUE DESEJA EXCLUIR:           || \n");
    printf("|| ------------------------------------------------ ||\n");
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
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- CADASTRAR CLIENTES -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF:                                             ||\n");
    printf("|| NOME:                                            ||\n");
    printf("|| TELEFONE:                                        ||\n");
    printf("|| DATA DE NASCIMENTO:                              ||\n");
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "relatoriofun.h"
#include "funcionarios.h"
#include "vendas.h"
#include "clientes.h"
#include "produtos.h"

void modulorelatorios(void) {
	char opcao;
	do {
		opcao = menurelatorio();
		switch(opcao) {
			case '1': 	menurelatorioclientes();
						break;
			case '2': 	menurelatoriovendas();
						break;
			case '3': 	menurelatoriofuncionarios();
						break;
			case '4': 	menurelatorioprodutos();
						break;
		} 		
	} while (opcao != '0');
}

char menurelatorio (void){ 
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| (1) - RELATÓRIO DOS CLIENTES                     ||\n");
    printf("|| (2) - RELATÓRIO DAS VENDAS                       ||\n");
    printf("|| (3) - RELATÓRIO DOS FUNCIONÁRIOS                 ||\n");
	printf("|| (4) - RELATÓRIO DOS PRODUTOS                     ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;

}
void menurelatorioclientes(void){
    char opcao;

    do {
        opcao = relatorioclientes();
        switch(opcao) {
            case '1':   listaclistatus('a');
                        break;
			case '2':   listaclitotal();
                        break;
            case '3':   listacliordemabc();
                        break;
          } 		
    } while (opcao != '0');
}

char relatorioclientes(void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
	printf("||               RELATÓRIO DOS CLIENTES             ||\n");
	printf("||                                                  ||\n");
    printf("|| (1) - RELATÓRIO POR STATUS                       ||\n");
    printf("|| (2) - RELATÓRIO TOTAL                            ||\n");
    printf("|| (3) - RELATÓRIO ORDEM ALFABÉTICA                 ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

void listaclistatus(char st){
	Clientes* c;
    FILE* fp;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CLIENTES POR STATUS:                             ||\n");
    printf("|| ------------------------------------------------ ||\n");
	c = (Clientes*) malloc(sizeof(Clientes)); //função baseada na de @maricaico
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-15s","CPF:");
	printf("|");
    printf("%-51s","Nome do cliente:");
	printf("|");
    printf("%-12s","Status:");
	printf("\n");
    while (fread(c, sizeof(Clientes), 1, fp)) { 
        if (c->status == st) {
			printf("%-15s",c->cpf);
			printf("|");
			printf("%-51s",c->nome);
			printf("|");
			printf("%c",c->status);
			printf("\n");
        }
    }
    fclose(fp);
    free(c);
    getchar();
}

void listaclitotal(void){
	FILE* fp;
    Clientes* c;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CLIENTES CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
	c = (Clientes*) malloc(sizeof(Clientes));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
	printf("%-13s","CPF:");
	printf("|");
    printf("%-50s", "Nome do cliente:");
	printf("|");
    printf("%-14s","Telefone:");
	printf("|");
    printf("%-12s", "Data de nascimento:");
	printf("\n");
    while (fread(c, sizeof(Clientes), 1, fp)) { 
        if (c->status != 'x') {
			printf("%-13s",c->cpf);
			printf("|");
			printf("%-50s",c->nome);
			printf("|");
			printf("%-14s",c->tel);
			printf("|");
			printf("%-12s",c->data);
			printf("\n");
        }
    }
    fclose(fp);
    free(c);
    getchar();
}

void listacliordemabc(void){
    FILE* fp = fopen("clientes.dat", "rb");
    Clientes* c;
    Clientes* lista;
    system("clear||cls");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CLIENTES CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("%-13s", "CPF");
    printf("|");
    printf("%-50s", "Nome do cliente");
    printf("\n");
    lista = NULL;
    c = (Clientes*)malloc(sizeof(Clientes));
    if (c == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    while(fread(c, sizeof(Clientes), 1, fp) == 1) {
        c->next = NULL;
        if ((lista == NULL) || (strcmp(c->nome, lista->nome) < 0)) {
            c->next = lista;
            lista = c;
        } else {
            Clientes* ant = lista;
            Clientes* atual = lista->next;
            while ((atual != NULL) && strcmp(atual->nome, c->nome) < 0) {
                ant = atual;
                atual = atual->next;
            }
            ant->next = c;
            c->next = atual;

        }
        c = (Clientes*)malloc(sizeof(Clientes));
        if (c == NULL) {
            printf("\t\t\t>>> Processando as informações...\n");
            sleep(1);
            printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
        }
    }
    fclose(fp);
    c = lista;
    while(c != NULL) {
        printf("%-12s", c->cpf);
        printf("|");
        printf("%-30s", c->nome);
        printf("\n");
        c = c->next;
    }
    c = lista;
    while (lista != NULL) {
        lista = lista->next;
        free(c);
        c = lista;
    }
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void menurelatoriofuncionarios(void){
    char opcao;

    do {
        opcao = relatoriofuncionarios();
        switch(opcao) {
            case '1':   listafunstatus('a');
                        break;
			case '2':   listafuntotal();
                        break;
            case '3':   listafunordemabc();
                        break;
          } 		
    } while (opcao != '0');
}

char relatoriofuncionarios(void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
	printf("||            RELATÓRIO DOS FUNCIONÁRIOS            ||\n");
	printf("||                                                  ||\n");
    printf("|| (1) - RELATÓRIO POR STATUS                       ||\n");
    printf("|| (2) - RELATÓRIO TOTAL                            ||\n");
    printf("|| (3) - RELATÓRIO ORDEM ALFABÉTICA                 ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

void listafunstatus(char st){
	Funcionarios* f;
    FILE* fp;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| FUNCIONÁRIOS POR STATUS:                         ||\n");
    printf("|| ------------------------------------------------ ||\n");
	f = (Funcionarios*) malloc(sizeof(Funcionarios)); //função baseada na de @maricaico
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-13s","CPF:");
	printf("|");
    printf("%-102s", "Nome do funcionário");
	printf("|");
    printf("%-14s", "Telefone:");
	printf("|");
    printf("%-12s", "Data de nascimento:");
	printf("\n");
	printf("%-53s", "Cargo:");
	printf("\n");
	printf("%-10s", "Salário:");
	printf("\n");
    while (fread(f, sizeof(Funcionarios), 1, fp)) { 
        if (f->status == st) {
			printf("%-13s",f->cpf);
			printf("|");
			printf("%-102s",f->nome);
			printf("|");
			printf("%-14s",f->tel);
			printf("|");
			printf("%-12s",f->data);
			printf("|");
			printf("%-53s",f->cargo);
			printf("|");
			printf("%-10s",f->sala);
			printf("\n");
        }
    }
    fclose(fp);
    free(f);
    getchar();
}

void listafuntotal(void){
	FILE* fp;
    Funcionarios* f;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| FUNCIONÁRIOS CADASTRADOS:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
	f = (Funcionarios*) malloc(sizeof(Funcionarios));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
	printf("%-13s","CPF:");
	printf("|");
    printf("%-102s", "Nome do funcionário");
	printf("|");
    printf("%-14s", "Telefone:");
	printf("|");
    printf("%-12s", "Data de nascimento:");
	printf("\n");
	printf("%-53s", "Cargo:");
	printf("\n");
	printf("%-10s", "Salário:");
	printf("\n");
    while (fread(f, sizeof(Funcionarios), 1, fp)) { 
        if (f->status != 'x') {
			printf("%-13s",f->cpf);
			printf("|");
			printf("%-102s",f->nome);
			printf("|");
			printf("%-14s",f->tel);
			printf("|");
			printf("%-12s",f->data);
			printf("|");
			printf("%-53s",f->cargo);
			printf("|");
			printf("%-10s",f->sala);
			printf("\n");
        }
    }
    fclose(fp);
    free(f);
    getchar();
}

void listafunordemabc(void){
    FILE* fp = fopen("funcionarios.dat", "rb");
    Funcionarios* f;
    Funcionarios* lista;
    system("clear||cls");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- LISTAR FUNCIONÁRIOS -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| FUNCIONÁRIOS CADASTRADOS:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("%-13s", "CPF: ");
    printf("|");
    printf("%-50s", "NOME DO FUNCIONÁRIO: ");
    printf("\n");
    lista = NULL;
    f = (Funcionarios*)malloc(sizeof(Funcionarios));
    if (f == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    while(fread(f, sizeof(Funcionarios), 1, fp) == 1) {
        f->next = NULL;
        if ((lista == NULL) || (strcmp(f->nome, lista->nome) < 0)) {
            f->next = lista;
            lista = f;
        } else {
            Funcionarios* ant = lista;
            Funcionarios* atual = lista->next;
            while ((atual != NULL) && strcmp(atual->nome, f->nome) < 0) {
                ant = atual;
                atual = atual->next;
            }
            ant->next = f;
            f->next = atual;

        }
        f = (Funcionarios*)malloc(sizeof(Funcionarios));
        if (f == NULL) {
            printf("\t\t\t>>> Processando as informações...\n");
            sleep(1);
            printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
        }
    }
    fclose(fp);
    f = lista;
    while(f != NULL) {
        printf("%-12s", f->cpf);
        printf("|");
        printf("%-30s", f->nome);
        printf("\n");
        f = f->next;
    }
    f = lista;
    while (lista != NULL) {
        lista = lista->next;
        free(f);
        f = lista;
    }
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void menurelatoriovendas(void){
    char opcao;

   do {
        opcao = relatoriovendas();
        switch(opcao) {
            case '1':   listavenstatus('a');
                        break;
			case '2':   listaventotal();
                        break;
          } 		
    } while (opcao != '0');
}

char relatoriovendas(void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
	printf("||               RELATÓRIO DOS VENDAS               ||\n");
	printf("||                                                  ||\n");
    printf("|| (1) - RELATÓRIO POR STATUS                       ||\n");
    printf("|| (2) - RELATÓRIO TOTAL                            ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

void listavenstatus(char st){
	Vendas* v;
    FILE* fp;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- LISTAR VENDAS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| VENDAS POR STATUS:                               ||\n");
    printf("|| ------------------------------------------------ ||\n");
	v = (Vendas*) malloc(sizeof(Vendas)); //função baseada na de @maricaico
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("%-13s","Código:");
	printf("|");
    printf("%-13s","Código do vendedor:");
	printf("|");
    printf("%-15s", "Código do produto:");
	printf("|");
    printf("%-12s", "Data de nascimento:");
	printf("\n");
	printf("%-12s", "Quantidade:");
	printf("\n");
	printf("%-12s", "Valor:");
	printf("\n");
    while (fread(v, sizeof(Vendas), 1, fp)) { 
        if (v->status == st) {
			printf("%-13s",v->cod);
			printf("|");
			printf("%-13s",v->cpf_ven);
			printf("|");
			printf("%-15s",v->codprod);
			printf("|");
			printf("%-12s",v->quant);
			printf("|");
			printf("%-12s",v->valor);
			printf("\n");
        }
    }
    fclose(fp);
    free(v);
    getchar();
}

void listaventotal(void){
	FILE* fp;
    Vendas* v;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ---------------- LISTAR VENDAS ----------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| VENDAS CADASTRADOS:                              ||\n");
    printf("|| ------------------------------------------------ ||\n");
	v = (Vendas*) malloc(sizeof(Vendas));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
	printf("%-13s","Código:");
	printf("|");
    printf("%-13s","Código do vendedor:");
	printf("|");
    printf("%-15s", "Código do produto:");
	printf("|");
    printf("%-12s", "Data de nascimento:");
	printf("\n");
	printf("%-12s", "Quantidade:");
	printf("\n");
	printf("%-12s", "Valor:");
	printf("\n");
    while (fread(v, sizeof(Vendas), 1, fp)) { 
        if (v->status != 'x') {
			printf("%-13s",v->cod);
			printf("|");
			printf("%-13s",v->cpf_ven);
			printf("|");
			printf("%-15s",v->codprod);
			printf("|");
			printf("%-12s",v->quant);
			printf("|");
			printf("%-12s",v->valor);
			printf("\n");
        }
    }
    fclose(fp);
    free(v);
    getchar();
}

void menurelatorioprodutos(void){
    char opcao;

   do {
        opcao = relatorioprodutos();
        switch(opcao) {
            case '1':   listaprostatus('a');
                        break;
			case '2':   listaprototal();
                        break;
            case '3':   listaproordemabc();
                        break;
          } 		
    } while (opcao != '0');
}

char relatorioprodutos(void){
    char op;
    system("clear||cls");
    printf("|| ------------------------------------------------ ||\n"); 
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- SEJA BEM - VINDO ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
	printf("||                RELATÓRIO DOS PRODUTOS            ||\n");
	printf("||                                                  ||\n");
    printf("|| (1) - RELATÓRIO POR STATUS                       ||\n");
    printf("|| (2) - RELATÓRIO TOTAL                            ||\n");
    printf("|| (3) - RELATÓRIO POR ORDEM ALFABÉTICA             ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

void listaprostatus(char st){
	Produtos* p;
    FILE* fp;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| PRODUTOS POR STATUS:                             ||\n");
    printf("|| ------------------------------------------------ ||\n");
	p = (Produtos*) malloc(sizeof(Produtos)); //função baseada na de @maricaico
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
   printf("%-13s","Código:");
	printf("|");
    printf("%-102s","Nome do produto:");
	printf("|");
    printf("%-52s","Marca");
	printf("|");
    printf("%-102s","Descrição do produto:");
	printf("\n");
	printf("%-12s", "Quantidade:");
	printf("\n");
	printf("%-52s", "Tipo:");
	printf("\n");
	printf("%-12s", "Valor individual:");
	printf("\n");
    while (fread(p, sizeof(Produtos), 1, fp)) { 
        if (p->status == st) {
			printf("%-13s", p->cod);
			printf("|");
			printf("%-102s",p->nome);
			printf("|");
			printf("%-52s",p->marca);
			printf("|");
			printf("%-102s",p->desc);
			printf("|");
			printf("%-12s",p->quant);
			printf("|");
			printf("%-52s",p->tip);
			printf("|");
			printf("%-12s",p->valor);
			printf("\n");
        }
    }
    fclose(fp);
    free(p);
    getchar();
}

void listaprototal(void){
	FILE* fp;
    Produtos* p;
	system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| --------------- LISTAR CLIENTES ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| PRODUTOS CADASTRADOS:                            ||\n");
    printf("|| ------------------------------------------------ ||\n");
	p = (Produtos*) malloc(sizeof(Produtos));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
	printf("%-13s","Código:");
	printf("|");
    printf("%-102s","Nome do produto:");
	printf("|");
    printf("%-52s","Marca");
	printf("|");
    printf("%-102s","Descrição do produto:");
	printf("\n");
	printf("%-12s", "Quantidade:");
	printf("\n");
	printf("%-52s", "Tipo:");
	printf("\n");
	printf("%-12s", "Valor individual:");
	printf("\n");
    while (fread(p, sizeof(Produtos), 1, fp)) { 
        if (p->status != 'x') {
			printf("%-13s", p->cod);
			printf("|");
			printf("%-102s",p->nome);
			printf("|");
			printf("%-52s",p->marca);
			printf("|");
			printf("%-102s",p->desc);
			printf("|");
			printf("%-12s",p->quant);
			printf("|");
			printf("%-52s",p->tip);
			printf("|");
			printf("%-12s",p->valor);
			printf("\n");
        }
    }
    fclose(fp);
    free(p);
    getchar();
}

void listaproordemabc(void){
    FILE* fp = fopen("produtos.dat", "rb");
    Produtos* p;
    Produtos* lista;
    system("clear||cls");
    if (fp == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao abrir o arquivo!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    printf("\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- LISTAR FUNCIONÁRIOS -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| FUNCIONÁRIOS CADASTRADOS:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("%-13s", "CÓDIGO DO PRODUTO: ");
    printf("|");
    printf("%-50s", "NOME DO PRODUTO: ");
    printf("\n");
    lista = NULL;
    p = (Produtos*)malloc(sizeof(Produtos));
    if (p == NULL) {
        printf("\t\t\t>>> Processando as informações...\n");
        sleep(1);
        printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    while(fread(p, sizeof(Produtos), 1, fp) == 1) {
        p->next = NULL;
        if ((lista == NULL) || (strcmp(p->nome, lista->nome) < 0)) {
            p->next = lista;
            lista = p;
        } else {
            Produtos* ant = lista;
            Produtos* atual = lista->next;
            while ((atual != NULL) && strcmp(atual->nome, p->nome) < 0) {
                ant = atual;
                atual = atual->next;
            }
            ant->next = p;
            p->next = atual;

        }
        p = (Produtos*)malloc(sizeof(Produtos));
        if (p == NULL) {
            printf("\t\t\t>>> Processando as informações...\n");
            sleep(1);
            printf("\t\t\t>>> Houve um erro ao alocar a memória!\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
        }
    }
    fclose(fp);
    p = lista;
    while(p != NULL) {
        printf("%-12s", p->cod);
        printf("|");
        printf("%-30s", p->nome);
        printf("\n");
        p = p->next;
    }
    p = lista;
    while (lista != NULL) {
        lista = lista->next;
        free(p);
        p = lista;
    }
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

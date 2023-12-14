#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionarios.h"
#include "util.h"

//MODULO FUNCIONARIOS
int modulofuncionarios(void) {
    Funcionarios* fun;
    char opcao;
    opcao = menufuncionarios();
        do { 
            switch(opcao) {
                case '1': 	fun = cadastrarfuncionarios();
                            gravafuncionarios(fun);
                            free(fun);
                            break;
                case '2': 	editarfuncionarios();
                            break;
                case '3': 	excluirfuncionarios();
                            break;
                case '4': 	fun = pesquisarfuncionarios();
                            exibefuncionarios(fun);
                            free(fun);
                            break;		
    } 
} while (opcao != '0');
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
    printf("|| (4) - PESQUISAR FUNCIONARIO                      ||\n");
    printf("|| (0) - SAIR                                       ||\n");
    printf("||                                                  ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("|| Digite a opcao desejada:                         ||\n");
    scanf("%c", &op);
    printf("|| ------------------------------------------------ ||\n");
    getchar();
    return op;
}

Funcionarios* cadastrarfuncionarios (void){
    int valido = 0;  
    int cpfDuplicado = 0; 
    Funcionarios* f;
    f = (Funcionarios*) malloc(sizeof(Funcionarios));

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------ CADASTRAR FUNCIONARIOS ------------ ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    //Função baseada na do Aluno Gabriel Canuto                             
    do {
      printf("|| CPF (11 digitos sem espaço nem pontuação):       ||\n");
      scanf("%s", f->cpf); 
      getchar();
      cpfDuplicado = verificaCPFDuplicadofun(f->cpf);  //Verifica se o cpf é duplicado
      if (cpfDuplicado) { 
          printf("CPF já cadastrado!\n");
          printf("\n");
      } else if (validaCPF(f->cpf)) { 
          printf("CPF valido!\n");
          printf("\n");
          valido = 1;
      } else {
          printf("CPF invalido!\n");
      }
    } while (!valido || cpfDuplicado);  //Enquanto nao for valido e n duplicado continua no loop 

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
  FILE* fp;
  Funcionarios* f = (Funcionarios*) malloc(sizeof(Funcionarios));
  char cpf[12];
  int achou = 0;

    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- EDITAR FUNCIONARIOS -------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO FUNCIONARIO QUE IRA EDITAR:               ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cpf);
    getchar();
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(f, sizeof(Funcionarios), 1, fp) == 1) {
        if(strcmp(f->cpf, cpf) == 0) {
          printf("\n");
          printf("|| Funcionário Encontrado!                              ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||             CADASTRE OS NOVOS DADOS:             ||\n");
          printf("|| ------------------------------------------------ ||\n");
          printf("||                                                  ||\n");
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
          fseek(fp, -sizeof(Funcionarios), SEEK_CUR);
          fwrite(f, sizeof(Funcionarios), 1, fp);
          achou = 1;
          break;
        }
    }
}
    if (!achou) {
        printf("\n");
        printf("CPF não encontrado!\n");
    } else {
        printf("\n");
        printf("Funcionário atualizado com sucesso!\n");
    }
  getchar();
  fclose(fp);
}

void excluirfuncionarios (void){
  FILE* fp;
  Funcionarios* f = (Funcionarios*) malloc(sizeof(Funcionarios));
  char cpf[12];
  int achou = 0;
    
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| ------------- EXCLUIR FUNCIONARIOS ------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| CPF DO FUNCIONARIO QUE DESEJA EXCLUIR:           ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cpf);
    getchar();
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Erro na abertura do arquivo!\n");
      printf("Não é possível continuar...\n");
      getchar();
    } else {
      while (fread(f, sizeof(Funcionarios), 1, fp) == 1) {
        if(strcmp(f->cpf, cpf) == 0) {
          f->status = 'd';
          fseek(fp, -sizeof(Funcionarios), SEEK_CUR);
          fwrite(f, sizeof(Funcionarios), 1, fp);
          achou = 1;
          break;
        }
      }
    }
    if (!achou) {
        printf("\n");
        printf("CPF não encontrado!\n");
    } else {
        printf("\n");
        printf("Funcionário excluído com sucesso!\n");
    }
  getchar();
  fclose(fp);
}
    
Funcionarios* pesquisarfuncionarios(void){
  FILE* fp;
  Funcionarios* f;
  f = (Funcionarios*) malloc(sizeof(Funcionarios));
  char cpf[12];
  
    system("clear||cls"); 
    printf("|| ------------------------------------------------ ||\n");
    printf("|| -------- GESTAO PARA LOJA DE COVENIENCIA ------- ||\n");
    printf("|| -------------- PESQUISAR VENDAS ---------------- ||\n");
    printf("|| ------------------------------------------------ ||\n");
    printf("||                                                  ||\n");
    printf("|| INFORME O CPF DO FUNCIONÁRIO:                        ||\n");
    printf("|| ------------------------------------------------ ||\n");
    scanf(" %11[^\n]", cpf);
    getchar();
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        getchar();
    } else {
        while(!feof(fp)) {
            fread(f, sizeof(Funcionarios), 1, fp);
            if((strcmp(f->cpf, cpf) == 0) && (f->status != 'x')) {
            exibefuncionarios(f);
            getchar();
            fclose(fp);
            return f;
        }
    }
}
fclose(fp);
return NULL;
}

void exibefuncionarios(Funcionarios* f) { //Função baseada na do Professor Flavius
    char situacao[20];
    if ((f == NULL) || (f->status == 'x')) {
        printf("\n");
        printf("FUNCIONÁRIO INEXISTENTE");
        printf("\n");
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
            strcpy(situacao, "Desativado");
        }else {
            strcpy(situacao, "Não informada");
        }
        printf("Situação do funcionário: %s\n", situacao);
    }
}

int verificaCPFDuplicadofun(const char* cpf) {
FILE* fp = fopen("funcionarios.dat", "rb");

if (fp == NULL) {
  printf("Erro ao abrir o arquivo para leitura.\n");
  return 0; 
}

Funcionarios f;

while (fread(&f, sizeof(Funcionarios), 1, fp) == 1) {
  if (strcmp(f.cpf, cpf) == 0) {            
    fclose(fp);
    return 1;
  }
}
fclose(fp);
return 0;
}
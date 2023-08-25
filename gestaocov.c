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
void cadastrarvendas (void);
void editarvendas (void);
void excluirvendas (void);
void pesquisarvendas (void);
void listarvendas (void);
void cadastrarfuncionarios (void);
void editarfuncionarios (void);
void excluirfuncionario (void);
void pesquisarfuncionario (void);
void listarfuncionarios (void);

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
cadastrarvendas();
editarvendas();
excluirvendas();
pesquisarvendas();
listarvendas();
cadastrarfuncionarios();
editarfuncionarios();
excluirfuncionario();
pesquisarfuncionario();
listarfuncionarios();

return 0; 
}

void menuop (void){ 
    printf("------------------------------------------------\n"); //menu inicial
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
    printf("------------------------------------------------\n"); //menu principal com os módulos disponíveis 
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- MENU PRINCIPAL -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - MÓDULO DE PRODUTOS\n");
    printf("(2) - MÓDULO DE VENDAS\n");
    printf("(3) - MÓDULO DE CLIENTES\n");
    printf("(4) - MÓDULO DE FUNCIONÁRIOS\n"); //ideia: funcionário do mês ??
    printf("(5) - RELATÓRIO\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}

void menusobre (void){ 
    printf("------------------------------------------------\n"); //descrição do projeto
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("----------------- MENU SOBRE -------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf("Departamento de Computação e Tecnologia\n" );
    printf("Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido para obtenção da nota da disciplina Programação.\n");
    printf("O foco principal do sistema é fazer um modelo que consiga gerenciar uma loja de coveniência, diante\n");
    printf("disso, os módulos e funcionalidades do projeto foram criados voltados para facilitar e otimizar os\n");
    printf("processos realizados em uma coveniência.\n");
    printf("------------------------------------------------\n");

}

void menuequipe (void){ 
    printf("------------------------------------------------\n"); //descrição da equipe
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("----------------- MENU EQUIPE ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf("Departamento de Computação e Tecnologia\n" );
    printf("Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
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

void cadastrarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("-------------- CADASTRAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CÓDIGO: \n"); //chave ser gerada automaticamente ou ser data+hora
    printf("CÓDIGO DO VENDEDOR: \n");
    printf("CÓDIGO DO PRODUTO: \n");
    printf("QUANTIDADE: \n");
    printf("VALOR: \n");
    printf("------------------------------------------------\n");

}

void editarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("---------------- EDITAR VENDA ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    printf("CÓDIGO DO VENDEDOR: \n");
    printf("CÓDIGO DO PRODUTO: \n");
    printf("QUANTIDADE: \n");
    printf("VALOR: \n");
    printf("------------------------------------------------\n");

}

void excluirvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("---------------- EXCLUIR VENDA -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DA VENDA: \n");
    printf("------------------------------------------------\n");

}

void pesquisarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("-------------- PESQUISAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O CÓDIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    
}

void listarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("--------------- LISTAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("VENDAS CADASTRADAS: \n");
    printf("------------------------------------------------\n");
    
}

void cadastrarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("------------ CADASTRAR FUNCIONARIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF: \n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SALÁRIO: \n");
    printf("------------------------------------------------\n");

}
void editarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("------------- EDITAR FUNCIONARIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCIONÁRIO QUE IRÁ EDITAR: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SALÁRIO: \n");
    printf("------------------------------------------------\n");

}

void excluirfuncionario (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("------------- EXCLUIR FUNCIONARIOS -------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCIONÁRIO QUE DESEJA EXCLUIR: \n");
    printf("------------------------------------------------\n");
}

void pesquisarfuncionario (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("------------ PESQUISAR FUNCIONARIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCIONÁRIO QUE DESEJA PESQUISAR: \n");
    printf("------------------------------------------------\n");
}

void listarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GESTÃO PARA LOJA DE COVENIÊNCIA -------\n");
    printf("------------- LISTAR FUNCIONARIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("FUNCIONÁRIOS CADASTRADOS: \n");
    printf("------------------------------------------------\n");
}
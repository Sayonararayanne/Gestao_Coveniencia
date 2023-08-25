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
    printf("------------------------------------------------\n"); //menu principal com os m�dulos dispon�veis 
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- MENU PRINCIPAL -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("(1) - M�DULO DE PRODUTOS\n");
    printf("(2) - M�DULO DE VENDAS\n");
    printf("(3) - M�DULO DE CLIENTES\n");
    printf("(4) - M�DULO DE FUNCION�RIOS\n"); //ideia: funcion�rio do m�s ??
    printf("(5) - RELAT�RIO\n");
    printf("(0) - SAIR\n");
    printf("------------------------------------------------\n");

}

void menusobre (void){ 
    printf("------------------------------------------------\n"); //descri��o do projeto
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("----------------- MENU SOBRE -------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf("Departamento de Computa��o e Tecnologia\n" );
    printf("Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
    printf("\n");
    printf("Projeto desenvolvido para obten��o da nota da disciplina Programa��o.\n");
    printf("O foco principal do sistema � fazer um modelo que consiga gerenciar uma loja de coveni�ncia, diante\n");
    printf("disso, os m�dulos e funcionalidades do projeto foram criados voltados para facilitar e otimizar os\n");
    printf("processos realizados em uma coveni�ncia.\n");
    printf("------------------------------------------------\n");

}

void menuequipe (void){ 
    printf("------------------------------------------------\n"); //descri��o da equipe
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("----------------- MENU EQUIPE ------------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("Universidade Federal do Rio Grande do Norte - CERES\n" );
    printf("Departamento de Computa��o e Tecnologia\n" );
    printf("Desenvolvido por @sayonararayanne -- desde Ago, 2023\n" );
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

void cadastrarvendas (void){ 
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

}

void editarvendas (void){ 
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

}

void excluirvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("---------------- EXCLUIR VENDA -----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DA VENDA: \n");
    printf("------------------------------------------------\n");

}

void pesquisarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("-------------- PESQUISAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("INFORME O C�DIGO DA VENDA: \n");
    printf("------------------------------------------------\n");
    
}

void listarvendas (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("--------------- LISTAR VENDAS ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("VENDAS CADASTRADAS: \n");
    printf("------------------------------------------------\n");
    
}

void cadastrarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------ CADASTRAR FUNCIONARIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF: \n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SAL�RIO: \n");
    printf("------------------------------------------------\n");

}
void editarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- EDITAR FUNCIONARIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE IR� EDITAR: \n");
    printf("------------------------------------------------\n");
    printf("NOME: \n");
    printf("TELEFONE: \n");
    printf("CARGO: \n");
    printf("SAL�RIO: \n");
    printf("------------------------------------------------\n");

}

void excluirfuncionario (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- EXCLUIR FUNCIONARIOS -------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE DESEJA EXCLUIR: \n");
    printf("------------------------------------------------\n");
}

void pesquisarfuncionario (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------ PESQUISAR FUNCIONARIOS ------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("CPF DO FUNCION�RIO QUE DESEJA PESQUISAR: \n");
    printf("------------------------------------------------\n");
}

void listarfuncionarios (void){ 
    printf("------------------------------------------------\n");
    printf("-------- GEST�O PARA LOJA DE COVENI�NCIA -------\n");
    printf("------------- LISTAR FUNCIONARIOS --------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("FUNCION�RIOS CADASTRADOS: \n");
    printf("------------------------------------------------\n");
}
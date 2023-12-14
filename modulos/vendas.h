struct vendas
{
    char cod[5];
    char cpf_ven[12]; //cpf vendedor
    char cpf_cli[12]; //cpf cliente
    char codprod[14];
    char quant[11];
    char valor[11];
    char dataHora[40];
    char status;
    struct vendas *next;
};
typedef struct vendas Vendas;

int modulovendas(void);
char menuvendas(void);
Vendas* cadastrarvendas(void);
void gravavendas(Vendas*);
void exibevendas(Vendas*);
void editarvendas(void);
void excluirvendas(void);
Vendas* pesquisarvendas(void);
void geraDatahora(char*);
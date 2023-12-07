struct vendas
{
    char cod[12];
    char codven[12]; //cpf
    char cpf[12]; 
    char codprod[14];
    char quant[11];
    char valor[11];
    char status;
    struct vendas *next;
};
typedef struct vendas Vendas;

int modulovendas(void);
char menuvendas (void);
Vendas* cadastrarvendas (void);
void gravavendas (Vendas*);
void exibevendas (Vendas*);
void editarvendas (void);
void excluirvendas (void);
Vendas* pesquisarvendas (void);
struct vendas
{
    char cod[11];
    char codven[11]; //cpf
    char codprod[13];
    char quant[10];
    char valor[10];
    struct vendas *next;
};
typedef struct vendas Vendas;

void modulovendas(void);
char menuvendas (void);
Vendas cadastrarvendas (void);
void editarvendas (void);
void excluirvendas (void);
void pesquisarvendas (void);
void listarvendas (void);
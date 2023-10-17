struct clientes
{
    char cpf[11];
    char nome[100];
    char tel[12];
    int dia;
    int mes;
    int ano;
    struct clientes *next;
};
typedef struct clientes Clientes;


void moduloclientes (void);
char menuclientes (void);
Clientes cadastrarclientes (void);
void editarclientes (void);
void excluirclientes (void);
void pesquisarclientes (void);
void listarclientes (void);
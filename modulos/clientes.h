struct clientes
{
    char cpf[12];
    char nome[101];
    char tel[13];
    char data[11];
    char status;
    struct clientes *next;
};
typedef struct clientes Clientes;

int moduloclientes (void);
char menuclientes (void);
Clientes* cadastrarclientes (void);
void gravaclientes (Clientes*);
void exibeclientes(Clientes*);
void editarclientes (void);
void excluirclientes (void);
Clientes* pesquisarclientes (void);
int verificaCPFDuplicado(const char* cpf);

struct produtos 
{
    char cod[11];
    char nome[100];
    char marca[50];
    char desc[100];
    char quant[10];
    char tip[50];
    char valor[10];
    int dia;
    int mes;
    int ano;
    struct produtos *next;
};
typedef struct produtos Produtos;

void moduloprodutos(void);
char menuprodutos(void);
Produtos cadastrarprodutos (void);
void editarprodutos (void);
void excluirprodutos (void);
void pesquisarprodutos (void);
void listarprodutos (void);
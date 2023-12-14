struct produtos 
{
    char cod[14];
    char nome[101];
    char marca[51];
    char desc[101];
    char quant[11];
    char tip[51];
    char valor[11];
    char status;
    struct produtos *next;
};
typedef struct produtos Produtos;

int moduloprodutos(void);
char menuprodutos(void);
Produtos* cadastrarprodutos (void);
void gravaprodutos (Produtos*);
void exibeprodutos (Produtos*);
void editarprodutos (void);
void excluirprodutos (void);
Produtos* pesquisarprodutos (void);

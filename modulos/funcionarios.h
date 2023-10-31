    struct funcionarios
{
    char cpf[12];
    char nome[101];
    char tel[13];
    char cargo[52];
    char sala[9];
    char data[9];
    char status;
    struct funcionarios *next;
};
typedef struct funcionarios Funcionarios;

int modulofuncionarios (void);
char menufuncionarios (void);
Funcionarios* cadastrarfuncionarios (void);
void gravafuncionarios (Funcionarios*);
void exibefuncionarios (Funcionarios*);
void editarfuncionarios (void);
void excluirfuncionarios (void);
void pesquisarfuncionarios (void);
void listarfuncionarios (void);
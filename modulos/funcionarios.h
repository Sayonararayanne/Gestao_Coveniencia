    struct funcionarios
{
    char cpf[11];
    char nome[100];
    char tel[12];
    char cargo[51];
    char sala[8];
    int dia;
    int mes;
    int ano;
    struct funcionarios *next;
};
typedef struct funcionarios Funcionarios;

void modulofuncionarios (void);
char menufuncionarios (void);
Funcionarios cadastrarfuncionarios (void);
void editarfuncionarios (void);
void excluirfuncionarios (void);
void pesquisarfuncionarios (void);
void listarfuncionarios (void);
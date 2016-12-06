struct no{
    int dado;
    struct no *prox;
};
typedef struct no tno;
struct fila{
    tno *ini;
    tno *fim;
};
typedef struct fila tfila;
void inicializar(tfila *p);
int vazia(tfila p);
void insere(tfila *p,int dado);
int retira(tfila *p);

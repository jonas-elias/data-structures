typedef struct fila Fila;

Fila *cria(); // alocar memória
void insere(Fila *f, float valor); // inserir elemento fim
float retira(Fila *f); // remover elemento do inicio
int vazia(Fila *f); // ver se está vazia
void libera(Fila *f); // utilizar o free memory
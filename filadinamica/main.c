#include <stdio.h>
#include "filadinamica.h"
int main () {
    tfila a, *p=&a;
    int i;
    inicializar(p);
    for (i=0; i<10; i++) insere(p, i);
    for (i=0; i<10; i++) printf ("%d ", retira(p));
    printf ("\n");
    return 0;
}

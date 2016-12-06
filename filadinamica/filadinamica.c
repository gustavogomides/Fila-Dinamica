#include "filadinamica.h"
#include <stdlib.h>
void inicializar(tfila *p){
    p->ini=NULL;
    p->fim=NULL;
}
int vazia(tfila p){
    return p.ini==NULL;
}
void insere(tfila *p,int va){
    tno *aux;
    aux=(tno*)malloc(sizeof(tno));
    aux->dado=va;
    aux->prox=NULL;
    if (aux) { ///aux!=NULL
        if(vazia(*p)){
            p->ini=aux;
            p->fim=aux;
        }
        else{
            p->fim->prox=aux;
            p->fim=aux;
        }
    }
}
int retira(tfila *p){
    tno *aux;
    int va;
    if (vazia(*p)) return -1;
    aux=p->ini;
    va=p->ini->dado;
    p->ini=p->ini->prox;
    free(aux);
    if (vazia(*p)){
         p->fim=NULL;
    }
    return va;
}

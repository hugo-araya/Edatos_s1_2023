#include <stdio.h>
#include <stdlib.h>

struct tpila
{
    int dato;
    struct tpila *sig;
};

void crear(struct tpila **pila);
int vacia(struct tpila *pila);
void push(struct tpila *pila, int elem);
void pop(struct tpila *pila, int *elem);

void crear(struct tpila **pila){
    *pila = (struct tpila *) malloc(sizeof(struct tpila)); 
    (*pila)->sig = NULL;
}

int vacia(struct tpila *pila){
    return (pila->sig == NULL);
}

void push(struct tpila *pila, int elem){
    struct tpila *nuevo;
    nuevo = (struct tpila *) malloc(sizeof(struct tpila)); 
    nuevo->dato = elem;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(struct tpila *pila, int *elem){
    struct tpila *aux;
    aux = pila->sig;
    *elem = aux->dato;
    pila->sig = aux->sig;
    free(aux);
}

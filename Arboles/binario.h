#include <stdlib.h>

struct tarbol{
    int dato;
    struct tarbol *izq;
    struct tarbol *der;
};

typedef struct tarbol ARBOL;

ARBOL *nuevoNodo(int dato);
void insertar(ARBOL *nodo, int dato);
void preorden(ARBOL *nodo);
void inorden(ARBOL *nodo);
void postorden(ARBOL *nodo);

ARBOL *nuevoNodo(int dato) {
    // Solicitar memoria
    ARBOL *nodo;
    nodo = (ARBOL *)malloc(sizeof(ARBOL));
    // Asignar el dato e iniciar hojas
    nodo->dato = dato;
    nodo->izq = nodo->der = NULL;
    return nodo;
}

void insertar(ARBOL *nodo, int dato) {
    // Si es mayor va a la derecha
    if (dato > nodo->dato) {
        if (nodo->der == NULL) {
            nodo->der = nuevoNodo(dato);
        } else {
            insertar(nodo->der, dato);
        }
    } else {
        // Si no, a la izquierda
        if (nodo->izq == NULL) {
            nodo->izq = nuevoNodo(dato);
        } else {
            insertar(nodo->izq, dato);
        }
    }
}


void preorden(ARBOL *nodo) {
    if (nodo != NULL) {
        printf("%d,", nodo->dato);
        preorden(nodo->izq);
        preorden(nodo->der);
    }
}

void inorden(ARBOL *nodo) {
    if (nodo != NULL) {
        inorden(nodo->izq);
        printf("%d,", nodo->dato);
        inorden(nodo->der);
    }
}

void postorden(ARBOL *nodo) {
    if (nodo != NULL) {
        postorden(nodo->izq);
        postorden(nodo->der);
        printf("%d,", nodo->dato);
    }
}

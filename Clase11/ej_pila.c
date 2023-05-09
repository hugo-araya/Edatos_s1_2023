#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(void){
    struct tpila *pila;
    int elem;   
    crear(&pila);
    if (vacia(pila)) 
        printf("\nPila vacia!\n"); 
    push(pila, 1);
    pop(pila, &elem);
    printf("Elemento: %d\n", elem);
return 0; 
}
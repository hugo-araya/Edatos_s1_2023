#include <stdio.h>
#include <stdlib.h>
#include "pila1.h"

int main(){ 
    struct tpila *tope; 
    char elem, sale;
    FILE *ent;
    ent = fopen("parentesis.c","rt"); 
    while (!feof(ent)){
        elem=fgetc(ent);
        printf ("\nLeido %c",elem); 
        if (elem=='{')
            push(tope, elem); 
        else
            if (elem=='}') {
                if (vacia(tope)) {
                    printf("\nError 1: Falta der \n");
                    exit(0); 
                }
               pop(tope, &sale);
            }
    }
    if (vacia(tope))
        printf("\nNo hay Error\n");
    else
        printf("\nError 2: Falta izq\n");
    fclose(ent);
    return 0;
}
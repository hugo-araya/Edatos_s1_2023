#include <stdio.h>
#include "head_lista1.h"

int main(){
    LISTA l, z;
    z = crea_lista();
    l = crea_lista();
    muestra_lista(l);
    l = add_final(l, 5);
    muestra_lista(l);
    l = add_final(l, 7);
    muestra_lista(l);
    l = add_final(l, 9);
    muestra_lista(l);
    z = invierte_lista(l);
    muestra_lista(z);
    return 0;
}

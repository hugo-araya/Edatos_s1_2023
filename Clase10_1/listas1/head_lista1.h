#define N 10
#define NULO -1
#define VACIA -1

typedef enum {FALSE, TRUE} BOOLEAN;

typedef struct{
    int punt;
    int dato[N];
    int sig[N];
} LISTA;

// Funciones basicas
LISTA crea_lista();
void muestra_lista(LISTA l);
BOOLEAN lista_vacia(LISTA l);
BOOLEAN lista_llena(LISTA l);
int largo_lista(LISTA l);

// Funciones primitivas
int buscar_mem(LISTA l); // Equivalente a MALLOC

// Funciones primitivas que agregan
LISTA add_final(LISTA l, int elem);
LISTA add_inicio(LISTA l, int elem);
LISTA add_pos(LISTA l, int elem, int despues);

// Funciones primitivas que eliminan nodos
LISTA del_final(LISTA l, int *devolver);
LISTA del_inicio(LISTA l);
LISTA del_pos(LISTA l, int posicion);

// Funciones derivadas

LISTA invierte_lista(LISTA l);

// Funciones de construccion
void muestra (LISTA l);
void largo(LISTA l);

LISTA crea_lista(){
    LISTA aux;
    int i;
    for (i = 0; i < N; i++){
        aux.dato[i] = VACIA;
        aux.sig[i] = NULO;
    }
    aux.punt = NULO; // Lista Vacia
    return aux;
}

void muestra_lista(LISTA l){
    int p;
    if (lista_vacia(l) == FALSE){
        p = l.punt;
        while (p != NULO){
            printf("%d - ", l.dato[p]);
            p = l.sig[p];
        }
        printf("\n");
    }
    else{
        printf("<< Lista Vacia >>\n");
    }
}

BOOLEAN lista_vacia(LISTA l){
    if (l.punt == NULO)
        return TRUE;
    else
        return FALSE;
}

BOOLEAN lista_llena(LISTA l){
    if (largo_lista(l) < N)
        return FALSE;
    else
        return TRUE;
}

int largo_lista(LISTA l){
    int cont = 0;
    int p;
    if (lista_vacia(l) == FALSE){
        p = l.punt;
        cont++;
        while (l.sig[p] != NULO){
            p = l.sig[p];
            cont++;
        }
    }
    return cont;
}

int buscar_mem(LISTA l){
    int i = 0;
    while ((l.dato[i] != VACIA) && (i < N)){
        i++;
    }
    return i;
}

LISTA add_final(LISTA l, int elem){
    int q, r;
    if (lista_llena(l) == TRUE){
        printf("<< Lista Llena >>\n");
        return l;
    }
    else{
        q = buscar_mem(l);
        if (l.punt == NULO){
            l.punt = q;
            l.dato[q] = elem;
            l.sig[q] = NULO;
        }
        else{
            r = l.punt;
            while (l.sig[r] != NULO){
                r = l.sig[r];
            }
            l.dato[q] = elem;
            l.sig[r] = q;
        }
        return l;
    }
}

LISTA add_inicio(LISTA l, int elem){
    int q, r;
    if (lista_llena(l) == TRUE){
        printf("<< Lista Llena >>\n");
        return l;
    }
    else{
        q = buscar_mem(l);
        if (l.punt == NULO){
            l.punt = q;
            l.dato[q] = elem;
            l.sig[q] = NULO;
        }
        else{
            l.dato[q] = elem;
            l.sig[q] = l.punt;
            l.punt = q;
        }
        return l;
    }
}

LISTA add_pos(LISTA l, int elem, int despues){

    return l;
}

LISTA del_final(LISTA l, int *devolver){
    int p, q;
    if (lista_vacia(l) == FALSE){
        p = l.punt;
        if (l.sig[p] == NULO){
            *devolver = l.dato[p];
            l.dato[p] = VACIA;
            l.punt = NULO;
        }
        else{
            while (l.sig[p] != NULO){
                q = p;
                p = l.sig[p];
            }
            *devolver = l.dato[p];
            l.dato[p] = VACIA;
            l.sig[q] = NULO;
        }
    }
    else{
        printf("<< Lista Vacia >>\n");
    }
    return l;
}

LISTA del_inicio(LISTA l){
    int p, q;
    if (lista_vacia(l) == FALSE){
        p = l.punt;
        if (l.sig[p] == NULO){
            l.dato[p] = VACIA;
            l.punt = NULO;
        }
        else{
            l.dato[p] = VACIA;            
            l.punt = l.sig[p];
            l.sig[p] = NULO;
        }
    }
    else{
        printf("<< Lista Vacia >>\n");
    }
    return l;
}

LISTA del_pos(LISTA l, int posicion){

    return l;
}

// Funciones derivadas

LISTA invierte_lista(LISTA l){
    LISTA aux;
    int devolver;
    while (lista_vacia(l) == FALSE){
        l = del_final(l, &devolver);
        aux = add_final(aux, devolver);
    }
    return aux;
}


// Funciones de construccion
void muestra (LISTA l){
    int i;
    printf("Puntero: %d\n", l.punt);
    for (i = 0 ; i < N; i++){
        printf("%4d - %4d\n", l.dato[i],l.sig[i]);
    }
}

void largo(LISTA l){
    printf("Largo lista : %d\n", largo_lista(l));
}
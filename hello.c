#include<stdio.h>
#define PI 3.14
#define Entero int
#define Imprimir printf
#define Retorno return
#define Principal main

int Principal(){
    Entero salida;
    salida = 3 * PI;
    Imprimir("Hola Mundo\n");
    Imprimir("Salida: %d\n",salida);
    Retorno 0;
}
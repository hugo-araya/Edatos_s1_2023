#include<stdio.h>

int main(){
    int a, b;
    int *punt_a;
    a = 23;
    b = 100;
    punt_a = &a;
    printf("Valor: %d\n", a);
    printf("Direccion: %p\n",&a);
    printf("Direccion: %p\n",punt_a);
    a = a + 1;
    punt_a = punt_a + 1;
    printf("Valor: %d\n", a);
    printf("Direccion: %p\n",&a);
    printf("Direccion: %p\n",punt_a);
    printf("Contenido de la siguiente direcion: %d\n", *punt_a);
    return 0;
}
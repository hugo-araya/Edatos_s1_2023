
#include <stdio.h>
#define N 20
int main(){
    int n[ N ]; /* n es un arreglo de 10 enteros */ 
    int i; /* contador */
    /* inicializa los elementos n a 0 del arreglo */ 
    for ( i = 0; i < N; i++ ) {
        n[ i ] = 20 * i; /* establece el elemento i-esimo a 0 */ 
    }
    printf( "Elemento Valor\n" );
    /* muestra el contenido del arreglo n en forma tabular */ 
    for ( i = 0; i < N; i++ ) {
        printf( "%d%d\n", i, n[ i ] ); 
    }
    return 0; 
}
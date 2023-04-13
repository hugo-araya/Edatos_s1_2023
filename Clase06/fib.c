#include <stdio.h>

int secreto(int n);

int main(){
    int n = 100;
    printf("\nFinal es : %d\n", secreto(n));
    return 0;
}

int secreto(int n){
    long i, aux, menor, mayor;
    if (n<=1){
        return 1; 
    }
    else{
        mayor = 1;
        menor = 1;
        printf("1 - ");
        printf("1 - ");
        for (i = 2; i <n; i++){
            aux = menor;
            menor = mayor;
            mayor = aux + menor;
            printf("%ld - ", mayor);
        }
        return mayor;
    }
}
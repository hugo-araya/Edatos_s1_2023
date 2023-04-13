#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#define MAXIMO 100000
int main(){
    struct timeval t_1,t_2;   
    double tiempo; 
    int i,j,aux, N, cont;
    int array[MAXIMO], numero;
    // t_1=time(NULL); 
    for (i=0; i < MAXIMO;i++ ){
        array[i] = rand();
    }
    /*
    for (i=0; i < N;i++ ){
        printf("%d\n", array[i]);
    }
    */
    for (cont = 10000; cont < MAXIMO; cont = cont + 10000){
        // Bloque a medir el tiempo  
        N = cont;  
        gettimeofday(&t_1,NULL); 
        for(i=0;i<N-1;i++){   
            for(j=0;j<N-i-1;j++){ 
                if(array[j+1]<array[j]){       
                    aux=array[j+1];       
                    array[j+1]=array[j];  
                    array[j]=aux;
                }   
            } 
        } 
        gettimeofday(&t_2,NULL); 
        tiempo = (t_2.tv_sec - t_1.tv_sec)*1000 + (t_2.tv_usec - t_1.tv_usec)/1000;
        printf("Tiempo medido: %g milisegundo\n", tiempo); 
    }
/*
    for (i=0; i < N;i++ ){
        printf("%d\n", array[i]);
    }
    printf("\n");
*/
    return 0;
}

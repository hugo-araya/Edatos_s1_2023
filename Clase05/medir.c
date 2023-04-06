#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int main(){
    time_t t_1,t_2;    
    int i,j,aux;
    int array[N], numero;
    t_1=time(NULL); 
    for (i=0; i < N;i++ ){
        scanf("%d", &numero);
        array[i] = numero;
    }
    
    // Bloque a medir el tiempo    
    // t_1=time(NULL); 
    for(i=0;i<N-1;i++){   
        for(j=0;j<N-i-1;j++){ 
            if(array[j+1]<array[j]){       
                aux=array[j+1];       
                array[j+1]=array[j];  
                array[j]=aux;
            }   
        } 
    } 
    t_2=time(NULL);
    printf("%lf\n", difftime(t_2,t_1)); 
    return 0;
}

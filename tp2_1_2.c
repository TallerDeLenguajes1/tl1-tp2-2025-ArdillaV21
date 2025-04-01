#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i, contador;
    double *ptr;
    double vt[N];
    ptr = vt;

    for(i = 0;i<N; i++){
        *(ptr + i) = 1+rand()%100;
        printf("%f\n",  *(ptr + i));
        
    }
    

    return 0;
}
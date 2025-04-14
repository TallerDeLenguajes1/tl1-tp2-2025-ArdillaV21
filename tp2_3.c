#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int i, j;
int mt[N][M];

int main() {
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            *((int *)mt + i * M + j) = 1 + rand() % 100;  
            printf("%d ", *((int *)mt + i * M + j));
        }
        printf("\n");
    }

    return 0;
}

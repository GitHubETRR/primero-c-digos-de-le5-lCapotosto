#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamano 20

void randomvec(int vec[tamano]);
void notvec(int original[tamano], int invertido[tamano]);
void mostrarvec(int vec[tamano]);

int main() {
    int vecOriginal[tamano];
    int vecInvertido[tamano];
 
    randomvec(vecOriginal);
    
    printf("Vector original:\n");
    mostrarvec(vecOriginal);
 
    notvec(vecOriginal, vecInvertido);

    printf("Vector invertido:\n");
    mostrarvec(vecInvertido);
    
    return 0;
}

void randomvec(int vec[tamano]) {
    
    srand(time(NULL));
    
    for (int i = 0; i < tamano; i++) {
        vec[i] = rand() % 71 + 20;
    }
}

void notvec(int original[tamano], int invertido[tamano]) {
    for (int i = 0; i < tamano; i++) {
        invertido[i] = original[tamano - 1 - i];
    }
}

void mostrarvec(int vec[tamano]) {
    
    for (int i = 0; i < tamano; i++) {
        printf("%d ", vec[i]);
    }
    
    printf("\n");
}
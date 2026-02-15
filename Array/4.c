#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamano 100

int busc_max(int vec[tamano]);
int busc_min(int vec[tamano]);
void pos_max(int vec[tamano], int max);

int main() {
    int vec[tamano];
    
    srand(time(NULL));
    
    for (int i=0; i<tamano; i++) {
        vec[i] = rand() %31 + 10; 
    }
    
   
    int maxi = busc_max(vec);
    printf("Valor maximo: %d\n", maxi);
    
   
    int mini = busc_min(vec);
    printf("Valor minimo: %d\n", mini);
    
    pos_max(vec, maxi);

}


int busc_max(int vec[tamano]) {
    int max = vec[0];
    
    for (int i=1; i<tamano; i++) {
        if (vec[i]>max) {
            max = vec[i];
        }
    }
    return max;
}


int busc_min(int vec[tamano]) {
    int min = vec[0];
    
    for (int i=1; i<tamano; i++) {
        if (vec[i] < min) {
            min = vec[i];
        }
    }
    
    return min;
}

void pos_max(int vec[tamano], int max) {
    
    printf("Posiciones donde hay un maximo (%d):\n", max);
    
    for (int i=0; i<tamano; i++) {
        if (vec[i] == max) {
            printf("Posicion %d\n", i);
        }
    }
}
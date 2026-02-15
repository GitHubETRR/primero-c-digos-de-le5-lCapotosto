#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamano 50

int Nrepes(int vec[tamano]);

int main() {
    int vec[tamano];
    srand(time(NULL));
    
    for (int i=0; i<tamano; i++) {
        vec[i] = rand() %11+10;
    }
    int repes = Nrepes(vec);
    
    printf("El mayor valor se repite %d veces\n", repes);
}



int Nrepes(int vec[tamano]) {
    int mayor = vec[0]; 
    int mayores = 0;

    for (int i=1; i<tamano; i++) {
        if (vec[i]>mayor) {
            mayor = vec[i];
        }
    }
    
    for (int i=0; i<tamano; i++) {
        if (vec[i] == mayor) {
            mayores++;
        }
    }
    
    return mayores;
}

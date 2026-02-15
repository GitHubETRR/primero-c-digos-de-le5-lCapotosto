#include <stdio.h>
#define tamano 3 

int cuentita(int vecA[tamano], int vecB[tamano]);

int main() {

    int vecA[tamano]={25, 23, 53};
    int vecB[tamano]={43, 55, 16};
    
    int resultado = cuentita(vecA, vecB);
    
    printf("El producto escalar entre A y B es: %d\n", resultado);
}

int cuentita(int vecA[tamano], int vecB[tamano]) {
    
    int suma = 0;
    
    for (int i=0; i<tamano; i++) {
        suma = suma+vecA[i]*vecB[i];
    }
    return suma;
}

#include <stdio.h>
#define tamano 5

int suma(int vec[tamano]);
void promedio(int suma);

int main() {
	int vec[tamano] = {10, 10, 10, 10, 10};
	int resuma = suma(vec);
	promedio(resuma);
	return 0;
}

int suma(int vec[tamano]) {
	int suma=0;
	for (int i=0; i<tamano; i++) {
		suma = suma+vec[i];
	}
	printf("El resultado de la suma es %d\n", suma);
	return suma;
}

void promedio(int suma) {
	float prom = suma/tamano;
	printf("El resultado del promedio es %.2f\n", prom);

}

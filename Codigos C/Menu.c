#include <stdio.h>
#include <unistd.h>

void cas1 (void);
void cas2 (void);
int par(int);
int cuad(int);

int main() {
    int opcion;

    do {
        printf("Bienvenido al menu\n");
        printf("\nSeleccione una opcion:\n");
        printf("opcion 1 --> Identificar si un numero es par o impar\n");
        printf("opcion 2 --> Encontrar el cuadrado perfecto mas cercano\n");
        printf("opcion 3 --> Salir\n");

        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                cas1();
                break;
            case 2:
                cas2();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                sleep(2);
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while(opcion != 3);

    return 0;
}

int par(int numero) {
    
    int mitad = numero / 2;
    if (numero == mitad * 2) {
        return 1;
    } else {
        return 0;
    }
}


void cas1(void) {
    int numero;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);
    if (par(numero)) {
        printf("El numero %d es par.\n", numero);
    } 
    else {
    printf("El numero %d es impar.\n", numero);
    }
   
}


int cuad(int numero) {
    if (numero < 0) {
        
        return 0;
    }

    int i = 0;
    while (i * i < numero) {
        i++;
    }

    int anterior = (i - 1) * (i - 1);
    int siguiente = i * i;

    if ((numero - anterior) <= (siguiente - numero)) {
        return anterior;
    } else {
        return siguiente;
    }
}


void cas2(void){
    int numero;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);
    int cuadrado = cuad(numero);
    printf("El cuadrado perfecto mas cercano a %d es %d.\n", numero, cuadrado);

}


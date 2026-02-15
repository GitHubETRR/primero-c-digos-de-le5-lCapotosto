//2) Hacer un programa que capture un texto y por medio de una función llamada pasaMinuscula
// transforme el mismo a minúscula y lo devuelva al programa principal.

#include <stdio.h>
#include <ctype.h>


char* pasaMinuscula(char *cad);

int main() {
    char texto[50];  

    printf("Ingresá un texto: ");
    scanf("%[^\n]",texto);
    
    char *textochiquito = pasaMinuscula(texto);
    printf("El texto en minúsculas es: %s\n", textochiquito);
}

char* pasaMinuscula(char *cad) {
    
    int i =0;
    while (cad[i]!='\0') {
        cad[i] = tolower(cad[i]);
        i++;
    }
    return cad;
}
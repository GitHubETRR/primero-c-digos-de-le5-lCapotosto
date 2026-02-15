//3) Hacer un programa que capture un texto y por medio de una función llamada pasaMinuscula
// transforme el mismo a minúscula y lo devuelva al programa principal uan vez logrado eso, 
//realizar una función llamada vocales que me cuente cuantas son vocales.

#include <stdio.h>
#include <ctype.h>

char* pasaMinuscula(char *cad);
int vocales (char *cad);

int main() {
    char texto[50];  

    printf("Ingresá un texto: ");
    scanf("%[^\n]",texto);
    
  
    char *textochiquito = pasaMinuscula(texto);
    printf("El texto en minusculas es: %s\n", textochiquito);
    
    
    int voc=vocales(texto);
    printf("hay %d vocales\n", voc);
}

char* pasaMinuscula(char *cad) {
    
    int i =0;
    while (cad[i]!='\0') {
        cad[i] = tolower(cad[i]);
        i++;
    }
    return cad;
}

int vocales(char *cad) {
    
    int cantidad = 0;
    int i = 0;
    
    while (cad[i] !='\0') {
        char A = cad[i];
        if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u') {
            cantidad++;
        }
        i++;
    }
    return cantidad;
}

















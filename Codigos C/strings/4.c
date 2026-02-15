//4) Hacer un programa que capture un texto y por medio de una función llamada Invertir
//transforme el mismo en otra cadena al revés y lo devuelva 
//al programa principal,  cada función debe ser creada por uds.

#include <stdio.h>
#include <stdlib.h> 

char* Invertir(char *cadena);
    
int main(){
    char texto[50]; 

    printf("Ingresa un texto: ");
    scanf("%[^\n]",texto);

    char *textoInvertido = Invertir(texto);
    printf("El texto invertido es: %s\n", textoInvertido);

}

    
char* Invertir(char *cadena) {
    int largo = 0;
    char *invertida;
    
    while (cadena[largo] != '\0') {
        largo++;
    }
    
    for (int i = 0; i < largo; i++) {
        invertida[i] = cadena[largo - 1 - i];
    }

    return invertida; 
}
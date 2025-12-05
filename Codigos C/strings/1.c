//1) Hacer un programa que capture un texto y por medio de una función llamada Dimension calcule el largo de 
//una cadena y la devuelva al programa principal.
#include <stdio.h>
#include <string.h>
#define tamano 50
int largura(char cad[]);

int main(){
    char texto[tamano];
    int largo;

    printf("Ingresá un texto: ");
    scanf("%[^\n]",texto);
    
    largo=largura(texto);
    
    printf("El texto tiene %d caracteres de largo",largo);
}

int largura(char cad[]){
    int largo=0;
    
    while (cad[largo] != '\0') {
        largo++;
    }
    
    return largo;  
}

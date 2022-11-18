#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Crear un programa que permita el ingreso de una frase/palabra por teclado y luego un
carácter. Se debe reemplazar el carácter ingresado dentro de la frase por un ‘!’, y luego
mostrar el mensaje modificado. En caso de que no exista el carácter dentro de la frase,
indicarlo por pantalla.
*/

int main(void) {
    char palabra[30];
    char letra;

    printf("Bienvenido Ingrese una palabra/frase (separar con guiones):\n");
    scanf("%s",&palabra);
    __fpurge(stdin);
    printf("Ingrese la letra a reemplazar:\n");
    scanf("%c",&letra);
    for (int u=0;u<30;u++){
        if (palabra[u]==letra) palabra[u]='!';
        if (palabra[u]=='-') palabra[u]=' ';
    }
    printf("%s \n",palabra);
    printf("Gracias por usar el software");
    return 0;
}

#include <stdio.h>
#include <string.h>

/*
Crear un programa que pida una palabra por teclado. Indicar por pantalla la cantidad de
caracteres que tiene sin contar el ‘\0’.
*/

int main(void) {
    char palabra[20];

    printf("Bienvenido, Ingrese una palabra:\n");
    scanf("%s",&palabra);
    for (int u=0;u<20;u++){
        if (palabra[u]=='\0') {
            printf("Esta palabra tiene %d caracteres\n",u);
            break;
        }
    }
    printf("Gracias por usar el software");
    return 0;
}

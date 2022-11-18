#include <stdio.h>

/*
Crear un programa en el cual, el usuario ingrese un carácter por teclado y tenga que
adivinar su correspondiente en código ascii. El programa debe seguir pidiendo datos hasta
que el usuario acierte, indicar por pantalla si el valor es mayor o menor en cada intento.
*/

int main(void) {
    char car;
    int intento;
    printf("Bienvenido, Ingrese un caracter: ");
    scanf("%c",&car);
    while (1){
        printf("opcion: ");
        scanf("%d",&intento);
        if (intento == car){
            printf("corecto\n");
            break;
        }else if (car>intento)printf("es mas grande\n");
        else if (car<intento)printf("es mas chico\n");
    }
    printf("Gracias por usar el software");
    return 0;
}

#include <stdio.h>

/*
Crear un programa que permita el ingreso de las notas de un curso para poder calcular su
promedio e imprimirlo por pantalla. Las notas deben estar dentro del rango 0-10 y el
ingreso de datos finaliza cuando el usuario ingresa -1. Se debe imprimir la cantidad de
notas y su promedio.
*/

int main(void) {
    float prom=0,aux=0; //promedio y auxiliar
    int numeros=0;
    char run = 1;
    printf("Bienvenido\n");
    while (run){
        while (1){
            printf("Ingrese su nota: ");
            scanf("%f",&aux);
            if (aux==-1)break;
            else if (aux<0||aux>10)printf("[%.2f] no es valido\n",aux);
            else{
                printf("se agrego: %.2f\n",aux);
                prom+=aux;
                numeros++;
            }
        }
        if (numeros!=0)prom/=numeros;
        printf("el promedio es: %.2f con %d notas\n",prom,numeros);
        printf("Ingrese \n0 para salir\n1 para continuar\n");
        scanf("%d",&run);
        if (!run)printf("Gracias por usar el software");
    }
    return 0;
}

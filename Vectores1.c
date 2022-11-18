#include <stdio.h>

/*
 Pedir por teclado las notas de 20 alumnos y almacenarlos en un vector acorde. Calcular el
promedio, la cantidad de alumnos que aprobaron y la cantidad de alumnos que deben
realizar el recuperatorio. Imprimir el vector, realizar una función por cada operación a
realizar.
*/

float notas[20],aux,prom;
int i=0,aprobo=0,desaprobo=0,cursor;

void cambiar(void);
void resultado(void);

int main(void) {
    printf("Bienvenido\npara editar un valor ingrese -1\n");
    while (i<20){
        printf("Ingrese una nota: ");
        scanf("%f",&aux);
        if (aux==-1)cambiar();
        else if (aux<0||aux>10)printf("Ingrese un valor valido\n");
        else {
            printf("Se registro %.2f en posición %d\n",aux,i);
            notas[i]=aux;
            i++;
        }
    }
    resultado();
    return 0;
}

void cambiar(void){
    printf("Que posicion deseas cambiar?: ");
    scanf("%d",&cursor);
    printf("Que nota desea agregar?: ");
    scanf("%f",&notas[cursor]);
}

void resultado(void){
    printf("0 para finalizar\n1 para realizar un cambio\n");
    scanf("%d",&cursor);
    if (cursor>0)cambiar();
    printf("El vector es:\n");
    for (int o=0;o<20;o++){
        printf("[%d] %.2f\n",o,notas[o]);
        if (notas[o]>=7)aprobo++;
        else desaprobo++;
        prom+=notas[o];
    }
    prom/=20;
    printf("El promedio es de %.2f\n",prom);
    printf("Hay %d aprobados y %d desaprobados\n",aprobo,desaprobo);
}

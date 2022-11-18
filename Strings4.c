#include <stdio.h>
#include <string.h>

/*
Escribir un programa que lea 20 caracteres. Luego de la lectura indicar cuantas "a" se
ingresaron, cuantas "e, i, o, u".
*/

int main(void) {
    unsigned int a=0,e=0,i=0,o=0,u=0;
    char cadena[20];
    printf("Bienvenido, por favor ingrese una cadena de 20 caracteres, no usar espacio\n");
    scanf("%s", &cadena);
    for (int t=0;t<20;t++){
        if (cadena[t]=='a'||cadena[t]=='A')a++;
        else if (cadena[t]=='e'||cadena[t]=='E')e++;
        else if (cadena[t]=='i'||cadena[t]=='I')i++;
        else if (cadena[t]=='o'||cadena[t]=='O')o++;
        else if (cadena[t]=='u'||cadena[t]=='U')u++;
    }
    printf("Este texto contiene:\n%d A\n%d E\n%d I\n%d O\n%d U",a,e,i,o,u);
    printf("\nGracias por usar el software");
    return 0;
}

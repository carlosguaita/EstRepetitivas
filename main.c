#include <stdio.h>

int main (int argc, char *argv[]) {

    int i=0, n;
    int num=0;
    float prom=0;

    printf("Ingrese la cantidad de numeros a obtener el promedio: ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("Ingrese el numero %d: ",i+1);
        scanf("%d",&num);
        prom+=num;
        i++;
    }
    prom=prom/5;
    printf("El promedio es: %.2f",prom);

    return 0;
}
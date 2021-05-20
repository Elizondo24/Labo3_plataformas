#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
    int i = 1;
    int cont = 1;
    while (n >= cont) { 
        i = i*cont;
        cont = cont +1;
    }
    return i ;
}

int main (int argc , char *argv []) {
    int num;
    printf("Ingrese el numero al cual desea calcular el factorial:");
    scanf("%d",&num);
    int fac = factorial (num);
    printf ("%d! = %d\n", num, fac );
    return 0;
}
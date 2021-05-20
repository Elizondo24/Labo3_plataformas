#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]){
    char car;
    printf("Digite un caracter:");
    scanf("%c",&car);
    car = tolower(car);
   if (isalpha(car))
   {
        if (car == 'a')
        {
            printf("La letra es una vocal\n");
        }
        else if (car == 'e')
        {
            printf("La letra es una vocal\n");
        }
        else if (car == 'i')
        {
            printf("La letra es una vocal\n");
        }
        else if (car == 'o')
        {
            printf("La letra es una vocal\n");
        }
        else if (car == 'u')
        {
            printf("La letra es una vocal\n");
        }
       else
        {
            printf("La letra es una consonante\n");
        }
    }
    else
    {
        printf("NO es una letra\n");
    }
    
   
    return 0;

}
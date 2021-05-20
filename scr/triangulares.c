#include <stdio.h>
 
 
int main(int argc, char const *argv[]){
 
 int i , a = 1;
 
 
 printf("A continuacion se mostraran los primeros 100 numeros triangulares\n ");
 
 for ( a =1,i = 0; a < 100,i < 100; a++ ,i++)
 {
     
     printf( "T%d = %i\n" , a, (i*(i+1))/2 );
        
 };
 printf( "\n");
 
};
#include <stdio.h>
#include <stdlib.h>
int main()
{ printf("buscar numero en el rango\n");
    int x=1;
    int inicio= 1;
    int final= 10;
    printf("el rango es %d a %d \n",inicio,final);
    if(x>inicio && x<final){
        printf("el numero %d esta dentro del rango %d - %d\n",x,inicio,final);
    } else{
   printf("el numero %d esta fuera del rango %d - %d\n",x,inicio,final); }
}




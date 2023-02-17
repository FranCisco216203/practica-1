#include <stdio.h>
#include <stdlib.h>

// Tipos de datos:
/*
    int
    float
    double
    long
    char
*/

void caratula(){
    int numero=23;
    printf("*****************************************************\n");
    printf("* hola mi nombre es francisco tengo %d años de edad *\n",numero );
    printf("* estudio en la UAM de iztapalapa                   *\n");
    printf("*                     PRACTICA 1                    *\n");
    printf("*****************************************************\n\n");
}
void muestraPI(){
    float pi= 23.141516;
    printf("el valor de pi es igual a %f \n",pi);
}

int suma (int A,int B){
    return A+B;
}


int main(){
    caratula();
    muestraPI();
    int resultado =suma(-7,-8);
    printf("%d",resultado);
    return 0;
}

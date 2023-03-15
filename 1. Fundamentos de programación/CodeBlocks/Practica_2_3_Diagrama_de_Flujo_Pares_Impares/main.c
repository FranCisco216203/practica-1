/* INFORMACION  // RODRIGO: Falta llenar la información
*
* MATERIA:
* PROGRAMADOR:
* CONTACTO:
* FECHA:
*
* COMPILAR:
* EJECUTAR:
*/

/* ALGORITMO  // RODRIGO: Falta escribir el algoritmo
    1. El programa muestra el titulo "".
    2.
    3.
    4.
    5. El programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

// RODRIGO: Especificar que hace cada método con un comentario

// Método que hace x cosa
void caratula(){
    int numero = 23;
    printf("*****************************************************\n");
    printf("* hola mi nombre es francisco tengo %d años de edad *\n",numero );
    printf("* estudio en la UAM de iztapalapa                   *\n");
    printf("*                     PRACTICA 1                    *\n");
    printf("*****************************************************\n\n");
}

// Método que hace x cosa
void muestraPI(){
    float pi= 23.141516;
    printf("el valor de pi es igual a %f \n",pi);
}

// Función que hace x cosa
int suma (int A,int B){
    return A+B;
}

// Método principal
int main(){
    printf("buscar numero en el rango\n");
    int x=1;
    int inicio= 1;
    int final= 10;
    printf("el rango es %d a %d \n",inicio,final);
    if(x>inicio && x<final){
        printf("el numero %d esta dentro del rango %d - %d\n",x,inicio,final);
    } else{
   printf("el numero %d esta fuera del rango %d - %d\n",x,inicio,final); }

   // El main debe tener return
}
/* INFORMACION
*
* MATERIA:
* PROGRAMADOR:
* CONTACTO:
* FECHA:
*
* COMPILAR:
* EJECUTAR:
*/

/* ALGORITMO
    1. El programa muestra el titulo "mayor y menor".
    2. el programa crea la primera variable he asigna un valor a esa variable
    3. el programa crea la segunda variable he asigna un valor a esa variable
    4. el programa imprime el valor de esas 2 variables
    5. el programa compara las 2 variab�es
    5.1 si el primero es mayor que el segundo se imprime que el primero es mayor que el segundo
    5.2 si el sgundo es mayor que el primero se imprime que el segundo es mauor que el primero
    5.3 si el primero y el segundo son iguales se imprime que son iguales
    6. El programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*printf("MAYOR O MENOR\n");
    int A= 5;
    int B= 5;
    printf(" el programa dira si A= %d o B= %d son mayores el uno que el otro\n", A, B);
    if(A>B){
        printf("la variable A es mayor que B \n");
    }
    if(A<B){
        printf("la variable B es mayor que A \n");
    }
    if(A==B){
        printf("la variable A y B son iguales \n");
    }
    printf("MAYOR O MENOR\n");
    int A= 10;
    int B= 5;
    printf(" el programa dira si A= %d o B= %d son mayores el uno que el otro\n", A, B);

    if(A==B){
        printf("la variable A y B son iguales \n");
    }else{
        if(A>B){
            printf("la variable A es mayor que B \n");
        }else{
            printf("la variable B es mayor que A \n");
        }
    }*/
    printf("MAYOR O MENOR\n");
    int A;
    int B;
    printf( "el valor A es  " );
    scanf("%d",&A);
    printf( "el valor B es igual a ");
    scanf("%d",&B);
    printf(" el programa dira si A= %d o B= %d son mayores el uno que el otro\n", A, B);
    if(A==B){
        printf("la variable A y B son iguales \n");
    }else{
        if(A>B){
            printf("la variable A es mayor que B \n");
        }else{
            printf("la variable B es mayor que A \n");
        }
    }

    return 0;}


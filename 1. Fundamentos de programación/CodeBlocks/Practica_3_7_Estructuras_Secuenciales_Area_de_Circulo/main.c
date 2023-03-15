/* INFORMACION
*
* MATERIA: Fundamentos...
* PROGRAMADOR:
* CONTACTO:
* FECHA:
*
* COMPILAR:
* EJECUTAR:
*/

/* ALGORITMO
    1. El programa muestra el titulo "Calculo del area del circulo".
    2.el programa crea una variable para el primer numero
    3.el programa crea una variable para el segundo nmero
    4.el programa multiplica la primera y segunda variable
    5. El programa termina.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pi = 3.1416;
    float radio;
    printf("sacar el area de un circulo \n");
    printf("sea un circulo con radio igual a:");
    scanf("%f",&radio);
    float area = pi*(radio*radio);
    printf(" el area es igual a %f",area);


    return 0;
}

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
    1. El programa muestra el titulo "calculo de salario".
    2. el programa imprime la explicacion de lo que se quiere hacer
    3. el programa crea las variables
    4. el programa imprime las variables
    6. el programa calcula una multiplicacion
    7. el programa calcula una divicion
    8.  el programa imprime el resultado final
    9. El programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("calcular salario \n");
    printf("el programa busca calcular el salario de un trabajador\n");
    printf("en base a lo que gana diariamentre para poder pasarlo a mensual\n");
    float diario;
    printf("sea su pago diario igual a:");
    scanf("%f",&diario);
    double multiplicacion= diario*365;
    double salario= multiplicacion/12;
    printf("el salario es igual a %f",salario);


    return 0;
}

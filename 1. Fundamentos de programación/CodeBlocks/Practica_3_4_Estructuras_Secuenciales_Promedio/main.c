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
    1. El programa muestra el titulo "".
    2.
    3.
    4.
    5. El programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
      int numVa = 3;
    printf("PROMEDIO DE %d NUMEROS \n",numVa);
    float numero1;
    float numero2;
    float numero3;

    printf("ingresa un numero=\n");
    scanf("%f",&numero1);
    printf("ingresa un numero=\n");
    scanf("%f",&numero2);
    printf("ingresa un numero=\n");
    scanf("%f",&numero3);

    float resultado1 = numero1 + numero2 + numero3;


    printf("%.2f\n",resultado1);
    float resultado2 = resultado1/numVa;
    printf("%.2f / %d =%.2f \n",resultado1,numVa,resultado2);
    return 0;
}

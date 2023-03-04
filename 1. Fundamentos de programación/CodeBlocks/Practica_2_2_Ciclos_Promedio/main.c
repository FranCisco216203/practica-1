/* INFORMACION: CALCULAR PROMEDIO DE 3 NÚMEROS
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
    
    0. EL programa muestra un mensaje que dice: "PROMEDIO DE 3 NUMEROS"
    1. EL programa crea una variable para el primero número
    2. EL programa crea una variable para el segundo número
    3. EL programa crea una variable para el tercer número
    4. El programa inicializa el primer numero
    5. El programa inicializa el segundo numero
    6. El programa inicializa el tercer numero
    7. el programa crea una variable para guardar el resultado
    8. El programa suma las 3 variables
    9. EL programa divide entre 3 el resultado del paso 7
    10. El programa muestra el resultado al usuario
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    //printf("Hello world!\n");
    int numVa = 3;
    printf("PROMEDIO DE %d NUMEROS \n",numVa);
    float numero1;
    float numero2;
    float numero3;

    printf("ingresa un numero=\n");
    scanf("%f",&numero1);

    /*printf("ingresa un numero=\n");
    scanf("%f",numero2);
    printf("ingresa un numero=\n");
    scanf("%f",numero3);


    float resultado1 = numero1 + numero2 + numero3;


    printf("%.2f\n",resultado1);
    float resultado2 = resultado1/numVa;
    printf("%.2f / %d =%.2f \n",resultado1,numVa,resultado2);

*/

    return 0;
}

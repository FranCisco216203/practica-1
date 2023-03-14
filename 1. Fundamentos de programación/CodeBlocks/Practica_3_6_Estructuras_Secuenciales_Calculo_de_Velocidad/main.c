/* INFORMACION
*
* MATERIA:
* PROGRAMADOR: FRANCISCO ANTONIO GONZALEZ NOLASCO
* CONTACTO:
* FECHA:14/03/2023
*
* COMPILAR:
* EJECUTAR:
*/

/* ALGORITMO
    1. El programa muestra el titulo "CALCULO DE VELOCIDAD".
    2. EL programa crea una variable para el primero número
    3. EL programa crea una variable para el segundo número
    4. El programa inicializa el primer numero
    5. El programa inicializa el segundo numero
    6. el programa crea una tercera variable apartir de las 2 primeras
    7. el programa crea una variable para guardar el resultado
    8. El programa muestra el resultado al usuario
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*printf("CALCULO DE VELOCIDAD\n");
    float distancia= 10;
    float tiempo= 30;
    printf("sea la distancia %.1f y el tiempo %.1f \n",distancia,tiempo);
    float velocidad =distancia/tiempo;
    printf("la verlocidad sera igual a %.3f \n", velocidad);*/

    printf("CALCULO DE VELOCIDAD\n");
    int distancia;
    int tiempo;
    printf("sea una distancia = \n");
    scanf("%f",distancia);
    printf("y sea un tiempo = \n");
    scanf("%f",tiempo);
    float velocidad =distancia/tiempo;
    printf("la verlocidad sera igual a %.3f \n", velocidad);

    return 0;
}

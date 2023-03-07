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

void tiposDatos();

int main()
{
    //printf("Hello world!\n");
    /*
    int numVa = 3;
    printf("PROMEDIO DE %d NUMEROS \n",numVa);
    float numero1;
    float numero2;
    float numero3;

    printf("ingresa un numero=\n");
    scanf("%f",&numero1);
    */
    tiposDatos();
    
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

void tiposDatos(){
    short sMinimo = -32768; // Rango de short [-32,768 <--> 32,767]
    short sMaximo = 32767;

    long lMinimo = -2147483648; // Rango de long [2,147,483,648 <--> 2,147,483,647]
    long lMaximo = 214748364;

    float fMinimo = -3.402923E+38; // [-3.402923E+38 <--> 3.402923E+38]
    float fMaximo = -3.402923E+38;

    double dMinimo = -1.7976931E+308; // [-1.7976931E+308 <--> 1.7976931E+308]
    double dMaximo = 1.7976931E+308;
    
    long double ldMinimo = -1.2E+4932; // [-1.2E+4932 <--> +1.2E+4932]
    long double ldMaximo = 1.2E+4932;

    char cMinimo = 'c'; // [-128 <--> 127]
    char cMaximo = 'c'; // [-128 <--> 127]

    /*
    int i = 10; // [<-->]
    */
    printf("El valor de un short es [%d, %d]\n", sMinimo, sMaximo);
    printf("El valor de un long es [%d, %d]\n", lMinimo, lMaximo);
    printf("El valor de un float es [%f, %f]\n", fMinimo, fMaximo);
    printf("El valor de un double es [%f, %f]\n", dMinimo, dMaximo);
    printf("El valor de un long double es [%ld, %ld]\n", ldMinimo, ldMaximo);

    printf("El valor de un float es [%d, %d]\n", cMinimo, cMaximo);

    /*printf("El valor de i es %d\n", );
    printf("El valor de f es %d\n", );
    printf("El valor de d es %d\n", );
    printf("El valor de c es %d\n", );
    */
}
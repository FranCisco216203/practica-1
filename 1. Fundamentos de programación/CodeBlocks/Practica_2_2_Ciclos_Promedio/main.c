/* INFORMACION: CALCULAR PROMEDIO DE 3 NÚMEROS  // RODRIGO: Falta llenar la información
*
* MATERIA:
* PROGRAMADOR:
* CONTACTO:
* FECHA:
*
* COMPILAR:
* EJECUTAR:
*/

/* ALGORITMO  // RODRIGO: Agregar la carátula
    
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

// RODRIGO: No se realiza el promedio de los 3 números, está comentado el código

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

    int iMinimo = -2147483648; // Rango de int [2,147,483,648 <--> 2,147,483,647]
    int iMaximo = 2147483647;

    long lMinimo = -2147483648; // Rango de long [2,147,483,648 <--> 2,147,483,647]
    long lMaximo = 2147483647;

    float fMinimo = -3.402823E+38; // [-3.402823E+38 <--> 3.402823E+38]
    float fMaximo =  3.402823E+38; // Hasta 6 decimales

    double dMinimo = -1.7976931E+308; // [-1.7976931E+308 <--> 1.7976931E+308]
    double dMaximo = 1.7976931E+308; // Hasta 12 decimales

    char cMinimo = -128; // [-128 <--> 127]
    char cMaximo = 127; // Lo caracteres se encuentran entre el 32 al 126

    // %d para short, int, long
    // %f para float y double, %.1f para una cifra significativa
    // %c para char
    // %s para cadenas de char

    printf("Los valores de un short estan entre [%d, %d] y ocupan en memoria %d bytes\n\n", sMinimo, sMaximo, sizeof(short));
    printf("Los valores de un int estan entre [%d, %d] y ocupan en memoria %d bytes\n\n", iMinimo, iMaximo, sizeof(int));
    printf("Los valores de un long estan entre [%d, %d] y ocupan en memoria %d bytes\n\n", lMinimo, lMaximo, sizeof(long));
    printf("Los valores de un float estan entre [%f, %f] y ocupan en memoria %d bytes\n\n", fMinimo, fMaximo, sizeof(float));
    printf("Los valores de un double estan entre [%f, %f] y ocupan en memoria %d bytes\n\n", dMinimo, dMaximo, sizeof(double));

    printf("Los valores de un char estan entre los valores [%d, %d] asociado a los caracteres [%c, %c] y ocupa en memoria %d byte\n", cMinimo, cMaximo, cMinimo, cMaximo, sizeof(char));
    printf("El caracter %c equivale a %d en ascii: %d = %c \n", 35, 35, 35, 35);
}
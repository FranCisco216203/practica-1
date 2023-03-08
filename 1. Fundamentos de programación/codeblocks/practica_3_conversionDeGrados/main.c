#include <stdio.h>
#include <stdlib.h>
/*paso 1: poner el titulo del programa
paso2: explicar lo que hace el programa
paso 3: creamos nuestras variables
paso4 : ya teniendo las variables ya se puede hacer una conversion
paso 5: imprimir la variable original y su resultado*/
void celsius_far(){
    printf("******************************************************************\n");
    printf("*               DE GRADOS FARANHAIT A CELSIUS                    *\n");
    printf("* crear un programa mediante el cual se pueden pasar los grados  *\n");
    printf("* farenheits a celsius:                                          *\n");
    float F;
    printf("* ingresa un numero:     ");
    scanf("%f",&F);
    double C= 5*(F-32)/9 ;

    printf("%.2f Celsius",C);

}
void faranhait_celsius(){
   printf("******************************************************************\n");
    printf("*               DE GRADOS CELSIUS A FARANHAIT                    *\n");
    printf("* crear un programa mediante el cual se pueden pasar los grados  *\n");
    printf("* celsius a Faranhaits:                                          *\n");
    float C;
    printf("* ingresa un numero:     ");
    scanf("%f",&C);
    double F= 32+C*9/5 ;

    printf("%.2f Faranhait",F);
    }




int main(){
    //celsius_far();
    faranhait_celsius();

    return 0;
}

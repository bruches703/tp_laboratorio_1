/** \brief Menu de opciones principal que se imprime en pantalla
 *
 * \param Valor de variable 'a', ingresado por el usuario
 * \param Falg que comprueba si se ingreso el valor de 'a'
 * \param Valor de variable 'b' ingresado por el usuario
 * \param Falg que comprueba si se ingreso el valor de 'b'
 * \return Valor que corresponda a la opcion seleccionada
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "menuOption.h"

int menuOption (int a, int flagA, int b, int flagB)
{
    int option;

    system("cls");
    printf("******Menu de calculadora******\n");
    if (flagA==0 && flagB==0)
    {
        printf("\n1-Ingresar 1er operando (A=x)");
        printf("\n2-Ingresar 2do operando (B=y)");
        printf("\n3-Calcular todas las opciones");
            printf("\n\ta)Calcular la suma de A + B");
            printf("\n\tb)Calcular la resta de A - B");
            printf("\n\tc)Calcular la division entre A / B");
            printf("\n\td)Calcular la multiplicacion de A * B");
            printf("\n\te)Calcular la factoriales de A! y B!");
    }
    else if(flagA==1 && flagB==0)
    {
        printf("\n1-Ingresar 1er operando (A=%d)",a);
        printf("\n2-Ingresar 2do operando (B=y)");
        printf("\n3-Calcular todas las opciones");
            printf("\n\ta)Calcular la suma de %d + B",a);
            printf("\n\tb)Calcular la resta de %d - B",a);
            printf("\n\tc)Calcular la division entre %d / B",a);
            printf("\n\td)Calcular la multiplicacion de %d * B",a);
            printf("\n\te)Calcular la factoriales de %d! y B!",a);

    }
    else if(flagA==0 && flagB==1)
    {
        printf("\n1-Ingresar 1er operando (A=x)");
        printf("\n2-Ingresar 2do operando (B=%d)",b);
        printf("\n3-Calcular todas las opciones");
            printf("\n\ta)Calcular la suma de A + %d",b);
            printf("\n\tb)Calcular la resta de A - %d",b);
            printf("\n\tc)Calcular la division entre A / %d",b);
            printf("\n\td)Calcular la multiplicacion de A * %d",b);
            printf("\n\te)Calcular la factoriales de A! y %d!",b);
    }
   else
   {
        printf("\n1-Ingresar 1er operando (A=%d)",a);
        printf("\n2-Ingresar 2do operando (B=%d)",b);
        printf("\n3-Calcular todas las opciones");
            printf("\n\ta)Calcular la suma de %d + %d",a,b);
            printf("\n\tb)Calcular la resta de %d - %d",a,b);
            printf("\n\tc)Calcular la division entre %d / %d",a,b);
            printf("\n\td)Calcular la multiplicacion de %d * %d",a,b);
            printf("\n\te)Calcular la factoriales de %d! y %d!",a,b);
   }
    printf("\n4-Mostrar los resultados");
    printf("\n0-Finalizar");
    printf("\n\nIngrese opcion: ");
    fflush(stdin);
    scanf("%d",&option);

    return option;

}


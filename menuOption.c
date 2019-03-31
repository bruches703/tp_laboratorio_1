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
    //if de modificacion de (A=x) de opcion 1
    if (flagA==0)
    {
        //Si no se ingreso valor 'A', mostrara 'X' en lugar de un numero
        printf("\n1-Ingresar 1er operando (A=x)");
    }
    else
    {
        //Si fue ingresado el valor 'A', mostrara el dato ingresado
        printf("\n1-Ingresar 1er operando (A=%d)",a);
    }

    //if de modificacion de (B=y) de opcion 2
    if(flagB==0)
    {
        //Si no se ingreso valor 'B', mostrara 'Y' en lugar de un numer
        printf("\n2-Ingresar 2do operando (B=y)");
    }
    else
    {
        //Si fue ingresado el valor 'B', mostrara el dato ingresado
        printf("\n2-Ingresar 2do operando (B=%d)",b);
    }

    //Muestra el resto de las opciones
    printf("\n3-Calcular todas las opciones");
    printf("\n4-Mostrar todos los resultados");
    printf("\n0-Finalizar");
    printf("\n\nIngrese opcion: ");
    fflush(stdin);  //Limpia el buffer, ya que si ingresa un char como opcion mostrara un error de manera constante
    scanf("%d",&option);

    return option; //retorna la opcion sellecionada

}


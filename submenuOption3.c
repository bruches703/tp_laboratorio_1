/** \brief Menu que da como opciones, operaciones matematicas para los valores ingresados
 *
 * \param Primer valor ingresado por el usario, 'a'
 * \param Segundo valor ingresadi por el usuario, 'b'
 * \param Flag que comprueba si se ingreso el valor de 'a'
 * \param Flag que comprueba si se ingreso el valor de 'b'
 * \return Retorna un char correspondiente a la opcion seleccionada
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "submenuOption3.h"

//Inicio de Funcion
char submenuOption3 (int a, int b, int flagA, int flagB)
{
    char option;
    system("cls");
    printf("----Submenu de operaciones----\n");

    /*if de opcion SUMA reemplazando A y B por sus valores*/
    if(flagA==0 && flagB==0)
    {
    printf("\na-Sumar (A+B)"); //No se ingresaron los valores de A ni de B
    }
    else if(flagA==0 && flagB==1)
    {
        printf("\na-Sumar (A+%d)",b); //Solo se ingreso el valor de B
    }
    else if (flagA==1 && flagB==0)
    {
        printf("\na-Sumar (%d+B)",a); //Se ingreso solo el valor de A
    }
    else
    {
        printf("\na-Sumar (%d+%d)",a,b); // Se ingresaron los dos valores, A y B
    }
    /*fin de if de opcion SUMAR*/



    //if de opcion RESTA reemplazando A y B por sus valores
    if(flagA==0 && flagB==0)
    {
        printf("\nb-Restar(A-B)"); //No se ingresaron los valores de A ni de B
    }
    else if(flagA==0 && flagB==1)
    {
        printf("\nb-Restar(A-%d)",b); //Solo se ingreso el valor de B
    }
    else if (flagA==1 && flagB==0)
    {
        printf("\nb-Restar(%d-B)",a);//Se ingreso solo el valor de A
    }
    else
    {
        printf("\nb-Restar(%d-%d)",a,b);// Se ingresaron los dos valores, A y B
    }
    /*fin de if de opcion RESTAR*/



    /*if de opcion DIVICION reemplazando A y B por sus valores*/
    if(flagA==0 && flagB==0)
    {
        printf("\nc-Divicion(A/B)"); //No se ingresaron los valores de A ni de B
    }
    else if(flagA==0 && flagB==1)
    {
        printf("\nc-Divicion(A/%d)",b); // Solo se ingreso el valor de B
    }
    else if (flagA==1 && flagB==0)
    {
        printf("\nc-Divicion(%d/B)",a); // Solo se ingreso el valor de A
    }
    else
    {
        printf("\nc-Divicion(%d/%d)",a,b); // Se ingresaron los dos valores
    }
    /*fin de if de opcion DIVICION*/



    /*if de opcion MULTIPLICACION reemplazando A y B por sus valores*/
    if(flagA==0 && flagB==0)
    {
        printf("\nd-Multiplicacion(A*B)"); // No se ingresaron los valores de A y de B
    }
    else if(flagA==0 && flagB==1)
    {
        printf("\nd-Multiplicacion(A*%d)",b); //Solo se ingreso el valor de B
    }
    else if (flagA==1 && flagB==0)
    {
        printf("\nd-Multiplicacion(%d*B)",a); //Se ingreso solo el valor de A
    }
    else
    {
        printf("\nd-Multiplicacion(%d*%d)",a,b); //Se ingresaron los dos valores
    }
    /*fin de if de opcion MULTIPLICACION*/


    /*if de opcion Factorial reemplazando A y B por sus valores*/
    if(flagA==0 && flagB==0)
    {
        printf("\ne-Factorial (A!) (B!)"); //No se ingreso el valor de A ni el valor de B
    }
    else if (flagA==1 && flagB==0)
    {
        printf("\ne-Factorial (%d!) (B!)",a); // Solo se ingreso el valor de A
    }
    else if(flagA==0 && flagB==1)
    {
        printf("\ne-Factorial (A!) (%d!)",b); // Ingreso solamente del valor B
    }
    else
    {
        printf("\ne-Factorial (%d!) (%d!)",a,b); //Se ingresaron los dos valores
    }
    /*Fin de if de reemplazo de A y B por sus valores en opcion FACTORIAL*/

    printf("\nf-Volver al menu"); //Opcion para volver al menu anterior
    printf("\n\nIngrese opcion: "); //Peticion de ingreso de dato
    fflush(stdin);
    scanf("%c", &option);
    option=tolower(option);

    return option;
}
//Fin de funcion

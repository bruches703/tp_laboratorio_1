/** \brief Muestra en pantalla los factoriales de 'a' y de 'b'
 *
 * \param Variable 'a' ingresado por el usuario
 * \param Variable 'b' segundo ingreso por el usuario
 * \param Resultado del factorial de 'a' (a!)
 * \param Resultado del factorial de 'b' (b!)
 * \param Flag que comprueba si se realizo al menos uno de los factoriales
 * \param Flag que demuestra si realizo factorial de 'a'
 * \param flag que demuestra si realizo factorial de 'b'
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportFactorial.h"
void reportFactorial (int a, int b, int factorialA, int factorialB, int flag, int flagA, int flagB)
{
    //variable flag comprueba si se realizo factorial sea de A o de B
    if(flag==1)
    {

       if(flagA==1 && flagB==1) // Si se realizaron los factoriales de A y de B los imprime en pantalla
        {
            printf("\nEl factorial de %d es: %d y El factorial de %d es: %d", a, factorialA, b, factorialB);
        }
        else if(flagA==0 && flagB==1) //Si solo se realizo el factorial de B, Imprime solo factorial de B
        {
            printf("\nEl factorial de %d es: %d ", b, factorialB);
        }
        else if(flagA==1 && flagB==0) // Si se realizo solo el factorial de A, lo mostrara en pantalla
        {
            printf("\nEl factorial de %d es: %d ", a, factorialA);
        }
        /*Si no se realizo ningun factorial, no mostrara nada en pantalla*/
    }
}

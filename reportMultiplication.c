/** \brief Muestra en patalla la multiplicacion entre 'a' y 'b'
 *
 * \param Valor de 'a' ingresado por el usuario
 * \param Valor de 'b' del segundo ingreso del usuario
 * \param Resultado de la multiplicacoin de variables 'a' y 'b'
 * \param Flag que comprueba si se realizo la multiplicacion
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportMultiplication.h"

void reportMultiplication (int a, int b, int result, int flag)
{
    if(flag==1)
    {
        printf("\nLa multiplicacion de %d*%d es : %d", a, b, result);
    }
}

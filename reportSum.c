/** \brief Muestra la suma entre los valores 'a' y 'b' ingresados por el usuario
 *
 * \param Primer valor ingresado por el usuario, 'a'
 * \param Segundo valor ingresado por el usuario, 'b'
 * \param Resultado de la suma entre 'a' y 'b'
 * \param Flag que comprueba si se realizo la suma
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "reportSum.h"

void reportSum (int a, int b, int result, int flag)
{
    if(flag==1)
    {
                printf("\nLa suma de %d + %d es : %d", a, b, result);

    }
}

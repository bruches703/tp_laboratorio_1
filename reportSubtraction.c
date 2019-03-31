/** \brief Imprime en patalla el resultado de la resta entre 'a' y 'b'
 *
 * \param Primer valor ingresado por el usuario, 'a'
 * \param Segundo valor ingresado por el usuario, 'b'
 * \param Resultado de la resta entre 'a' y 'b'
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportSubtraction.h"

void reportSubtraction (int a, int b, int result, int flag)
{
    if(flag==1)
    {
            printf("\nLa resta de %d - %d es : %d", a, b, result);
    }

}

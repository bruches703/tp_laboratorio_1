/** \brief Muestra en pantalla el resultado de la division
 *
 * \param Variable 'a' ingresado por el usuario
 * \param Variable 'b' segundo ingreso por el usuario
 * \param El resultado de a/b en flotante
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportDivide.h"

void reportDivide (int a, int b, float result)
{
    printf("\nLa divicion de %d/%d es : %.2f", a, b, result);
}

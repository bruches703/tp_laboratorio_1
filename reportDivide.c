/** \brief Muestra en pantalla el resultado de la division
 *
 * \param Variable 'a' ingresado por el usuario
 * \param Variable 'b' segundo ingreso por el usuario
 * \param El resultado de a/b en flotante
 * \param flag que comprueba si se debe imprimir en patalla el resultado
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportDivide.h"

void reportDivide (int a, int b, float result, int flag)
{
    //variable flag comprueba si se realizo la division. Valor de flag=1 comprueba que si se realizo
    if(flag==1)
    {
    printf("\nLa divicion de %d/%d es : %.2f", a, b, result);
    }
}

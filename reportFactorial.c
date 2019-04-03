/** \brief Muestra en pantalla los factoriales de 'a' y de 'b'
 *
 * \param Variable 'a' ingresado por el usuario
 * \param Variable 'b' segundo ingreso por el usuario
 * \param Resultado del factorial de 'a' (a!)
 * \param Resultado del factorial de 'b' (b!)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "reportFactorial.h"
void reportFactorial (int a, int b, int factorialA, int factorialB)
{

    printf("\nEl factorial de %d es: %d y El factorial de %d es: %d", a, factorialA, b, factorialB);

}

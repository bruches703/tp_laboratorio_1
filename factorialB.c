/** \brief Calcula factorial de la variable 'b'
 *
 * \param Valor de variale 'a' ingresado por usuario
 *
 * \return Factorial del dato ingresado (b!)
 */
#include <stdio.h>
#include <stdlib.h>
#include "factorialB.h"

int factorialB (int b)
{
    int result=1;
      for (int i = 1; i <= b; i++)
        {
         result = result*i;
        }
    return result;
}

/** \brief Calcula factorial de la variable 'a'
 *
 * \param Valor de variale 'a' ingresado por usuario
 *
 * \return Factorial del dato ingresado (a!)
 */
#include <stdio.h>
#include <stdlib.h>
#include "factorialA.h"

int factorialA (int a)
{
    int result=1;
      for (int i = 1; i <= a; i++)
        {
         result = result*i;
        }
    return result;
}

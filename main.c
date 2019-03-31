#include <stdio.h>
#include <stdlib.h>
#include "divideOption.h"
#include "factorialOptionA.h"
#include "factorialOptionB.h"
#include "reportDivide.h"
#include "reportFactorial.h"
#include "reportMultiplication.h"
#include "reportSubtraction.h"
#include "reportSum.h"
#include "menuOption.h"
#include "multiplyOption.h"
#include "subtractionOption.h"
#include "submenuOption3.h"
#include "sumOption.h"

//Inicio de programa
int main()
{
    //Definiendo variable de contorl de doWhile
    int exit=0;

    //Definicion e inicializacoin de variables A y B y flags de valores ingresados
    int a, flagA=0;
    int b, flagB=0;

    //Definicion e inicializacoin de flags operaciones
    int flagSum=0, flagSubtraction=0, flagDivision=0, flagMultiplication=0, flagFactorial=0;

    //Definicion de variable de almacenamiento de resultados
    int sum, subtraction, multiplication, factorialA, factorialB;
    float division;
    //fin de definicion de variables

    int flagReport=0;

    //Inicio de do While
    do
    {
        //Switch donde de opciones de la calculadora
        switch(menuOption(a, flagA, b, flagB))
        {
        case 1: //Ingreso del primer valor ('A')
            printf("Ingrese valor: ");
            scanf("%d",&a);
            flagA=1;
            break;
        case 2: //Ingreso del segundo valor ('B')
            printf("Ingrese valor: ");
            scanf("%d",&b);
            flagB=1;
            break;
        case 3: //Sub-menu de operaciones de opcion tres (seleccion de operaciones)
                switch(submenuOption3(a,b,flagA,flagB))
                {
                case 'a'://Caso de suma
                    sum=sumOption(a,b);
                    flagSum=1;
                    flagReport=1;
                    break;
                case 'b'://Caso de resta
                    subtraction=subtractionOption(a,b);
                    flagSubtraction=1;
                    flagReport=1;
                    break;
                case 'c'://Caso de divicion
                    if(b==0) //Mensaje de error si el valor del divisor es cero
                        {
                        printf("\nEl valor de B es 0 (cero), no se puede realizar la operacion\n\n");
                        system("pause");
                        break;
                        }
                    else // desarrollo de la divicion
                        {
                        division=divideOption(a,b);
                        flagDivision=1;
                        flagReport=1;
                        }
                    break;
                case 'd'://Caso multiplicacion
                    multiplication=multiplyOption(a,b);
                    flagMultiplication=1;
                    flagReport=1;
                    break;
                case 'e'://Caso factorial
                    factorialA=factorialOptionA(a);
                    factorialB=factorialOptionB(b);
                    flagFactorial=1;
                    flagReport=1;
                    break;
                case 'f'://Caso "Regresar al menu"
                    break;
                default://Mensaje de error al ingresar un valor equivocado
                    printf("\nError de ingreso\n");
                    system("pause");
                    break;
                }
            break;
        case 4: //Opcion mostrar
            //Report de estado si no se realizaron operaciones
            if(flagReport==0)
            {
                system("cls");
                printf("\nNo se realizaron operaciones\n");
                system("pause");
                break;
            }
            else //Report de todas las operaciones realizadas
            {
                system("cls");
                if (flagA==0 || flagB==0)
                {
                    // En caso de no haber ingresado un valor, reporta falta de dato
                    printf("\n\nNo se pueden realizar operaciones por falta de ingreso de valores\n\n");
                    system("pause");
                }
                else
                {
                //Imprimir en pantalla todos los valores de las operaciones realizadas
                printf("\\\\\\Respuestas a las operaciones realizadas///\n\n");
                reportSum( a, b, sum, flagSum);
                reportSubtraction (a, b, subtraction, flagSubtraction);
                reportDivide (a, b, division, flagDivision);
                reportMultiplication (a, b, multiplication, flagMultiplication);
                reportFactorial(a, b, factorialA, factorialB, flagFactorial, flagA, flagB);
                printf("\n\n");
                system("pause");
                }
            break;
            }
        case 0: //Opcion salir
            printf("\nGracias por utilizar nuestro programa\n");
            exit=1;//Valor 0 para continuar, valor 1 para finalizar programa
            break;
        default: //Mensaje de error al ingresar opcion equivocada
            printf("\nError de ingreso\n");
            system("pause");
            break;
        }
    }while(exit==0); //Fin de while

}
//Fin de programa

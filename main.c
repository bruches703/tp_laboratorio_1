#include <stdio.h>
#include <stdlib.h>

#include "divide.h"
#include "factorialA.h"
#include "factorialB.h"
#include "reportDivide.h"
#include "reportFactorial.h"
#include "reportMultiplication.h"
#include "reportSubtraction.h"
#include "reportSum.h"
#include "menuOption.h"
#include "multiply.h"
#include "subtraction.h"
#include "sum.h"

//Inicio de programa
int main()
{
    //Definiendo variable de contorl de doWhile
    int exit=0;

    //Definicion e inicializacoin de variables A y B y flags de valores ingresados
    int a, flagA=0;
    int b, flagB=0;

    //Definicion de variable de almacenamiento de resultados
    int sumResult, subtractionResult, multiplicationResult, factorialAResult, factorialBResult;
    float divisionResult;
    //fin de definicion de variables

    int flagReport=0;

    //Inicio de doWhile
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
        case 3: //Ejecutar todas las operaciones matematicas
                if(flagA==0 || flagB==0)
                {
                    printf("\n\nFalta ingresar datos\n");
                    system("pause");
                }
                else
                {
                sumResult=sum(a,b);
                subtractionResult= subtraction(a,b);
                divisionResult=divide(a,b);
                multiplicationResult=multiply(a,b);
                factorialAResult=factorialA(a);
                factorialBResult=factorialB(b);
                flagReport=1;
                printf("\n\nSe realizaron las operaciones de manera correcta\n");
                system("pause");
                }
            break;
        case 4: //Opcion mostrar
            if(flagReport==0)
            {
                //Report de estado si no se realizaron operaciones
                system("cls");
                printf("\n****No se realizaron operaciones, seleccione opcion 3 en el paso anterior****\n");
                system("pause");
                break;
            }
            else
            {
                //Imprimir en pantalla todos los valores de las operaciones realizadas
                system("cls");
                printf("\\\\\\Respuestas a las operaciones realizadas///\n\n");
                reportSum( a, b, sumResult);
                reportSubtraction (a, b, subtractionResult);
                reportDivide (a, b, divisionResult);
                reportMultiplication (a, b, multiplicationResult);
                reportFactorial(a, b, factorialAResult, factorialBResult);
                printf("\n\n");
                system("pause");
            }
            break;
        case 0: //Opcion salir
            printf("\nGracias por utilizar nuestro programa\n");
            exit=1;//Valor 0 para continuar, valor 1 para finalizar programa
            break;
        default: //Mensaje de error al ingresar opcion equivocada
            printf("\nError de ingreso\n");
            system("pause");
            break;
        }
    }while(exit==0); //Fin de doWhile

}
//Fin de programa

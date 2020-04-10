#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*TP 1 PROGRAMACION*/
/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular la suma (A+B)
4. Calcular la resta (A-B)
5. Calcular la division (A/B)
6. Calcular la multiplicacion (A*B)
7. Calcular el factorial (A!)
8. Calcular todas las operaciones
9. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las 4 operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/

int main()
{
    int opcion;
    float primerOperando;
    float segundoOperando;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    unsigned long long int resultadoFactorial;

    do
    {
        printf("BIENVENIDOS A LA CALCULADORA!!\n\n");
        printf("1. Ingresar 1er operando (A=x)");
        printf("\n2. Ingresar 2do operando (B=y)");
        printf("\n3. Calcular la suma (A+B)");
        printf("\n4. Calcular la resta (A-B)");
        printf("\n5. Calcular la division (A/B)");
        printf("\n6. Calcular la multiplicacion (A*B)");
        printf("\n7. Calcular el factorial (A!)");
        printf("\n8. Calcular todas las operaciones");
        printf("\n9. Salir");

        printf("\n\nOpcion elegida:");
        scanf("%d",& opcion);
        system("cls");
        system ("pause");

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: ");
                scanf("%f",&primerOperando);
                while(validacionNumeros(primerOperando)== 1)
                {
                    printf("Numero no valido!!, Ingrese otro numero: ");
                    scanf("%f",& primerOperando);
                    validacionNumeros(primerOperando);
                }
            break;
            case 2:
                printf("Ingrese el segundo operando: ");
                scanf("%f",& segundoOperando);
                while(validacionNumeros(segundoOperando)==1)
                {
                    printf("Numero no valido!!, Ingrese otro numero: ");
                    scanf("%f",& segundoOperando);
                    validacionNumeros(segundoOperando);
                }
            break;
            case 3:
                resultadoSuma=sumarNumeros(primerOperando,segundoOperando);

                //0 si es par, 1 si es impar;
                if ((esEntero(resultadoSuma)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoSuma);
                else
                    printf("El resultado de la suma es: %.2f", resultadoSuma);
            break;
            case 4:
                resultadoResta=restarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoResta)) == 0)
                    printf("El resultado de la resta es: %.0f", resultadoResta);
                else
                    printf("El resultado de la resta es: %.2f", resultadoResta);
            break;
            case 5:
                resultadoDivision=dividirNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoDivision)) == 0)
                    printf("El resultado de la division es: %.0f", resultadoDivision);
                else
                    printf("El resultado de la division es: %.2f", resultadoDivision);
            break;
            case 6:
                resultadoMultiplicacion=multiplicarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);
            break;
            case 7:
                resultadoFactorial=factorialNumero(primerOperando);
            break;
            case 8:
                resultadoSuma=sumarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoResta=restarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoDivision=dividirNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoMultiplicacion=multiplicarNumeros(primerOperando, segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoFactorial=factorialNumero(primerOperando);

            break;
            case 9:
                printf("Gracias por haber usado esta calculadora!.");
            break;
        }

    }while(opcion!=9);


    return 0;
}

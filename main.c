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

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: ");
                scanf("%f",primerOperando);
                int validacionNumeros(float primerOperando);
            break;
            case 2:
                printf("Ingrese el segundo operando: ");
                scanf("%f",segundoOperando);
                int validacionNumeros(float segundoOperando);
            break;
            case 3:
                resultadoSuma=float sumarNumeros(float primerOperando, float segundoOperando);

                //0 si es par, 1 si es impar;
                if ((int esEntero(float resultadoSuma)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoSuma);
                else
                    printf("El resultado de la suma es: %.2f", resultadoSuma);
            break;
            case 4:
                resultadoResta=float restarNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoResta)) == 0)
                    printf("El resultado de la resta es: %.0f", resultadoResta);
                else
                    printf("El resultado de la resta es: %.2f", resultadoResta);
            break;
            case 5:
                resultadoDivision=float dividirNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoDivision)) == 0)
                    printf("El resultado de la division es: %.0f", resultadoDivision);
                else
                    printf("El resultado de la division es: %.2f", resultadoDivision);
            break;
            case 6:
                resultadoMultiplicacion=float multiplicarNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);
            break;
            case 7:
                resultadoFactorial=unsigned long long int factorialNumero(float primerOperando);
            break;
            case 8:
                resultadoSuma=float sumarNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoResta=float restarNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoDivision=float dividirNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoMultiplicacion=float multiplicarNumeros(float primerOperando, float segundoOperando);
                if ((int esEntero(float resultadoMultiplicacion)) == 0)
                    printf("El resultado de la suma es: %.0f", resultadoMultiplicacion);
                else
                    printf("El resultado de la suma es: %.2f", resultadoMultiplicacion);

                resultadoFactorial=unsigned long long int factorialNumero(float primerOperando);

            break;
            case 9:
                printf("Gracias por haber usado esta calculadora!.");
            break;
        }

    }while(opcion!=9);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*TP 1 PROGRAMACION*/
/*Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular la suma (A+B)
4. Calcular la resta (A-B)
5. Calcular la division (A/B)
6. Calcular la multiplicacion (A*B)
7. Calcular el factorial (A!)
8. Calcular todas las operaciones
9. Salir
� Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
que contenga las funciones para realizar las 4 operaciones.
� En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
� Deber�n contemplarse los casos de error (divisi�n por cero, etc)
� Documentar todas las funciones
*/


//FALTA VALIDACION NUMEROS,PREGUNTAR EN FACTORIAL DE QUE OPERANDO QUIERE HACER LA OPERACION Y VERIFICAR QUE PARA LAS OPCIONES ESTEN
//LOS 2 OPERANDOS CARGADOS.
int main()
{
    int opcion;
    float primerOperando;
    float segundoOperando;
    char numeroMenuX[10]="X";
    char numeroMenuY[10]="Y";
    char respuesta=' ';
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    unsigned long long int resultadoFactorial;
    int auxFactorial;



    do
    {
        opcion=mostrarMenu(numeroMenuX,numeroMenuY);

        switch(opcion)
        {
            case 1:

                 printf("Ingrese el primer operando: ");
                 fflush(stdin);
                 gets(numeroMenuX);


                 while(validacionNumeros(numeroMenuX)==1)
                 {
                     printf("Numero no valido!!, Ingrese otro numero: ");
                     fflush(stdin);
                     gets(numeroMenuX);
                     validacionNumeros(numeroMenuX);
                 }

                primerOperando=atof(numeroMenuX);


            system("cls");


            break;
            case 2:

                 printf("Ingrese el segundo operando: ");
                 fflush(stdin);
                 gets(numeroMenuY);

                 while(validacionNumeros(numeroMenuY)==1)
                 {
                     printf("Numero no valido!!, Ingrese otro numero: ");
                     fflush(stdin);
                     gets(numeroMenuY);
                     validacionNumeros(numeroMenuY);
                 }

                segundoOperando=atof(numeroMenuY);
            system("cls");
            break;

            case 3:
                if(numeroMenuX[0]=='X'||numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue con opcion 1 u opcion 2 ambos operandos para continuar.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }

                resultadoSuma=sumarNumeros(primerOperando,segundoOperando);

                if ((esEntero(resultadoSuma)) == 0)
                    printf("El resultado de la suma es: %.0f\n", resultadoSuma);

                else
                    printf("El resultado de la suma es: %.2f\n", resultadoSuma);
                system("pause");
                system("cls");
            break;

            case 4:
                if(numeroMenuX[0]=='X'||numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue con opcion 1 u opcion 2 ambos operandos para continuar.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }

                resultadoResta=restarNumeros(primerOperando,segundoOperando);

                if ((esEntero(resultadoResta)) == 0)
                    printf("El resultado de la resta es: %.0f\n", resultadoResta);
                else
                    printf("El resultado de la resta es: %.2f\n", resultadoResta);
                system("pause");
                system("cls");
            break;

            case 5:
                if(numeroMenuX[0]=='X'||numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue con opcion 1 u opcion 2 ambos operandos para continuar.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }

                resultadoDivision=dividirNumeros(primerOperando,segundoOperando);

                if ((esEntero(resultadoDivision)) == 0)
                    printf("El resultado de la division es: %.0f\n", resultadoDivision);
                else
                    printf("El resultado de la division es: %.2f\n", resultadoDivision);
                system("pause");
                system("cls");
            break;

            case 6:
                if(numeroMenuX[0]=='X'||numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue con opcion 1 u opcion 2 ambos operandos para continuar.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }

                resultadoMultiplicacion=multiplicarNumeros(primerOperando,segundoOperando);

                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la multiplicacion es: %.0f\n", resultadoMultiplicacion);
                else
                    printf("El resultado de la multiplicacion es: %.2f\n", resultadoMultiplicacion);
                system("pause");
                system("cls");
            break;

            case 7:
                if(numeroMenuX[0]=='X'&& numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue en el operando 1 el numero a calcular.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                auxFactorial=(int)primerOperando;
                resultadoFactorial=factorialNumero(primerOperando);
                printf("El resultado de el factorial: %llu\n", resultadoFactorial);
                system("pause");
                system("cls");
            break;

            case 8:
                if(numeroMenuX[0]=='X'||numeroMenuY[0]=='Y')
                {
                    printf("Alguno de los operandos no fueron cargados.\n\n");
                    printf("Cargue con opcion 1 u opcion 2 ambos operandos para continuar.\n\n");
                    system("pause");
                    system("cls");
                    continue;
                }

                resultadoSuma=sumarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoSuma)) == 0)
                    printf("El resultado de la suma es: %.0f\n", resultadoSuma);
                else
                    printf("El resultado de la suma es: %.2f\n", resultadoSuma);

                resultadoResta=restarNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoResta)) == 0)
                    printf("El resultado de la resta es: %.0f\n", resultadoResta);
                else
                    printf("El resultado de la resta es: %.2f\n", resultadoResta);

                resultadoDivision=dividirNumeros(primerOperando,segundoOperando);
                if ((esEntero(resultadoDivision)) == 0)
                    printf("El resultado de la division es: %.0f\n", resultadoDivision);
                else
                    printf("El resultado de la division es: %.2f\n", resultadoDivision);

                resultadoMultiplicacion=multiplicarNumeros(primerOperando, segundoOperando);
                if ((esEntero(resultadoMultiplicacion)) == 0)
                    printf("El resultado de la multiplicacion es: %.0f\n", resultadoMultiplicacion);
                else
                    printf("El resultado de la multiplicacion es: %.2f\n", resultadoMultiplicacion);

                resultadoFactorial=factorialNumero(primerOperando);
                printf("El resultado de el factorial: %llu\n", resultadoFactorial);
                system("pause");
                system("cls");

            break;
            case 9:
                printf("Gracias por haber usado esta calculadora!.");
            break;
            default:

                printf("Ingreso una opcion no valida.\n");
                printf("�Desea continuar?");
                printf("\n\n �S o N?: ");
                fflush(stdin);
                scanf("%c",&respuesta);
                if (toupper(respuesta)=='S')
                {
                     system("cls");
                     continue;
                }
                else
                 {
                    opcion=9;
                    printf("\n\nGracias por haber usado esta calculadora!.");
                 }
            break;
       }

    }while(opcion!=9);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validacionNumeros(char operando)
{
   //VER


}
float sumarNumeros(float primerOperando, float segundoOperando)
{
    float resultado;

    resultado= primerOperando+segundoOperando;

    return resultado;
}
int esEntero(float resultado)
{

    int resto;

    resto=(int)resultado;

    if ((resultado-resto)==0)
        return 0;
    else
        return 1;

}
float restarNumeros(float primerOperando, float segundoOperando)
{
    float resultado;

    resultado= primerOperando-segundoOperando;

    return resultado;
}

float dividirNumeros(float primerOperando, float segundoOperando)
{
    float resultado;

    resultado= primerOperando/segundoOperando;

    return resultado;
}

float multiplicarNumeros(float primerOperando, float segundoOperando)
{
     float resultado;

    resultado= primerOperando*segundoOperando;


    return resultado;
}
unsigned long long int factorialNumero(int primerOperando)
{
     int i;
     unsigned long long int resultado=1; //ver factorial de 0 y 1



    for(i=primerOperando;i>1;i--)
    {
        if (i==primerOperando)
        {
            i--;
            resultado=primerOperando*i;
        }

        else
        {
            resultado=resultado*i;
        }

    }

    return resultado;
}

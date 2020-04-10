#include <stdio.h>
#include <stdlib.h>

int validacionNumeros(float operando)
{
    return 0;
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
unsigned long long int factorialNumero(float primerOperando)
{

}

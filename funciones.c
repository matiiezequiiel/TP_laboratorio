#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validacionNumeros(char* operando)
{
     int i;
     int lenght;
     lenght=strlen(operando);

     for (i=0;i<lenght;i++)
    {



              if(isdigit(operando[i])==0 || isspace(operando[i]!=0)) //SI ES 0 ES UN DIGITO INVALIDO (NO ES NUMERO)
            {
                if(operando[i]!='.')
                    return 1;
                if(i==0)
                    return 1;
            }


    }
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
int mostrarMenu(char* numeroMenuX ,char* numeroMenuY )
{

        int opcion;

        printf("BIENVENIDOS A LA CALCULADORA!!\n\n");
        printf("1. Ingresar 1er operando (A=%s)",numeroMenuX);
        printf("\n2. Ingresar 2do operando (B=%s)", numeroMenuY);
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
        return opcion;

}

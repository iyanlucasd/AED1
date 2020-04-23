#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

// fflish(stdin) buffada
#define cleanBuffer while(getchar() != '\n')

/*
 * ASSINATURA DA FUNCAO: void sort(float *a, float *b, float *c)
 * DATA DE ELABORACAO: 23/04/2020
 * AUTOR: IYAN LUCAS DUARTE MARQUES
 * OBJETIVO: ORDENAR OS NUMEROS
 * DADOS DE ENTRADA (ARGUMENTOS): NUMEROS DIGITADOS PELO USUARIO
 * DADOS DE SAIDA (RETORNO DA FUNCAO): SEGUNDO NUMERO
 */

void sort(float *a, float *b, float *c){

    float aux1;
    float aux2;
    float aux3;

    if (*a > *b && *a > *c)
    {
        aux1 = *a;
        if (*b > *c)
        {
            aux2 = *b;
            aux3 = *c;
        }
        else
        {
            aux2 = *c;
            aux3 = *b;
        }

    }

    else if (*b > *a && *b > *c)
    {
        aux1 = *b;
        if (*a > *c)
        {
            aux2 = *a;
            aux3 = *c;
        }
        else
        {
            aux2 = *c;
            aux3 = *a;
        }

    }
    

    else if (*c > *a && *c > *b)
    {
        aux1 = *c;
        if (*a > *b)
        {
            aux2 = *a;
            aux3 = *b;
        }
        else
        {
            aux2 = *b;
            aux3 = *a;
        }

    }

    *a = aux1;
    *b = aux2;
    *c = aux3;
}

void show(float x, float y, float z){
    printf("os valores em ordem sao: %f, %f, %f\n", x, y, z);
    printf("o segundo valor eh: %f\n", y);
}

void EXERCICIO4()
{
    float x;
    float y;
    float z;

    printf("digite o primeiro numero\n");
    scanf("%f", &x);
    printf("digite o segundo numero\n");
    scanf("%f", &y);
    printf("digite o terceiro numero\n");
    scanf("%f", &z);
    sort(&x,&y,&z);
    show(x, y, z);
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

void EXERCICIO1()
{
    float x;
    float y;

    printf("digite o primeiro valor\n");
    scanf("%f", &x);
    printf("digite o segundo valor\n");
    scanf("%f", &y);

    if (x>y)
    {
        printf("o maior valor eh %f\n", x);
    }
    else if (y>x)
    {
        printf("o maior valor eh %f\n", y);
    }
    else
    {
        printf("os valores sao iguais\n");
    }
    
}
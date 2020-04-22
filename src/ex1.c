#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
// funcao para descobrir qual eh o maior valor
void EXERCICIO1()
{
    //var para os dois valores
    float x;
    float y;
    // capturar os dois valores
    printf("digite o primeiro valor\n");
    scanf("%f", &x);
    printf("digite o segundo valor\n");
    scanf("%f", &y);
    //if para se o primeiro for maior que o segundo
    if (x>y)
    {
        printf("o maior valor eh %f\n", x);
    }
    // if para se o segundo for maior que o primeiro
    else if (y>x)
    {
        printf("o maior valor eh %f\n", y);
    }
    //else se os valores forem iguais
    else
    {
        printf("os valores sao iguais\n");
    }
    
}
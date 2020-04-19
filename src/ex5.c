#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

// fflish(stdin) buffada
#define cleanBuffer while(getchar() != '\n')

void EXERCICIO5()
{
    int x;
    int y;

    printf("digite a base\n");
    scanf("%i", &x);
    printf("digite o expoente\n");
    scanf("%i", &y);
    int aux;
    aux = x;
    for (int i = 1; i < y; i++)
    {
        x = x * aux;
    }
    printf("o resultado eh: %i\n", x);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

// fflish(stdin) buffada
#define cleanBuffer while(getchar() != '\n')

void EXERCICIO4()
{

    int x;
    printf("calculo do fatorial\n");
    printf("digite o numero\n");
    scanf("%i", &x);
    for (int i = 1; i < x; i++)
    {
        x = i * x;
    }
    printf("o fatorial eh %i\n", x);

}

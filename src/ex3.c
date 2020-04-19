#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
//fflush(stdin) buffada
#define cleanBuffer while (getchar() != '\n')


void EXERCICIO3()
{
    int x;


    printf("verifique se o numero eh par ou impar\n");
    printf("digite o numero\n");
    scanf("%i", &x);
    
    if (x % 2 == 0)
    {
        printf("o numero eh par\n");
    }
    else if (x % 2 == 1)
    {
        printf("o numero eh impar\n");
    }
    

    
}

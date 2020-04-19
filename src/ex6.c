#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

void EXERCICIO6()
{
    int x;
    int ver = 0;
    printf("verificar se o numero eh primo\n");
    printf("digite o numero\n");
    scanf("%i", &x);

    for (int i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            ver++;
        }
        
    }
    if (ver > 0)
    {
        printf("o numero nao eh primo\n");
    }
    else if (ver == 0)
    {
        printf("o numero eh primo\n");
    }
    

}
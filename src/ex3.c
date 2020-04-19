#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
//fflush(stdin) buffada
#define cleanBuffer while (getchar() != '\n')

//funcao para calcular se eh par ou impar
void EXERCICIO3()
{
    //variavel do numero
    int x;

    //capturar o valor do numero
    printf("verifique se o numero eh par ou impar\n");
    printf("digite o numero\n");
    scanf("%i", &x);
    //if para descobrir se o resto da divisao por 2 eh 0 ou 1
    //se o resto eh 0, o numero eh par
    if (x % 2 == 0)
    {
        printf("o numero eh par\n");
    }
    // se o resto eh 1, o numero eh impar
    else if (x % 2 == 1)
    {
        printf("o numero eh impar\n");
    }
    

    
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

// fflish(stdin) buffada
#define cleanBuffer while(getchar() != '\n')
//calculo do fatorial
void EXERCICIO4()
{
    //variavel do numero
    int x;
    //capturar o valor
    printf("calculo do fatorial\n");
    printf("digite o numero\n");
    scanf("%i", &x);
    //for para multiplicar o numero pelos numeros anteriores
    for (int i = 1; i < x; i++)
    {
        //operacao para calcular o valor do fatorial
        x = i * x;
    }
    //print do fatorial
    printf("o fatorial eh %i\n", x);

}

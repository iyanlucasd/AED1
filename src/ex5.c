#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

// fflish(stdin) buffada
#define cleanBuffer while(getchar() != '\n')
//funcao para calcular potenciacao
void EXERCICIO5()
{
    //variaveis da base e do expoente
    int x;
    int y;
    //capturar o valor das variaveis
    printf("digite a base\n");
    scanf("%i", &x);
    printf("digite o expoente\n");
    scanf("%i", &y);
    //variavel auxiliar
    int aux;
    //declarando que o valor de aux = x para nao modificar na hora do for
    aux = x;
    //for para calcular a potencia
    //multiplica o numero x por ele mesmo y vezes
    for (int i = 1; i < y; i++)
    {
        //operacao de calculo
        x = x * aux;
    }
    //print do resultado
    printf("o resultado eh: %i\n", x);
}
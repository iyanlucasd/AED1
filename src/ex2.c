#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
//funcao para calculo do perimetro do quadrado
void EXERCICIO2()
{
    //variavel para os valores
    float lado;
    float perimetro;
    //capturar o valor do lado
    printf("digite o valor do lado\n");
    scanf("%f", &lado);
    //calculo do perimetro
    perimetro = 4.00 * lado;
    //print do valor do periodo
    printf("o perimetro eh %f\n", perimetro);
}

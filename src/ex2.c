#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

void EXERCICIO2()
{
    float lado;
    float perimetro;

    printf("digite o valor do lado\n");
    scanf("%f", &lado);

    perimetro = 4.00 * lado;

    printf("o perimetro eh %f\n", perimetro);
}

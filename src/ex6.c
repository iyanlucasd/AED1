#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
//funcao para calcular se o numero eh primo
void EXERCICIO6()
{   
    //variavel do numero
    int x;
    //variavel verificador
    int ver = 0;
    //capturar o valor de x
    printf("verificar se o numero eh primo\n");
    printf("digite o numero\n");
    scanf("%i", &x);
    //for que escaneia todos os numeros de 2 a x
    for (int i = 2; i < x; i++)
    {
        //se o resultado da divisao dos numeros x por i for exata
        //nao eh primo
        if (x%i == 0)
        {
            //aponta para a variavel ver que existe um divisor
            ver++;
        }
        
    }
    //se o verificador nao apontar nenhuma operacao onde o resultado eh exato o numero eh primo
    //se apontar o numero nao eh primo
    if (ver > 0)
    {
        printf("o numero nao eh primo\n");
    }
    //se o numero eh primo
    else if (ver == 0)
    {
        printf("o numero eh primo\n");
    }
    

}
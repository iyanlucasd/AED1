#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

/*
 * ASSINATURA DA FUNCAO: float maiorex3(float x, float y)
 * DATA DE ELABORACAO: 23/04/2020
 * AUTOR: IYAN LUCAS DUARTE MARQUES
 * OBJETIVO: DESCOBRIR O MAIOR VALOR
 * DADOS DE ENTRADA (ARGUMENTOS): NUMEROS DIGITADOS PELO USUARIO
 * DADOS DE SAIDA (RETORNO DA FUNCAO): MAIOR NUMERO
 */

//funcao para calculo do perimetro do quadrado
float maiorex3(float x, float y)
{
    float maiorque = 0;
    //if para se o primeiro for maior que o segundo
    if (x>y)
    {
        maiorque = x;
    }
    // if para se o segundo for maior que o primeiro
    else if (y>x)
    {
        maiorque = y;
    }
    //else se os valores forem iguais
    else
    {
        printf("os valores sao iguais\n");
    }
    return maiorque;
}


void EXERCICIO3()
{
    //var para os dois valores
    float x;
    float y;

    leitura(&x, &y);
    maiorex3(x, y);
    SHOW(maiorex3);
}

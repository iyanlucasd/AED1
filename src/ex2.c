#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

/*
 * ASSINATURA DA FUNCAO: void leitura(float *pont1, float *pont2)
 * DATA DE ELABORACAO: 23/04/2020
 * AUTOR: IYAN LUCAS DUARTE MARQUES
 * OBJETIVO: DESCOBRIR O MAIOR VALOR
 * DADOS DE ENTRADA (ARGUMENTOS): NUMEROS DIGITADOS PELO USUARIO
 * DADOS DE SAIDA (RETORNO DA FUNCAO): MAIOR NUMERO
 */

//funcao para calculo do perimetro do quadrado
void leitura(float *pont1, float *pont2)
{
        // capturar os dois valores
    printf("digite o primeiro valor\n");
    scanf("%f", &*pont1);
    printf("digite o segundo valor\n");
    scanf("%f", &*pont2);

}

void maior(float *pont1, float *pont2)
{
    //if para se o primeiro for maior que o segundo
    if (*pont1>*pont2)
    {
        SHOW(&*pont1);
    }
    // if para se o segundo for maior que o primeiro
    else if (*pont2>*pont1)
    {
        SHOW(&*pont2);
    }
    //else se os valores forem iguais
    else
    {
        printf("os valores sao iguais\n");
    }

}

void SHOW(float *pont1)
{
    printf("o maior valor eh %f\n", *pont1);

}
void EXERCICIO2()
{
    //var para os dois valores
    float x;
    float y;

    leitura(&x, &y);
    maior(&x, &y);
}

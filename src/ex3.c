#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

void media(int n, double *vet, double *p)
{
    double m=0;
    double soma = 0;
    double maiorm = 0;
    double menorm = 0; 
    double sub[n];
    int flag = 0;
    
    for (int i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }
    printf("soma = %f\n", soma);
    
    m = soma/n;
    
    printf("media = %f\n", m);
    for (int i = 0; i < n; i++)
    {
        sub[i] = vet[i] - m;
    }
    for (int i = 0; i < n; i++)
    {
        if (sub[i] <= 0)
        {
            menorm = vet[i];
            flag = i;
        }

    }
    maiorm = vet[flag + 1];
    
    printf("maior %f, menor %f\n", maiorm, menorm);
    if ((maiorm - m) < (m - menorm))
    {
        printf("o numero %f eh mais proximo que o numero %f\n", maiorm, menorm);
        *p = maiorm;
    }
    else
    {
        printf("o numero %f eh mais proximo que o numero %f\n", menorm, maiorm);
        *p = menorm;
    }
    
}

void EXERCICIO3()
{
    int n;
    double i;
    printf("digite quantos numeros deseja inserir\n");
    scanf("%i", &n);

    double vet[n];

    for (int i = 0; i < n; i++)
    {
        printf("digite um numero\n");
        scanf("%lf", &vet[i]);
    }

    int volta;
    int troca;

    for (int i = 0; i < n - 1; i++)
    {
        for (volta = 0; volta < n - i - 1; volta++)
        {
            if (vet[volta] > vet[volta + 1])
            {
                troca = vet[volta];
                vet[volta] = vet[volta + 1];
                vet[volta + 1] = troca; 
            }
            
        }
        
    }
    
    printf("Sorted list in ascending order:\n");

    for (int i = 0; i < n; i++)
    {

        printf("%f\n", vet[i]);
    }


    media(n, vet, &i);
    printf("i = %f\n", i);
}


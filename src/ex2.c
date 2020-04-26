#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#define NMAX 10000 // valor máximo para o valor máximo
void crivo();

void EXERCICIO2()
{
    int m;
    int p1 = 0;
    int p2 = 0;

    printf("digite o valor de m\n");
    scanf("%i", &m);
    crivo(m, &p1, &p2);
}

void crivo(int m, int *p1, int *p2)
{

    int i; 
    int j; 
    int valorMaximo;
    int raiz;
    int maiorPrimo = 0;
    int menorPrimo = 0;
    // Primeiro passo    
    printf("=== Crivo de Erathostenes ===\n");
    printf("Calculando numeros primos ate %d.\n", m);   
    valorMaximo = m;
    // adicionando 6 para ir obrigatoriamente para adicionar ao minimo mais uma casa de primo no vetor
    valorMaximo = valorMaximo + 6;

    // Segundo passo    
    raiz = sqrt(valorMaximo);     

    int vetor[valorMaximo];

    // Terceiro passo    
    for(i = 2; i <= valorMaximo; i++) 
    {        
        vetor[i] = i;    
    }     

    // Quarto passo    
    for(i = 2; i <= raiz; i++) 
    {        
        if(vetor[i] == i) 
        {            
            printf("Numero %3d eh primo!\n", i);            
            
            // percorre todos os multiplos deste valor
            for(j = i + i; j <= valorMaximo; j += i) 
            {                
                // removendo da lista  
                vetor[j] = 0; 
            }        
        }    
    }

    /* quinto passo */
    // percorre o vetor para printar os numeros primos
    // captura o valor dos primos
    for (int i = 0; i <= valorMaximo; i++)
    {
        if(vetor[i])
        {
            printf("Numero %3d eh primo!\n", i);
            maiorPrimo = i;
        }

    }
        for (int i = 0; i < valorMaximo - 6; i++)
    {
        if(vetor[i])
        {
            menorPrimo = i;
        }

    }
    *p1 = maiorPrimo;
    *p2 = menorPrimo;

    printf("o maior primo antes de %i eh: %i\n", m, *p1);
    printf("o menor primo antes de %i eh: %i\n", m, *p2);

}

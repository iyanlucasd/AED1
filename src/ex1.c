#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>


void EXERCICIO1()
{
    //expoente
    int k = 0;
    //numero inserido
    int n;
    int aux1;
    int aux2;
    int flag = 0;

    printf("digite n\n");
    scanf("%i", &n);

    for (int b = 2; b <= n; b++)
    {
        while (flag == 0 && k<10)
        {
            if (pow(b,k) == n)
            {
                aux1 = b;
                aux2 = k;
                flag++;
            }
            
            k++;

        }
        k = 0;
    }
    printf("%i^%i\n",aux1, aux2);
}

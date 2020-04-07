#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// limpa o buffer
// use somente quando o buffer estiver cheio
#define cleanBuffer while(getchar() != '\n')

// limpa a tela
#define cleanScreen system("clear")

char *menu(char *options[], int size)
{
    // opção digiada pelo usuario
    int op;

    // limpa a tela
    cleanScreen;

    do
    {
        // percorrer e imprimir todas as opções do menu
        for (int i = 0; i < size; i++)
            printf("%d - %s\n", i+1, options[i]);
        
        // pede que o usuario digite uma opção
        printf("Digite a opção: ");
        scanf("%d", &op);

        cleanBuffer;

        // checa se a opção é valida se não 
        // exibe uma mensagem
        if(op <= 0 || op > size)
        {
            cleanScreen;
            printf("Digite uma opção valida!!\n\n");
        }

    // não sai ate que seja digitada uma opção valida
    } while (op <= 0 || op > size);
    
    // retorna conteudo do vetor 
    // com a opção escolhida
    return options[op-1];
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include "menu.h"

int main()
{
    //vetor com as opcoes do user
    char *option[]= 
    {
        "exercicio1",
        "exercicio2",
        "exercicio3",
        "SAIR"
    };
    /*o menu.h retorna um char, essa varieval captura o retorno*/
    //char para selecionar a opcao 
    char *selectOption;
    printf("Opcao selecionada %s\n", selectOption = menu(option, sizeof(option)/sizeof(option[0])));
    //select especifica que a opcao selecionada vai pra funcao do exercicio
    if (select(selectOption))
    {
        main();

        return 0;
    }
    //funcao selecionar a opcao do menu
    int select(char *option)
    {
        //se a opcao selecionada eh do exercicio 1
        if (strcmp(option, exercicio1))
        {
            EXERCICIO1();
        }
        //se a opcao selecionada eh do exercicio 2
        /*else if (option, exercicio2)
        {
            EXERCICIO2();
        }*/
        //se a opcao selecionada eh do exercicio 3
        else if (option, exercici03)
        {
            EXERCICIO3();
        }
        



    }


    return 0;
}
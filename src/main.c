#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"
#include "ex6.h"

int main()
{
    int verificador;
    // Adicionei as opções do menu
    // e as respectivas funções a serem executadas
    // cada item um uma opção (nome) e uma função que é o que vai ser executado
    menuAddItem("Exercicio 1", EXERCICIO1);
    menuAddItem("Exercicio 2", EXERCICIO2);
    menuAddItem("Exercicio 3", EXERCICIO3);
    menuAddItem("Exercicio 4", EXERCICIO4);
    menuAddItem("Exercicio 5", EXERCICIO5);
    menuAddItem("Exercicio 6", EXERCICIO6);

    // mostra o menu
    // e executa a opção escolhida pelo usuario
    do
    {
        menu();
        printf("deseja verificar mais um exercicio?\n");
        printf("sim (1)\nnao (2)");
        scanf("%i", &verificador);
    } while (verificador == 1);
    

    return 0;
}

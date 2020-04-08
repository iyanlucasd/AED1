#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"

int main()
{
    // Adicionei as opções do menu
    // e as respectivas funções a serem executadas
    // cada item um uma opção (nome) e uma função que é o que vai ser executado
    menuAddItem("Exercicio 1", EXERCICIO1);
    menuAddItem("Exercicio 2", EXERCICIO2);
    menuAddItem("Exercicio 3", EXERCICIO3);
    menuAddItem("Exercicio 4", EXERCICIO4);

    // mostra o menu
    // e executa a opção escolhida pelo usuario
    menu();
    return 0;
}

#ifndef MENU_H
#define MENU_H

/*
 * Função que imprime as opções do usuario 
 * e retorna a opção escolhida pelo usuario
 * Recebe um vetor com as opções que aparecerão
 * e o número de opções 
 * retorna a string da opção escolhida
 */
char *menu(char *options[], int size);

#endif
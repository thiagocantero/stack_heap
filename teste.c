#include<stdlib.h>
#include <stdio.h>
/**
 * @version 1.2 
 * @package StackPointer  
 * @author Thiago Cantero Mari Monteiro *
 * @copyright Copyright (c) 2022 Thiago Cantero Mari Monteiro * @license http://www.thiagocantero.com.br/sobre
* o método main irá imprimir a
* soma de a + b
* adiciona pausa de execução para analisar a quantidade
* disponibilizada pela Stack.
*/

int main(int argc, char *argv[])
{
    int a, b, soma;
    a = 1;
    b = 4;
    soma = a + b;
    int *ponteiro;


    ponteiro = (int *) malloc(1024);
    scanf("%d", &soma);

    printf("%d\n", soma);
    return (0);
}

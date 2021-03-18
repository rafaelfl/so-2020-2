#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
Exemplo de c�digo que utiliza a chamada de sistema "execv" para substituir
a se��o de texto do processo (c�digo) e reinicializa suas se��es de dados e
de pilha para executar um novo programa (no caso o programa "teste").
*/

int main(void)
{
    printf("pid do Pai: %d\n", getpid());
    execv("teste", NULL);
    printf("EU TENHO UM SEGREDO PRA CONTAR\n");
}

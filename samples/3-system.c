#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
Exemplo de c�digo que utiliza a chamada de sistema "system" que realiza
a execu��o de um novo processo (com espa�o de endere�amento diferente do
processo chamador).
*/

int main(void)
{
    printf("pid do Pai: %d\n", getpid());
    system("./teste");
    printf("\nPrograma apos a funcao system\n");
}

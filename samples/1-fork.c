#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
Exemplo de c�digo que utiliza a chamada de sistema "fork" para criar
uma c�pia do pr�prio processo. Al�m disso, ele separa os c�digos a
serem executados pelos processos pai e filho.
*/

int main(void)
{
    int i;
    pid_t pid;

    if ((pid = fork()) < 0)
    {
        perror("fork");
        exit(1);
    }

    if (pid == 0)
    {
        //O c�digo aqui dentro ser� executado no processo filho
        printf("pid do Filho: %d\n", getpid());
    }
    else
    {
        //O c�digo neste trecho ser� executado no processo pai
        printf("pid do Pai: %d\n", getpid());
    }


    printf("Esta regiao sera executada por ambos processos\n\n");
    scanf("%d", &i);
    exit(0);
}

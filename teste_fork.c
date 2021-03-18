#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int x = 10;
    pid_t pid;
    
    printf("Início da aplicação\n");

    pid = fork();

    if (pid < 0) {
        printf("Erro! Não foi possível criar o processo filho!\n");
        exit(1);
    } else {

        if (pid == 0) {
            printf("Oi! Eu sou o processo filho! :D\n");
        } else {
            printf("Oi! Eu sou o processo pai! \\o/\n");
        }

    }

    printf("Fim da aplicação - %d\n", x);
}

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
            printf(" --- meu PID é: %d\n", getpid());
            execv("helloworld", NULL);
        } else {
            int stat_loc;

            waitpid(pid, &stat_loc, 0);

            printf("Oi! Eu sou o processo pai!. O meu filho tem o pid %d e terminou com o status %d\n", pid, stat_loc);
        }

    }

    // printf("Fim da aplicação - %d\n", x);
}

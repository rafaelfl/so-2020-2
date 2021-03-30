#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void* codigo_do_filho(void *tid) {
    printf("Alo do filho\n");

    return NULL;
}

int main() {
    pthread_t f1;
    pthread_t f2;

    printf("Alo do pai\n");

    pthread_create(&f1, NULL, &codigo_do_filho, NULL);
    pthread_create(&f2, NULL, &codigo_do_filho, NULL);

    pthread_join(f1, NULL);
    printf("Filho 1 morreu\n");

    pthread_join(f2, NULL);
    printf("Filho 2 morreu\n");

    return 0;
}
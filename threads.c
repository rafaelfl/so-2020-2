#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int cont = 0;

void* codigo_thread1(void *tid) {
    int *t = (int *)tid;

    while (1) {
        /* Região crítica */
        printf("[Thread %d] ===> cont = %d\n", *t, cont);
        cont++;
    }

    return NULL;
}

void* codigo_thread2(void *tid) {
    int *t = (int *)tid;

    while(1) {
        /* Região crítica */
        printf("[Thread %d] ===> cont = %d\n", *t, cont);
        cont++;
    }

    return NULL;
}

int main() {
    pthread_t thread1;
    pthread_t thread2;

    int tid1 = 1;
    int tid2 = 2;

    pthread_create(&thread1, NULL, &codigo_thread1, &tid1);
    pthread_create(&thread2, NULL, &codigo_thread2, &tid2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}
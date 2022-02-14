#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "./__count_t.h"

__count_t counter;

void *worker(void *arg){
    int i;

    for(i = 0; i < 100000; i++){
        increment(&counter);
    }
    
    return NULL;
}

int main(int argc, char **argv){
    int i;
    pthread_t *t;

    t = malloc(atoi(argv[1]) * sizeof(pthread_t));

    for(i = 0; i < atoi(argv[1]); i++){
        pthread_create(&t[i], NULL, worker, NULL);
    }

    printf("il valore finale del counter è: %d\n", get(&counter));
    
    return 0;
}

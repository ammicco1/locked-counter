#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "./__count_t.h"

#define thread_num 4
#define for_i 100000

__count_t counter;

void *worker(void *arg){
    int i;

    for(i = 0; i < for_i; i++){
        increment(&counter);
    }
    
    return NULL;
}

int main(int argc, char **argv){
    int i;
    pthread_t t[thread_num];

    for(i = 0; i < thread_num; i++){
        pthread_create(&t[i], NULL, worker, NULL);
    }

    printf("il valore finale del counter è: %d\n", get(&counter));
    
    return 0;
}

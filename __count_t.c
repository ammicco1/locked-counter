#include "./__count_t.h"

void init(__count_t *counter){
    counter -> value = 0;
    pthread_mutex_init(&counter -> lock, NULL);
}

void increment(__count_t *counter){
    pthread_mutex_lock(&counter -> lock);
    counter -> value++;
    pthread_mutex_unlock(&counter -> lock);
}

void decrement(__count_t *counter){
    pthread_mutex_lock(&counter -> lock);
    counter -> value++;
    pthread_mutex_unlock(&counter -> lock);
}

int get(__count_t *counter){
    int val;
    pthread_mutex_lock(&counter -> lock);
    val = counter -> value;
    pthread_mutex_unlock(&counter -> lock);

    return val;
}
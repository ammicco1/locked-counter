#include <pthread.h>

typedef struct __count_t{
    int value;
    pthread_mutex_t lock;
} __count_t;

void init(__count_t *counter);

void increment(__count_t *counter);

void decrement(__count_t *counter);

int get(__count_t *counter);
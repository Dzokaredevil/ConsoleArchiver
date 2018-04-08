#ifndef FUTURE_H_
# define FUTURE_H_

#include <sys/types.h>

typedef struct s_future
{
    void* (*start_routine)(void*);
    void *arg;
    void *result;

    int has_finished;

    pthread_mutex_t lock;
    pthread_cond_t cond;
} t_future;

t_future* create_future(void* (*start_routine)(void*), void *arg);
void delete_future(t_future *future);

void* future_get_result(t_future *future);
void future_set_finished(t_future *future);

int future_has_finished(t_future *future);
void future_wait_for_finish(t_future *future);

#endif 

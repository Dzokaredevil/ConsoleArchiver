#ifndef POOL_H_
# define POOL_H_

#include <sys/types.h>

#include "thread.h"
#include "future.h"
#include "syncqueue.h"

typedef struct s_pool
{
    t_thread **threads;

    pthread_mutex_t lock;
    int nb_max_thread;
    int current_thread_count;
    int nb_running_thread;

    t_syncqueue *queue;
} t_pool;

t_pool* create_pool(int nb_max_thread);
void delete_pool(t_pool *pool);

t_future* pool_submit_task(t_pool *pool, void* (*start_routine)(void*), void *arg);

#endif 
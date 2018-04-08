#ifndef SYNCQUEUE_H_
# define SYNCQUEUE_H_

#include <sys/types.h>

#include "queue.h"
#include "thread.h"

typedef struct s_syncqueue
{
    t_queue *queue;

    pthread_mutex_t lock;
    pthread_cond_t cond;
} t_syncqueue;

t_syncqueue* create_syncqueue();
void delete_syncqueue(t_syncqueue *queue);

void syncqueue_enqueue(t_syncqueue *queue, void *data);
void* syncqueue_dequeue(t_syncqueue *queue);
void* syncqueue_cancelable_dequeue(t_syncqueue *queue, t_thread *thread);
int synqueue_size(t_syncqueue *queue);
int syncqueue_is_empty(t_syncqueue *queue);

#endif

#ifndef QUEUE_H_
# define QUEUE_H_

struct s_queuenode
{
    struct s_queuenode *next;
    void *data;
};

typedef struct s_queue
{
    struct s_queuenode *head;
    struct s_queuenode *tail;

    int size;
} t_queue;

typedef struct s_queuenode t_queueitr;

t_queue* create_queue();
void delete_queue(t_queue *queue);

void queue_enqueue(t_queue *queue, void *data);
void* queue_dequeue(t_queue *queue);
void* queue_head(t_queue *queue);
int queue_size(t_queue *queue);
int queue_is_empty(t_queue *queue);
t_queueitr* queue_remove_itr(t_queue *queue, t_queueitr *itr);

t_queueitr* queue_begin(t_queue *queue);
t_queueitr* queue_end(t_queue *queue);
void queue_itr_incr(t_queueitr *itr);
void* queue_itr_data(t_queueitr *itr);

#endif 

#ifndef HUFFMANNODE_H_
# define HUFFMANNODE_H_

#include <stdint.h>

typedef struct s_huffmannode t_huffmannode;
struct s_huffmannode
{
    t_huffmannode *left;
    t_huffmannode *right;

    uint32_t weight;
    uint8_t data;
};

t_huffmannode* create_node();
void delete_node(const t_huffmannode *node);

#endif

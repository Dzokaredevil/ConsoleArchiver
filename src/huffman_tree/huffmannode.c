#include <stdlib.h>

#include "huffmannode.h"

t_huffmannode* create_node()
{
    t_huffmannode *node = calloc(1, sizeof(t_huffmannode));

    return node;
}

void delete_node(const t_huffmannode *node)
{
    if (node == NULL)
        return ;

    delete_node(node->left);
    delete_node(node->right);

    free((void*)node);
}

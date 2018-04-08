#ifndef HUFFMANTREE_H_
# define HUFFMANTREE_H_

#include <limits.h>

#include "huffmannode.h"

#define MAX_VALUE (UCHAR_MAX + 1)

typedef struct s_huffmantree t_huffmantree;
struct s_huffmantree
{
    t_huffmannode *root;

    uint8_t nb_leaf;
};

t_huffmantree* create_tree();
void delete_tree(const t_huffmantree *tree);
void tree_to_leafs(const t_huffmannode *node, const t_huffmannode *leafs[MAX_VALUE], uint16_t *current_idx);

#endif

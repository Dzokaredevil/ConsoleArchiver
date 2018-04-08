#include <stdlib.h>

#include "malloc.h"
#include "huffmantree.h"

t_huffmantree* create_tree()
{
    t_huffmantree *tree = calloc(1, sizeof(t_huffmantree));
    return tree;
}

void delete_tree(const t_huffmantree *tree)
{
    if (tree == NULL)
        return ;

    delete_node(tree->root);
    free((void*)tree);
}

void tree_to_leafs(const t_huffmannode *node, const t_huffmannode *leafs[MAX_VALUE], uint16_t *current_idx)
{
    if (node == NULL)
        return ;

    if (node->left == NULL && node->right == NULL)
    {
        leafs[*current_idx] = node;
        ++(*current_idx);
        return ;
    }

    tree_to_leafs(node->left, leafs, current_idx);
    tree_to_leafs(node->right, leafs, current_idx);
}

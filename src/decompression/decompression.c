#include <stdlib.h>

#include "decompression.h"

int decode_byte(const t_huffmantree *tree, const uint8_t *mem, int off, uint8_t *byte)
{
    int counter = 0;

    const t_huffmannode *node = tree->root;
    while (node->left != NULL)
    {
        uint8_t mask = 1 << off;
        uint8_t bit = (mem[0] & mask) != 0;

        node = bit ? node->right : node->left;

        ++counter;
        ++off;
        if (off > 7)
        {
            off = 0;
            ++mem;
        }
    }

    *byte = node->data;
    return counter;
}

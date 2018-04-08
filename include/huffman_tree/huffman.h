#ifndef HUFFMAN_H_
# define HUFFMAN_H_

#include "huffmantree.h"

t_huffmantree* get_tree_from_file_read(int fd, uint64_t block_size);
t_huffmantree* get_tree_from_memory(const uint8_t *mem, uint64_t size);
t_huffmantree* get_tree_from_leaf(t_huffmannode *leafs[MAX_VALUE]);

#endif 

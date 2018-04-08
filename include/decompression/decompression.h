#ifndef UNCOMPRESSION_H_
# define UNCOMPRESSION_H_

#include "huffman.h"

int decode_byte(const t_huffmantree *tree, const uint8_t *mem, int off, uint8_t *byte);

#endif 

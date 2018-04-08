#ifndef IO_OPERATION_H_
# define IO_OPERATION_H_

#include "decompression_threaded.h"
#include "compression_threaded.h"

uint32_t read_raw_data(t_compress_arg *arg, void *userdata);
uint32_t read_compressed_data(t_decompress_arg *arg, void *userdata);

uint32_t write_compressed_data(const t_compress_ret *ret, void *userdata);
uint32_t write_raw_data(const t_decompress_ret *ret, void *userdata);

#endif 

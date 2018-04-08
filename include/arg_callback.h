#ifndef ARG_CALLBACK_H_
# define ARG_CALLBACK_H_

#include <stdbool.h>

bool set_block_size(const char *option, const char *arg, void *userdata);
bool set_output_filename(const char *option, const char *arg, void *userdata);
bool set_thread_number(const char *option, const char *arg, void *userdata);
bool set_memlimit(const char *option, const char *arg, void *userdata);
bool set_compress(const char *option, const char *arg, void *userdata);
bool set_decompress(const char *option, const char *arg, void *userdata);
bool set_test(const char *option, const char *arg, void *userdata);

#endif

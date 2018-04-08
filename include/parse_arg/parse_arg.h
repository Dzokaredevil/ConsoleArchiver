#ifndef PARSE_ARG_H_
# define PARSE_ARG_H_

#include <stdbool.h>

#include "parse_error.h"

typedef bool (*arg_callback)(const char*, const char*, void*);

typedef enum argument
{
    NO_ARG          = 0,
    OPTIONAL_ARG    = 1,
    REQUIRED_ARG    = 2
} argument;

typedef struct opts
{
    char            short_opt;
    const char      *long_opt;
    argument        has_arg;

    arg_callback    cb;
    void            *user_data;
} opts;

int parse_arg(int *ac, char ***av, const opts options[], opt_error *error);

#endif 

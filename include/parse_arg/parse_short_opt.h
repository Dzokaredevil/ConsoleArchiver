#ifndef PARSE_SHORT_OPT_H_
# define PARSE_SHORT_OPT_H_

#include "parse_arg.h"

struct opts_arg
{
    const opts  *opt;
    const char  *arg;
};

int parse_short_opt(const char *short_opt, const char **next_opt, const opts options[], opt_error *error);

#endif 

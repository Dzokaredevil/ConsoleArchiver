#include <stdlib.h>

#include "parse_error.h"

int set_parse_error(opt_error *error, int argv_idx, int idx, error_type err_type, int short_arg)
{
    if (error == NULL)
        return -1;

    if (argv_idx != -1)
        error->argv_idx = argv_idx;
    if (idx != -1)
        error->idx = idx;
    if (err_type != DONT_CHANGE_ERROR_TYPE)
        error->err_type = err_type;
    if (short_arg >= 0)
        error->is_short_arg = short_arg != 0;

    return -1;
}

void clear_parse_error(opt_error *error)
{
    if (error == NULL)
        return ;

    error->argv_idx = -1;
    error->idx = -1;
    error->is_short_arg = false;
    error->err_type = NO_ERROR;
}

#include "cvector.h"

array allc_arr()
{
    array ret = (struct __array_t *)malloc(sizeof(struct __array_t));

    return ret;
}

int init_arr(array src, size_t cap)
{
    src->_first = (int *)malloc(sizeof(int) * cap);

    if (src->_first == NULL)
        return -1;

    src->_last = src->_first;
    src->_end = src->_first + (int)cap;

    return 0;
}

void free_arr(array *src)
{
    free((*src)->_first);
    free(*src);

    *src = NULL;
}

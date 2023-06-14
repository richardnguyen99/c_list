#ifndef __C_VECTOR_H__
#define __C_VECTOR_H__ 1

#include <stdlib.h>

struct __array_t
{
    int *_first;
    int *_last;
    int *_end;
};

typedef struct __array_t *array;

array allc_arr();

// Constructors
int init_arr(array src, size_t cap);
// int copy_arr(array src, array dest);
// int move_arr(array src, array dest);
// int fill_arr(array src, size_t size, int x);

// Capacities
// int rsrv_arr(array src, size_t cap);
// const size_t size_arr(array src);
// const size_t capc_arr(array src);

// Iterators
// int *begin();
// const int *cbegin();
// int *end();
// const int *cend();
// int *next(int *iter);

// Modifications
// size_t push_arr(array src, int x);
// size_t push_arr(array src, size_t n, int x);
// size_t rmve_arr(array src, size_t i);
// size_t rmve_arr(array src, size_t i, size_t n);
// size_t inst_arr(array src, size_t i, int x);
// size_t inst_arr(array src, size_t i, size_t n, int x);

// Helpers

// Destructor
void free_arr(array *src);

#endif

#include <stdio.h>
#include <assert.h>

#include "cvector.h"

int main(void)
{
    array arr = allc_arr();
    assert(arr);

    init_arr(arr, 8);

    free_arr(&arr);

    return 0;
}

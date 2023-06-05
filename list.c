#include "list.h"

int init_list(struct list_struct **list, size_t size, size_t len)
{
    // List must be NULL
    assert(*list == NULL);

    // Allocate memory for the list
    *list = malloc(sizeof(struct list_struct));

    if (*list == NULL)
        return -1;

    void *_start = malloc(size * len);

    if (_start == NULL)
        return -1;

    (*list)->_first = _start;
    (*list)->_last = _start;
    (*list)->_end = _start + (size * len);
    (*list)->_elm_size = size;

    return 0;
}

int populate_list(struct list_struct *list, ...)
{
    return 0;
}

int clone_list(struct list_struct *list, struct list_struct *clone)
{
    return 0;
}
int move_list(struct list_struct *list, struct list_struct *move)
{
    return 0;
}

void free_list(struct list_struct **list)
{
    assert(*list != NULL);

    free((*list)->_first);
    free(*list);
    *list = NULL;
}

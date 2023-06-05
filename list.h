#ifndef __LIST_H__
#define __LIST_H__ 1

#include <stdarg.h>
#include <stdlib.h>
#include <assert.h>

// Define initial capacity of the list
#define INIT_CAP 8

// Define the list structure
struct list_struct
{
    void *_first;
    void *_last;
    void *_end;

    size_t _elm_size;
};

int init_list(struct list_struct **list, size_t size, size_t len);
int populate_list(struct list_struct *list, ...);
int clone_list(struct list_struct *list, struct list_struct *clone);
int move_list(struct list_struct *list, struct list_struct *move);

void free_list(struct list_struct **list);

#endif // __LIST_H__

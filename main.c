/**
 * @file main.c
 * @author Richard Nguyen (richard@richardhnguyen.com)
 * @brief Driver for C List
 * @version 0.1
 * @date 2023-06-04
 *
 * @copyright Copyright (c) 2023
 */

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "list.h"

struct student
{
    char *name;
    int age;
};

int main(int argc, char *argv[])
{
    struct list_struct *list = NULL;
    assert(init_list(&list, sizeof(struct student), 8) != -1);

    struct student student;
    memset(&student, 0, sizeof(struct student));
    student.name = "Richard";
    student.age = 24;

    struct student student2;
    memset(&student2, 0, sizeof(struct student));
    student2.name = "John";
    student2.age = 25;

    *(struct student *)(list->_last) = student;
    list->_last += list->_elm_size;

    struct student *first_elm = (list->_first);

    printf("1. Name: %s\n", first_elm->name);
    printf("1. Age: %d\n", first_elm->age);

    *(struct student *)(list->_last) = student2;
    list->_last += list->_elm_size;

    struct student *second_elm = (list->_first + list->_elm_size);

    printf("2. Name: %s\n", second_elm->name);
    printf("2. Age: %d\n", second_elm->age);

    free_list(&list);

    return 0;
}

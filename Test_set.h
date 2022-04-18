#ifndef LINKED_LIST_BUBBLESORT_TEST_SET_H
#define LINKED_LIST_BUBBLESORT_TEST_SET_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "List_library.h"
#include "Sort_code.h"

int *convert_array(list_t *list, int *count);
bool test(list_t *list, int *template, size_t n);
int get_lenght(list_t *list);
void print_array(int *array, int count);

#endif //LINKED_LIST_BUBBLESORT_TEST_SET_H

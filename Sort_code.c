#include "Sort_code.h"

void swap(node_t *xp, node_t *yp)
{
    int temp = xp->data;
    xp->data = yp->data;
    yp->data = temp;
}

void bubble_sort(list_t *list)
{
    int control;

    node_t *ptr;
    node_t *temp_ptr = NULL;

    if(list == NULL || list->b_node == NULL) {
        fprintf(stderr, "Nothing to sort\n");
        fflush(stderr);
        return;
    }

    do{
        control = 0;
        ptr = list->b_node;

        while(ptr->next != temp_ptr) {
            if(ptr->data > ptr->next->data) {
                swap(ptr, ptr->next);
                control = 1;
            }
            ptr = ptr->next;
        }
        temp_ptr = ptr;
    }
    while(control);
}


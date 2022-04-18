#include "Test_set.h"

int get_lenght(list_t *list)
{
    if(NULL == list) {
        fprintf(stderr, "You fucked up!\n");
        fflush(stderr);
        return -1;
    }

    node_t *temp = list->b_node;

    int i = 0;
    while(temp != NULL) {
        temp = temp->next;
        i++;
    }

    return i;
}

int *convert_array(list_t *list, int *count)
{
    *count = get_lenght(list);
    if(*count <= 0) {
        fprintf(stderr, "Problem\n");
        fflush(stderr);
        exit(0);
    }

    node_t *temp = list->b_node;

    int *ret = malloc(sizeof(int) * (*count));
    if(!ret) {
        fprintf(stderr, "Not enough memory or else problem\n");
        fflush(stderr);
        return 0;
    }

    for(int i = 0; i < *count; i++) {
        ret[i] = temp->data;
        temp = temp->next;
    }

    return ret;
}


void print_array(int *array, int count)
{
    int i = 0;
    while(i < count) {
        printf("%d\n", array[i++]);
    }
}




bool test(list_t *list, int *template, size_t n)
{
    int help;

    int *tested = convert_array(list, &help);

    print_array(tested, help);

    return (memcmp(tested, template, 4 * n) == 0);
}


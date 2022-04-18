#include "Test_set.h"
#include "Sort_code.h"
#include "List_library.h"

int main(int argc, char *argv[])
{
    list_t *list = init_empty();

    add_end(list, 5);
    add_end(list, 4);
    add_end(list, 8);
    add_end(list, 1);
    add_end(list, 10);
    add_end(list, 2);
    add_end(list, 6);
    add_end(list, 9);
    add_end(list, 0);
    add_end(list, 7);
    add_end(list, 3);


    int template[11] = {0,1,2,3,4,5,6,7,8,9,10};

    printf("First print\n");
    print_list(list);

    printf("\n\n\n");

    bubble_sort(list);

    printf("Print sorted\n");
    print_list(list);

    printf("\n\n\n");

    printf("Print test\n");
    return(!test(list, template,11));
}
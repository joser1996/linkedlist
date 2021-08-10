#include <LinkedList.h>
#include <stdlib.h>

void test_invalid(void) {
    /* Test invalide cases */
    assert(list_destroy(NULL) == -1);
    assert(list_length(NULL) == -1);
    assert(list_insert(NULL, NULL));

    list_t l;
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr;

    /* Initialize the linked list */
    l = list_create();

    assert(list_insert(l, NULL) == -1);
    assert(list_insert(NULL, &data[0]) == -1);

}


int main(void) {
    test_invalid();
}
#ifndef LINKED_LIST
#define LINKED_LIST

/*
 * list_t - list type
 * Implementing generic linked list and defining type 
 */

typedef struct list* list_t;

//Create an empyt list
list_t list_create(void);

// Destroy list
int list_destroy(list_t list);

// Insert into our list
int list_insert(list_t list, void* data);

// get list length
int list_length(list_t list);

#endif
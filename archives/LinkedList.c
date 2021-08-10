#include "LinkedList.h"
#include "stdlib.h"
struct list_node;
typedef struct list_node* list_node_t;

struct list_node {
    void* data;
    list_node_t next;
};

struct list {
    list_node_t head;
    list_node_t tail;
    int count;
};

list_node_t list_node_create(void* data) {
    list_node_t node = malloc(sizeof(struct list_node));
    node->data = data;
    node->next = NULL;
    return node;
}

list_t list_create(void) {
    list_t list = malloc(sizeof(struct list));
    if (list == NULL) {
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;
    list->count = 0;
    return list;
}

int list_destroy(list_t list) {
    if (list == NULL || list->count != 0) {
        return -1;
    }
    free(list);
    return 0;
}

int list_insert(list_t list, void* data) {
    if (list == NULL || data == NULL) {
        return -1;
    }

    if (list->head == NULL) {
        //first insert
        list->head = list_node_create(data);
        list->tail = list_node_create(data);
    } else {
        list_node_t new_node = list_node_create(data);
        list->tail->next = new_node;
        list->tail = new_node;
    }
    list->count++;
    return 0;
}

int list_length(list_t list) {
    if (list == NULL) {
        return -1;
    }

    return list->count;
}
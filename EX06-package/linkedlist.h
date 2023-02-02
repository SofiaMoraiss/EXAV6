
#ifndef _LINKED_LIST_
#define _LINKED_LIST_

typedef struct LinkedList LinkedList;

LinkedList *list_construct();

LinkedList* list_add_left(LinkedList *lst, void *);
void * list_pop_left(LinkedList *lst);
void * list_get_left(LinkedList *lst);
void list_print(LinkedList *lst);
void list_delete(LinkedList *lst);
void list_add_sorted(LinkedList *lst, void *);

// TODO: Funcao a ser implementada
void list_sort(LinkedList *lst, int compare(void *, void *));

#endif

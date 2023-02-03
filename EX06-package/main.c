
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"

int compara(void *a, void *b){
  return strcmp((char*)a, (char*)b);
}

int main(){

  
LinkedList * lst=list_construct();
char string[50];

    while (1){
        scanf("%s%*c", string);
        if (!strcmp(string,".")){
            break;
        }
        list_add_left(lst, strdup(string));
        //list_print(lst);
        
    }
  
    list_sort(lst, compara);
    list_print(lst);
    list_delete(lst);

     return 0;
}


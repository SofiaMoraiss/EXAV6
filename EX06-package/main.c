
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"

int compare(void *a, void *b) {
  int i,tamA, tamB,menor;

  char str1[50];
  strcpy(str1,(char*)a);
  char str2[50];
  strcpy(str2,(char*)b);
  tamA = strlen(a);
  tamB = strlen(b);

  if (tamA < tamB) {
    menor = tamA;
  }
  else {
    menor = tamB;
  }

  for (i = 0; i < menor; i++) {
    if (str1[i] < str2[i]) {
      return(1);
    }

    if (str1[i] > str2[i]) {
      return(-1);
    }
  }
 
  if (tamA == tamB) {
    return(0);
  }

  if (tamA < tamB) {
    return(1);
  }

  return(-1);
}

int main()
{
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

    list_sort(lst, compare);
    //list_print(lst);
    list_delete(lst);

     return 0;
}


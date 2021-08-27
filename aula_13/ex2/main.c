#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int value;
  char text[10];
} Data;

typedef struct linked_list {
  Data data;
  struct linked_list *next;
} llist;

llist* create_list();
void append(llist*, Data data);
void ShowList(llist *p);
llist* destroy_list(llist*);

int main(void) {
  llist *head;
  head = create_list();
  Data d1 = {1, "Caio"};
  Data d2 = {2, "Toledo"};
  append(head, d1);
  append(head, d2);
  printf("Lista antes de ser destruida\n");
  ShowList(head);
  destroy_list(head);
  return 0;
}

llist* destroy_list(llist *list) {
  llist *destroyer = list;
  while( list->next != NULL ) {
    destroyer = list->next;
    free(list);
    list = destroyer;
  }
  free(list);
  return NULL;
}

void append(llist *list, Data data) {
  llist *node = (llist*) malloc(sizeof(llist));
  llist *aux = list;
  while( aux->next != NULL )
    aux = list->next;
  aux->next = node;
  node->data = data;
  node->next = NULL;
}

llist* create_list(){
  llist *head;
  head = (llist*) malloc(sizeof(llist));
  if( head == NULL ) {
    printf("Nao consegui alocar a memoria...\n");
    exit(EXIT_FAILURE);
  }
  head->next = NULL; // *(head).next == head->next
  return head;
}

void ShowList(llist *p){
    llist *aux;
    aux = p;
    aux = aux->next;
    while(aux != NULL){
        printf("%i\t%s\n", aux->data.value, aux->data.text);
        aux = aux->next;
    }
}
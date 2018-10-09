#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node *head){

  if (head == NULL)
    printf("NULL\n");
  else{
    printf("%d -> ", head->i);
    print_list(head->next);
  }
  
}

struct node * insert_front(struct node *head, int x){

  struct node *new_node = malloc( sizeof(struct node) );;
  new_node->i = x;
  new_node->next = head;
  
  return new_node;
}

struct node * free_list(struct node *head){

  //print_list(head);
  if (head != NULL){
    free(head);
    free_list( head->next );
  }
  
  return NULL;
}

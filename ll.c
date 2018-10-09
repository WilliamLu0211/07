#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next };

void print_list(struct node *head){

  if (*head == NULL)
    printf("NULL");
  else{
    printf("%d -> ", head->i);
    print_list(head->next);
  }
  
}

struct node * insert_front(Struct node *head, int x){

  struct node *new_node = malloc( sizeof(struct node) );;
  new_node->i = x;
  new_node->next = head;
  
  return new_node;
}

struct node * free_list(struct node *head){

  struct node *p = head;
  while (*p != NULL)
    free(p);
  
  return head;
}

#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

int main(){

  struct node *my_list;

  printf("       empty list: ");
  print_list(my_list);

  my_list = insert_front(my_list, 2);
  printf("after inserting 2: ");
  print_list(my_list);
  
  my_list = insert_front(my_list, 9);
  printf("after inserting 9: ");
  print_list(my_list);

  my_list = insert_front(my_list, 0);
  printf("after inserting 0: ");
  print_list(my_list);

  my_list = insert_front(my_list, 8);
  printf("after inserting 8: ");
  print_list(my_list);

  my_list = insert_front(my_list, 9);
  printf("after inserting 9: ");
  print_list(my_list);

  my_list = insert_front(my_list, 5);
  printf("after inserting 5: ");
  print_list(my_list);

  my_list = free_list(my_list);
  printf("     after free(): ");
  print_list(my_list);
  
  return 0;
}

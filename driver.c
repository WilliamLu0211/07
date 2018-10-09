#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

int main(){

  struct node *my_list;
  my_list = insert_front(my_list, 4);
  print_list(my_list);
  return 0;
}

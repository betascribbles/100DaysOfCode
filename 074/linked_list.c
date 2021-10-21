/* Declare, populate, link and create a linked list */

#include <stdio.h>
#include <stdlib.h>

/* Basic structure for linked lists */

struct linked_list{
      int data;
      struct linked_list* next;
};

/* used function */
void print_list(struct linked_list* num)
{
      while (num != NULL){
            printf(" %d", num->data);
            num = num->next;
      }
}

int main()
{
      /* creating copies of struct for the 5 nodes */
      struct linked_list* head = NULL;
      struct linked_list* second = NULL;
      struct linked_list* third = NULL;
      struct linked_list* forth = NULL;
      struct linked_list* fifth = NULL;

      /* allocate memory for the nodes */
      head = (struct linked_list*)malloc(sizeof(struct linked_list));
      second= (struct linked_list*)malloc(sizeof(struct linked_list));
      third= (struct linked_list*)malloc(sizeof(struct linked_list));
      forth= (struct linked_list*)malloc(sizeof(struct linked_list));
      fifth= (struct linked_list*)malloc(sizeof(struct linked_list));

      /* assign data for the nodes */
      head->data = 1;
      second->data = 2;
      third->data = 3;
      forth->data = 4;
      fifth->data =5;

      /* connect the nodes to form a list */
      head->next = second;
      second->next = third;
      third->next = forth;
      forth->next = fifth;
      fifth->next = NULL;

      /* print linked list */
      print_list(head);
      return 0;
}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* Adds a new node at the beginning of a linked list */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* frees a node */
void free_list(list_t *head)
{
      if (head != NULL)
      {
            
      }
}

/* adds a node to a list */
list_t *add_node(list_t **head, const char *str){
   
            list_t *new;
            char* str_dup;
            int len;

            new = malloc(sizeof(list_t));
            if (new == NULL)
                  return(NULL);

            str_dup = strdup(str);
            if (str_dup == NULL)
            {
                  free(new);
                  return(NULL);
            }

            for(len = 0; str[len];)
                  len++;

            new->str = str_dup;
            new->len = len;
            new->next = *head;

            *head = new;

            return(new);      
}

/* printing the list */
size_t print_list(const list_t *h)
{
     size_t total_nodes = 0;

     while(h)
     {
           if (h->str == NULL){
                 printf("[0] (nil)\n");
           }
           else
           {
                 printf("[%d] %s\n", h->len, h->str);
           }
           
            total_nodes++;
            h = h->next;
     }
     return total_nodes;
}

/* START OF PROGRAM */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
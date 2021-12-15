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

/* adds node at the end of a list */
list_t *add_node_end(list_t **head, const char *str)
{
      list_t *new, *last;
      char* str_dup;
      int len;

      new = malloc(sizeof(list_t));
      if (new == NULL)
            return (NULL);

      str_dup = strdup(str);
      if (str_dup == NULL)
      {
            free(new);
            return (NULL);
      }

      for(len = 0; str[len];)
            len++;

      new->str = str_dup;
      new->len = len;
      new->next = NULL;

      
      if (*head == NULL)
            *head = new;
      else
      {
            last = *head;
            while (last->next != NULL)
                  last = last->next;
            last->next = new;
      }

      return (*head);
}

/* START OF PROGRAM */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
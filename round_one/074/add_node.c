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
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
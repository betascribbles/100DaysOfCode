#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Struct used */
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
                 printf("[%d] %s", h->len, h->str);
           }
           
            total_nodes++;
            h = h->next;
     }
     return total_nodes;
}

/* START OF THE PROGRAM*/
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

/** OUTPUT
firdaus@Firdaus-PC:/100DaysOfCode/074$ 
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 print_list.c  -o print_list
firdaus@Firdaus-PC:/100DaysOfCode/074$ 
./print_list
[5] Hello[5] World-> 2 elements

[0] (nil)
[5] World-> 2 elements
*/
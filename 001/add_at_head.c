/**
* file name: add_at_head.c
* output file: add_at_head
* Desc: Adds a node at the beginning of a linked list
* 	and prints the list in the terminal
*/

/**
* STEPS TO INSERT A NODE AT THE BEGINNING OF A LINKED LIST
* 1. Create a new node
* 2. Make the new node point to the head
* 3. Asign the new node to the head
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * USED THIS STRUCT IN THIS PROGRAM
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * add_node - adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
        char *dup;
        int len;
        list_t *new;

        new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);

        dup = strdup(str);
        if (dup == NULL)
        {
                free(new);
                return (NULL);
        }

        for (len = 0; str[len];)
                len++;

        new->str = dup;
        new->len = len;
        new->next = *head;

        *head = new;

        return (new);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
        size_t nodes = 0;

        while (h)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");

                else
                        printf("[%d] %s\n", h->len, h->str);

                nodes++;
                h = h->next;
        }

        return (nodes);
}

/*
* main - the start of this program
* Desc: when add_node() is called, it adds a node at the head of the list.
* Output: Good is Code.
* Good = head
* is = node 1
* Code = node 2
*/
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Code");
    add_node(&head, "is");
    add_node(&head, "Good");
    print_list(head);
    return (0);
}

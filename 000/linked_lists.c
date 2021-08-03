/*
* File name: linked_lists.c
* Output file: linked_lists
* Desc: A program to print a linked list
* Date: Monday 2nd August 2021
*/

#include <stdio.h>
#include <stdlib.h>

/*
* node - new struct
* @value: data for the node
* @*next: points to the next node
*
* Desc: contains value and points to *next 
*/
struct node{
	int value;
	struct node *next;
};
typedef struct node node_t;

/**
* printlist - prints the linked list
* @temp: temporary variable used as a counter throughout the linked list
*
* Desc: print the value of the list if not NULL then update temp
* Return: nothing
*/
void printlist(node_t *head)
{
        node_t *temp = head;

        while (temp != NULL)
        {
                printf("%d - ", temp->value);
                temp = temp->next;
        }
        printf("\n");

}

/*
* main - start of this program
* @n1: node 1
* @n2: node 2
* @n3: node 3
* @head: start of linked list
* 
* Desc: assigns value to the nodes and link them
* Return: 0 on success
*/
int main()
{
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;

	head  = &n2;
	n2.next = &n1;
	n1.next = &n3;
	n3.next = NULL;

	printlist(head);
	return (0);
}

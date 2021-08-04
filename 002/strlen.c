/**
* file name: strlen.c
* output file: strlen
* Desc: A program that returns the length of a string from the user
*/

#include <stdio.h>

/**
* _strlen - takes a string and returns its length
* @i: counter variable
* @*s: the string entered by the user from the terminal
* Return: Length of the string = i
*/
int _strlen(char *s)
{
	int i;

	for(i = 0; s[i];)
		i++;
		
	return(i);
}

/**
* main - start of this program
* @str: string entered by user
* Return: 0 when runs successfully
*/
int main()
{
	char str[100];

	printf("Enter your string\n");
	scanf("%s",str);

	printf("%s is %i characters\n", str, _strlen(str));

	return 0;
}

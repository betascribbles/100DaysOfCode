/**
* filename: puts.c
* output file: puts
* Desc: takes a string from stdin and returns it to stdiot
*	followed by a new line
*/

#include <stdio.h>

/**
* _puts - takes a string from stdin
* @*s: String pointer
* @i: counter variable
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i] && (s[i] != '\0'))
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}

/**
* main - start of the program
* @c: character array
* 
* Returns: 0 on success
*/
int main()
{
	char c[100]; 

	printf("Enter your string\n");
	scanf("%s", c);

	_puts(c);
	printf("You have entered %s",c);

	return 0;
}

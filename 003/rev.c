/**
* filename: rev.c
* output file: rev
* Desc: A program that reverses a string
*/

#include <stdio.h>

/**
* rev - reads a string and reverses it
* @*s: the string to be read
* @i: just an int pointer
*
*/
void rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

/**
* main - start of this program
* @*str; string to be reversed
*
* Returns: 0 on success
*/
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	rev(str);
	return (0);
}

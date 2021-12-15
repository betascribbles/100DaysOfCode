/**
* filename: Puts2.c
* output file: puts2
* Desc: Prints a string on stdout
*/

#include <stdio.h>

/**
* _puts - Reads string pointers
* @i: counter var
* @s: string read
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
}

/**
* main - start of the prog
* @*str: str to be read
*/
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

/**
* A program that prints ever other (next) digit of the given string
*/

#include <stdio.h>

/**
* otherX - prints every next number
* @i: counter var
8 @*s: string in question
*/
void otherX(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(i % 2 == 0){
			putchar(s[i]);
		}
		i++;
	}
}

/**
* main - start of this program
* @str: string in question
* returns: 0 is run successfully\
*/
int main(void)
{
    char *str;

    str = "0123456789";
    otherX(str);
    return (0);
}

/**
* filename: strcat.c
* output file: strcat
* Desc: this program concatenates 2 strings
* @S1: first string
* S2: second string
*/

#include <stdio.h>

char * _strcat(char *dest, char *src);

int main()
{
	char S1[100] = "firdaus is ";
	char S2[100] = "coding";
	char *ptr;

	ptr = _strcat(S1, S2);
	printf("%s\n", ptr);
}

char * _strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	return (dest);
}

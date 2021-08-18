#include <stdio.h>

#define MAX(a,b) (a > b) ? a : b

int moreOnes(int *binString, int binLen);
int main()
{
	int *binString;
	int result;

	int binLen = 9;
	int bin = 0110111011;
	
	binString = &bin;

	result = moreOnes(bin, binLen);
	printf("%i\n",result);
}

int moreOnes(int *binString, int binLen)
{
	int len = 0, max = 0;

	for(int i = 0; i < binLen; i++)
	{
		if (binString[i] == 1)
		{
			len++;
			max = MAX(len, max);
			
		}
		else
			len = 0;
	}
	return (max);
}

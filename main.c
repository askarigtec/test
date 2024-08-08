
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FF_FIND 1
#define FF_NOTFIND 0
#define LLLEN 100

int xx(char *str)
{
	int ret = FF_NOTFIND;
	do
	{
		if (str != NULL)
		{
			strcpy(str, "ddddddddd");
			ret = FF_FIND;
		}

	} while (0);

	return (ret);
}
int main()
{
	char xxx[LLLEN];
	printf("1\r\n");
	xx(xxx);
	printf("2\r\n");

	return (0);
}

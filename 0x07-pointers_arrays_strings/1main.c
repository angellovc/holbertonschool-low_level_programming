#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] ="This is a simple string";
	char *pch;
	pch = strstr (str,"S");
	puts (pch);
	return 0;
}

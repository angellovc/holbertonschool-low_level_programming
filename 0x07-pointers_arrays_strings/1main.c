#include <stdio.h>
#include <string.h>
int main ()
{
	int len = strspn("helwohello","hh");
	printf("Length of initial segment matching : %d\n", len );
	return(0);
}

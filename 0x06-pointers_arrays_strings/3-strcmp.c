#include "holberton.h"
/**
 *_strcmp - this is a strcmp function
 *@s1: array
 *@s2: array
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, ressult = 0;

	do {
		if (*(s1 + i) == *(s2 + i))
		{
			ressult = 0;
			i++;
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			ressult = (*(s1 + i) - '0') - (*(s2 + i) - '0');
			break;
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			ressult =  (*(s1 + i) - '0') -  (*(s2 + i) - '0');
			break;
		}
	} while (*(s1 + i) != '\0' || *(s2 + i) != '\0');
	return (ressult);
}

#include "holberton.h"
/**
 *_abs - check
 *
 *
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n == 0)
		return (n);
	if (n < 0)
		return (n = -n);
	return (n);
}

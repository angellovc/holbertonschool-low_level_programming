#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hour1, hour2, min, seg, comma = 44, space = 32;

	for (hour1 = 48; hour1 <= 57; hour1++)
	{
		for (hour2 = 48; hour2 <= 57; hour2++)
		{
			for (min = 48; min <= 57; min++)
			{
				for (seg = 48; seg <= 57; seg++)
				{
					putchar(hour1);
					putchar(hour2);
					putchar(space);
					putchar(min);
					putchar(seg);
					if (hour1 != 57 && hour2 != 57 && min == 57 && seg == 57)
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

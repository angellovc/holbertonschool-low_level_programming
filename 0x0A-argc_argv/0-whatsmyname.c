#include <stdio.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

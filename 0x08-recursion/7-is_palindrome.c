#include "holberton.h"
#include <stdio.h>
/**
 *is_palindrome - find if a string is a palindrome
 *@s:string
 *Return: 1 if is a palindrome 0 if dont
 */
int is_palindrome(char *s)
{
	int i = 0, l = 0;

	l = _strlen_recursion(s) - 1;
	return (palindrome(s, i, l));
}
/**
 *_strlen_recursion - find a length
 *@s: string
 *Return: return the length of s
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);
	if (*(s + 1) == '\0')
		return (n);
	n = 1 +	_strlen_recursion(s + 1);
	return (n);
}
/**
 *palindrome - make the comparition
 *@s: string
 *@i: iterative
 *@l: length
 *Return: ressult
 */
int palindrome(char *s, int i, int l)
{
	int ressult = 0;

	if (s[i] != s[l])
	{
		return (0);
	}
	if (l == 1)
	{
		return (1);
	}
	if (s[i] == s[l])
		i++;
		l--;
		ressult = palindrome(s, i, l);
	return (ressult);
}

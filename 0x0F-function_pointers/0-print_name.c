/**
 *print_name - make a call back to a function
 *@name: string pass through the call back function
 *@f: function to call back
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == '\0')
		return;
	(*f)(name);
}

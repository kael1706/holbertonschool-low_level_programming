/**
*print_name - print name if have functions
*@name: string
*@f: void function(string)
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

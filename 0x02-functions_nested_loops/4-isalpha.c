/**
* _isalpha - detect if is alphabetic character
*  @c: the character for scanning
*  Return: 0 -> !alphabetic, 1 -> alphabetic
*
*/
int _isalpha(int c)
{
	int resp;

	if (c > 64 && c < 123)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}

	return (resp);

}

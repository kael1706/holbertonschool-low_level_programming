
/**
* hash_djb2 - is a hash algoritm
* @str: keyword that I need to search
*
* Return: preprocessed numeric key
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

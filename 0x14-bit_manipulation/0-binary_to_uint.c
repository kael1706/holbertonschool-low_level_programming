#include "holberton.h"

/**
  *_strlen - returns the length of a string
  *@s: string
  *
  *Return: int (size of string)
  */
int _strlen(const char *s)
{
	int letter = 0;

	while (s[letter] != '\0')
	{
		letter++;
	}
	return (letter);
}

/**
  * _strcpy - copy char
  * @dest: pointer var
  * @src: pointer txt
  *
  * Return: pointer
  */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  *rev_string - string^-1
  *@s: char
  */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char a;

	while (s[j] != '\0')
		j = j + 1;
	for (i = 0; i < j / 2; i++)
	{
		a = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = a;
	}
}

/**
  * _pow - answer = base^power
  * @b: base
  * @power: power of the base
  * Return: answer
  */
unsigned int _pow(int b, int power)
{
	unsigned int answer = 1;

	while (power != 0)
	{
		answer = answer * b;
		power = power - 1;
	}
	return (answer);
}

/**
  * binary_to_uint - binary to unsigned int
  * @b: binary number
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	char *word;
	unsigned int result = 0;
	int l,  k = 0;

	l = _strlen(b);
	word = malloc((l + 1) * sizeof(char *));
	_strcpy(word, b);
	rev_string(word);

	if (b == NULL || word == NULL)
		return (0);

	while (k < l)
	{
		if (word[k] == '1')
			result = result + _pow(2, k);
		else if (word[k] != '0')
			return (0);
		k++;
	}
	return (result);
}


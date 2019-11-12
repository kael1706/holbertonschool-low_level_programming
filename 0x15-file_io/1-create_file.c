#include "holberton.h"

/**
  * create_file - create a file.
  * @filename: string
  * @text_content: content of file
  * Return: 1 | -1
  */
int create_file(const char *filename, char *text_content)
{
	unsigned int txt_l;
	int fDescriptor, bW;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (txt_l = 0; text_content[txt_l] != '\0'; txt_l++)
		;
	fDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fDescriptor == -1)
		return (-1);
	bW = write(fDescriptor, text_content, txt_l);
	if (bW == -1)
		return (-1);
	close(fDescriptor);
	return (1);
}


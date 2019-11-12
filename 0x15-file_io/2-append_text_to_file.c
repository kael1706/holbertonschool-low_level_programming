#include "holberton.h"

/**
  * append_text_to_file - append text at the end of a file.
  * @filename: string
  * @text_content: text for the file
  * Return: 1 | -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int txt_l;
	int fDescriptor, bW;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (txt_l = 0; text_content[txt_l] != '\0'; txt_l++)
		;
	fDescriptor = open(filename, O_RDWR | O_APPEND);
	if (fDescriptor == -1)
		return (-1);
	bW = write(fDescriptor, text_content, txt_l);
	if (bW == -1)
		return (-1);
	close(fDescriptor);
	return (1);
}

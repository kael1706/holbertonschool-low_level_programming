#include "holberton.h"

/**
  * showError_100 - error type 100 msj
  * @closeR: return of close()
  * @fD: file descriptor
  * Return: Error number
  */
void showError_100(int closeR, int fD)
{
	if (closeR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fD);
		exit(100);
	}
}

/**
  * showError_99 - error type 99 msj
  * @fD: file descriptor
  * @filename: string
  * Return: Error number
  */
void showError_99(int fD, char *filename)
{
	if (fD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
  * showError_98 - error type 98 msj
  * @fD: file descriptor
  * @filename: string
  * Return: Error number
  */
void showError_98(int fD, char *filename)
{
	if (fD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
  * showError_97 - error 97 msj
  * @argc: count of command line
  * Return: Error number
  */
void showError_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
  * main - copy the content. file1 == file2.
  * @argc: n arguements
  * @argv: arguements of the command line
  * Return: 0
  */
int main(int argc, char *argv[])
{
	char *fileName2;
	char *fileName1;
	char buffer[1024];
	int fD1, fD2, bR, bW, rClose1, rClose2;

	showError_97(argc);
	fileName1 = argv[1];
	fD1 = open(fileName1, O_RDONLY);
	showError_98(fD1, fileName1);
	fileName2 = argv[2];
	fD2 = open(fileName2, O_CREAT | O_RDWR | O_TRUNC, 0664);
	showError_99(fD2, fileName2);
	while ((bR = read(fD1, buffer, sizeof(buffer))) > 0)
	{
		showError_98(bR, fileName1);
		bW = write(fD2, buffer, bR);
		showError_99(bW, fileName2);
		if (bR != bW)
			showError_99((-1), fileName2);
	}
	rClose1 = close(fD1);
	showError_100(rClose1, fD1);
	rClose2 = close(fD2);
	showError_100(rClose2, fD2);
	return (0);
}


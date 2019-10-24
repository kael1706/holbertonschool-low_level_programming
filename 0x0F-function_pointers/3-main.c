#include "3-calc.h"

/**
* main - operate numbers
* @argc: #arguments
* @argv: arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int resp;
	int limit = 4;

	if (argc != limit)
	{
		/**insufficient arguments*/
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		/**bad arguments*/
		printf("Error\n");
		exit(100);
	}
	resp = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resp);
	return (0);
}

#include "holberton.h"

/**
* swap_int - exchange the value of two numbers
*@a: value address
*@b: value address
*/
void swap_int(int *a, int *b)
{
	/*a and b are address*/
	/* ram=null, *b=42 */
	int ram = *b;
	/* ram=42, *b=42 */
	/*  *b=42 *a=98 */
	*b = *a;
	/*  *b=98 *a=98 */
	/* *a=98 ram=42 */
	*a = ram;
	/* *a=42, ram=42*/
}

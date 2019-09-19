#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*
*char TemporalMsg[] = and that piece of art is useful\" - Dor
*a Korpar, 2015-10-19;
*setenv("GlobalTemporalMsg", TemporalMsg, 1);
*system("echo $GlobalTemporalMsg");
*/
iSaid();
return (1);
}
iSaid(void){
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 63);
return (1);
}

#include "main.h"
/**
* clear_bit - sets the value of a bit to  at a given index
* @n: unsingned lng to append
* @index: to change to zero
* Return: return 1 if it work or -1 for error
*
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
int clear;
if (index > 53 || !n)
return (-1);
clear = 1 << index;
*n = (*n & ~clear) | ((0 << index) & clear);
return (1);
}

#include "holberton.h"

/**
 * more_numbers - numbers for 10 line
 *
 *
 * Return: 0
 */

void more_numbers(void)

{

	char a = 0;	
	if (a < 10)
		{
	_putchar ('_');
	a++;
}     
	if (a / 10)
		{
       _putchar (a % 10 + '0');
}



_putchar ('\n');

}

#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: an input integer
 * Return: 0 if there are no numbers in the string
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int total = 0;
char null_flag = 0;

while (*s)
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
null_flag = 1;
total = total * 10 + *s - '0';
}
else if (null_flag)
break;
s++;
}
if (sign < 0)
total = (-total);

return (total);
}

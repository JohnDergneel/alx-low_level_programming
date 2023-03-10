#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: an input string
 * @src: an input string
 * Return:  pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int bob = 0;
int a = 0;

while (*(src + bob) != '\0')
{
bob++;
}
for (; a < bob; a++)
{
dest[a] = src[a];
}
dest[bob] = '\0';
return (dest);
}

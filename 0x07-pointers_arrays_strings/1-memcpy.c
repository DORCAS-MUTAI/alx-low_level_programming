 #include "main.h"
  2 /**
  3 ***_memcpy - copies a string
  4 *@dest: num 1
  5 *@src: num 2
  6 *@n: condition
  7 *Return: dest
  8 */
  9 
 10 char *_memcpy(char *dest, char *src, int n)
 11 {
 12 	int j;
 13 
 14 	j = 0;
 15 	while (j < n && src[j] != 0)
 16 	{
 17 		dest[j] = src[j];
 18 		j++;
 19	}
 20 	while (j < n)
 21 	{
 22 		dest[j] = '\0';
 23 		j++;
 24 	}
 25 	return (dest);
 26 }

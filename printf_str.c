#include "main.h"
/**
  * _strlen - Returns the length of a string.
  * @s: Typ char pointer.
  * Return: c.
  */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
  * _strlenc - strlen function but applied for constant char pointers
  * @s: type char pointer
  * Return:c
  */
int _strlenc(const char *s)
{
	int ;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

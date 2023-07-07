#include "main.h"
/**
  *get_endianness - checks the endianness of the system
  *Return: 1 if little or 0 if big endian
  */
int get_endianness(void)
{
	int a = 1;
	char *ptr = NULL;

	ptr = (char *)&a;
	if (*ptr == 1)
		return (1);
	else
		return (0);
}

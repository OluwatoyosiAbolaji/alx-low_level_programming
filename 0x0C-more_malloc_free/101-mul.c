#include "main.h"

/**
  *printchars - converts integers to chars and prints them
  *@a: pointer to array of integers
  *@length: length of array
  *
  *Return: returns void
  */
void printchars(int *a, int length)
{
	int i = 0;
	char c;

	while (a[i] == 0 && i < length)
		i++;
	if (i == length)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (; i < length; i++)
		{
			c = a[i] + '0';
			_putchar (c);
		}
		_putchar('\n');
	}
}
/**
  *add - adds the array after multiplication
  *@ptr: pointer to array of integers
  *@length: length of array
  *
  *Return: returns void
  */
void add(int *ptr, int length)
{
	int i, carry = 0;

	for (i = length - 1; i >= 0; i--)
	{
		if (ptr[i] > 9)
		{
			carry = ptr[i] / 10;
			ptr[i] %= 10;
			ptr[i - 1] += carry;
		}
	}
}
/**
  *printchars2 - prints all chars in an array
  *@ptr: pointer to array of chars
  *@length: length of array
  *
  *Return: returns void
  */
void printchars2(char *ptr, int length)
{
	int i;

	for (i = 0; i < length; i++)
		_putchar(ptr[i]);
	_putchar('\n');
}

/**
  *main - entry point of program
  *@argc: argument count
  *@argv: array of arguments passed in strings
  *
  *Return: returns 0 (success)
  */
int main(int argc, char *argv[])
{
	int i, j, length, len1, len2, digit, carry;
	int *ptr;
	char *ptr1 = argv[1];
	char *ptr2 = argv[2];
	char *error = "Error";

	if (argc != 3)
	{
		printchars2(error, 5);
		exit(98);
	}
	for (len1 = 0; *(ptr1 + len1);)
	{
		len1++;
	}
	for (len2 = 0; *(ptr2 + len2);)
		len2++;
	length = len1 + len2;
	ptr = malloc(sizeof(int) * length);
	for (i = 0; i < length; i++)
		ptr[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (ptr1[i] - '0') * (ptr2[j] - '0') + carry;
			carry = digit / 10;
			ptr[i + j + 1] += digit % 10;
		}
		ptr[i + j + 1] += carry;
	}
	add(ptr, length);
	printchars(ptr, length);
	free(ptr);
	return (0);
}

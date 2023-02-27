#include "main.h"
/**
  * swap_int - swaps two integer values
  * @*a - pointer to first value
  * @*b - pointer to second value
  *
  * return: always void
  */

void swap_int(int *a, int *b)
	int c;
	int c = *a;
	int *a = *b;
	int *b = *c;


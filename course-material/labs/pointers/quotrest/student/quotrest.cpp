#include <iostream>

void quotrest(int x, int y, int* q, int* r)
{
	int quotient = x / y;
	int rest = x % y;

	*q = quotient;
	*r = rest;
}
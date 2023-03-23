int* min(int* x, int* y, int* z)
{
	if (*x < *y && *x < *z)
	{
		return x;
	}
	else if (*y < *z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
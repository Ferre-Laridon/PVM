#include "util.h";


int* max(int* a, int* b, int* c)
{
    if (*a >= *b && *a >= *c)
    {
        return a;
    }
    else if (*b >= *c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

void minmax(int* a, int* b, int* c, int** x, int** y)
{
    *x = min(a, b, c);
    *y = max(a, b, c);
}

void swap_min_and_max(int* x, int* y, int* z)
{
    int* min;
    int* max;
    minmax(x, y, z, &min, &max);
    swap(min, max);
}
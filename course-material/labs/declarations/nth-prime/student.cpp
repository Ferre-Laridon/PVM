// Start counting at 0: nth_prime(0) == 2
// (no, 1 is not a prime)
unsigned sqr(unsigned n)
{
    return n * n;
}

bool is_div_by(unsigned a, unsigned b)
{
    return b != 0 ? a % b == 0 : false;
}

bool is_prime(unsigned n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        int k = 2;
        while (sqr(k) <= n)
        {
            if (is_div_by(n, k)) 
            {
                return false;
            }
            k++;
        }
        return true;
    }
}

unsigned nth_prime(unsigned n)
{
    int k = 2;
    while (n > 0)
    {
        k++;
        if (is_prime(k))
        {
            n--;
        }
    }
    return k;
}
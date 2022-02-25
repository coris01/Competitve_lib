int64_t power(int64_t a, int64_t b)
{
	int64_t result = 1;
	while(b > 0)
	{
		if (b % 2 == 1)
		{
			result = (result % mod) * (a % mod);
		}
		a = (a % mod)*(a % mod);
		b /= 2;
	}
	return result % mod;
}

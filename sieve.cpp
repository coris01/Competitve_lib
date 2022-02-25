vector<bool> isp;
vector<int> primes;
vector<short> mn;

void Sieve(int n, bool gen_primes = false, bool gen_mn = false) 
{
    isp.assign(n + 1, true); isp[0] = isp[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (isp[i])
            for (int j = i * i; j <= n; j += i)
                isp[j] = false;

    if (gen_primes)
        for (int i = 2; i <= n; ++i)
            if (isp[i])
                primes.push_back(i);

    if (gen_mn) 
    {
        mn.resize(n + 1);
        for (int i = 2; i * i <= n; ++i)
            if (isp[i])
                for (int j = i * i; j <= n; j += i)
                    mn[j] = i;
    }
}

class Solution
{
public:
    long fact(int n)
    {
        long i = 1;
        long ans = 1;
        while (i <= n)
        {
            ans = (ans * i) % 1000000007;
            i++;
        }
        return ans;
    }

    int numPrimeArrangements(int n)
    {

        vector<int> sieve(n + 1, 0);

        for (int i = 2; i * i <= n; i++)
        {
            if (sieve[i] == 0)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    sieve[j] = 1;
                }
            }
        }

        int primes = 0;
        for (int i = 2; i <= n; i++)
        {
            if (sieve[i] == 0)
                primes++;
        }
        int nprimes = n - primes;
        return (fact(primes) * fact(nprimes)) % 1000000007;
    }
};
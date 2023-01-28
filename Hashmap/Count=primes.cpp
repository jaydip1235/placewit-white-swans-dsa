class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int> sieve(n, 0);

        for (int i = 2; i * i < n; i++)
        {
            if (sieve[i] == 0)
            {
                for (int j = i * i; j < n; j += i)
                {
                    sieve[j] = 1;
                }
            }
        }

        int ans = 0;
        for (int i = 2; i < n; i++)
        {
            if (sieve[i] == 0)
                ans++;
        }
        return ans;
    }
};
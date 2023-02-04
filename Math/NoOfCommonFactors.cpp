class Solution
{
public:
    int commonFactors(int a, int b)
    {
        set<int> s;

        for (int i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                s.insert(i);
                int p = a / i;
                if (p * p != a)
                {
                    s.insert(p);
                }
            }
        }

        int ans = 0;
        for (int i = 1; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                if (s.count(i) > 0)
                    ans++;
                //s.insert(i);
                int p = b / i;
                if (p * p != b)
                {
                    // s.insert(p);
                    if (s.count(p) > 0)
                        ans++;
                }
            }
        }
        return ans;
    }
};
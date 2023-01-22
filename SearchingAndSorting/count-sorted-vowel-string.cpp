class Solution
{
public:
    int countVowelStrings(int n)
    {
        vector<int> ans(5, 1);

        for (int i = 2; i <= n; i++)
        {
            for (int j = 3; j >= 0; j--)
            {
                ans[j] = ans[j] + ans[j + 1];
            }
        }

        int res = 0;
        for (int i = 0; i < 5; i++)
        {
            res += ans[i];
        }
        return res;
    }
};
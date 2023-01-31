class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.size();

        for (int i = n / 2; i >= 1; i--)
        {
            if (n % i == 0)
            {
                int rep = n / i;
                string str = s.substr(0, i);
                string temp = "";
                for (int j = 1; j <= rep; j++)
                {
                    temp += str;
                }
                if (temp == s)
                    return true;
            }
        }
        return false;
    }
};
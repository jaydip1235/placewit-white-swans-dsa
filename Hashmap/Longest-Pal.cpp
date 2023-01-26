class Solution
{
public:
    int longestPalindrome(string s)
    {

        map<int, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        int ans = 0;
        int flag = 1;

        for (auto it : mp)
        {
            if (it.second % 2 == 0)
            {
                ans += it.second;
            }
            else
            {
                ans += it.second - 1;
                flag = 0;
            }
        }
        return flag == 0 ? (ans + 1) : ans;
    }
};
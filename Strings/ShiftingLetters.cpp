class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {
        int n = shifts.size();

        vector<int> ssum(n);
        ssum[n - 1] = shifts[n - 1] % 26;

        for (int i = n - 2; i >= 0; i--)
        {
            ssum[i] = (ssum[i + 1] + shifts[i]) % 26;
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ans += (s[i] - 'a' + ssum[i]) % 26 + 'a';
        }
        return ans;
    }
};
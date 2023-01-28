class Solution
{
public:
    string UncommonChars(string a, string b)
    {
        set<char> st1;
        set<char> st2;

        for (int i = 0; i < a.size(); i++)
        {
            st1.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            st2.insert(b[i]);
        }

        string ans = "";

        for (char c : st1)
        {
            if (st2.find(c) == st2.end())
            {
                ans += c;
            }
        }
        for (char c : st2)
        {
            if (st1.find(c) == st1.end())
            {
                ans += c;
            }
        }
        sort(ans.begin(), ans.end());
        if (ans == "")
            return "-1";
        return ans;
    }
};

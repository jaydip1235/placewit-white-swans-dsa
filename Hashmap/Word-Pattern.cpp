class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> v;

        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        v.push_back(temp);

        map<char, string> mp;
        set<string> st;
        if (v.size() != pattern.size())
            return false;
        for (int i = 0; i < pattern.size(); i++)
        {
            if (mp.find(pattern[i]) != mp.end())
            {
                if (mp[pattern[i]] != v[i])
                {
                    return false;
                }
            }
            else
            {
                if (st.find(v[i]) != st.end())
                {
                    return false;
                }
                mp[pattern[i]] = v[i];
                st.insert(v[i]);
            }
        }
        return true;
    }
};
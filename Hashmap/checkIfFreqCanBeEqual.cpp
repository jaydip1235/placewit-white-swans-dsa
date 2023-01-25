class Solution
{
public:
    bool sameFreq(string s)
    {
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        set<int> st;
        int cnt = 0;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                cnt++;
            }
            st.insert(it->second);
        }

        if (st.size() == 1)
            return true;

        if (st.size() > 2)
            return false;

        if (st.size() == 2)
        {
            auto it1 = st.begin();
            auto it2 = ++st.begin();

            if (*it1 == 1 && cnt == 1)
            {
                return true;
            }
            else if ((*it2 - *it1) == 1)
            {
                return true;
            }
            else
                return false;
        }
    }
};
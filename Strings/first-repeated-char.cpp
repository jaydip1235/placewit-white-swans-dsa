
string firstRepChar(string s)
{
    map<char, int> mp;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 2)
        {
            return ans + s[i];
        }
    }
    return "-1";
}
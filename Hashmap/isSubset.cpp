string isSubset(int a1[], int a2[], int n, int m)
{

    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        mp[a2[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp.find(a1[i]) != mp.end())
        {
            mp[a1[i]]--;
        }
        if (mp[a1[i]] == 0)
        {
            mp.erase(a1[i]);
        }
    }
    // ternary operator
    return mp.size() == 0 ? "Yes" : "No";
}
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        set<char> s;

        for (int i : jewels)
            s.insert(i);

        int ans = 0;
        for (int i : stones)
        {
            if (s.find(i) != s.end())
                ans++;
        }
        return ans;
    }
};
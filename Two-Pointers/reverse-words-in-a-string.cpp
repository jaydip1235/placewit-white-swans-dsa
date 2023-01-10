class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> v;
        stringstream ss(s);
        string word;
        while (ss >> word)
        { //cin>>s
            v.push_back(word);
        }
        string ans = "";
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (i != 0)
                ans = ans + v[i] + " ";
            else
                ans = ans + v[i];
        }
        return ans;
    }
};
class Solution
{
public:
    string sortSentence(string s)
    {

        vector<string> v(10);

        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                v[s[i] - '0'] = temp + " ";
                temp = "";
                i++;
            }
            else
            {
                temp += s[i];
            }
        }

        string ans = "";
        for (string s : v)
        {
            ans += s;
        }
        ans.pop_back();
        return ans;
    }
};
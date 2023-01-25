class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> count(26, 0);
        for (int i = 0; i < words[0].size(); i++)
        {
            count[words[0][i] - 'a']++;
        }

        for (int i = 1; i < words.size(); i++)
        {

            vector<int> arr(26, 0);

            for (int j = 0; j < words[i].size(); j++)
            {
                arr[words[i][j] - 'a']++;
            }

            for (int j = 0; j < 26; j++)
            {
                count[j] = min(count[j], arr[j]);
            }
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++)
        {
            while (count[i]--)
            {
                string s = "";
                s += (i + 'a');
                ans.push_back(s);
            }
        }

        return ans;
    }
};

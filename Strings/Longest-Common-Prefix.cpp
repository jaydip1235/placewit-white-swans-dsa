
class Solution
{
public:
    int fun(string s)
    {
        return s.size();
    }

    string longestCommonPrefix(string arr[], int n)
    {
        int mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, fun(arr[i]));
        }

        string ans = "";

        for (int i = 0; i < mini; i++)
        {
            char ch = arr[0][i];

            for (int j = 1; j < n; j++)
            {
                if (ch != arr[j][i])
                {
                    if (ans == "")
                    {
                        return "-1";
                    }
                    else
                    {
                        return ans;
                    }
                }
            }
            ans += ch;
        }

        return ans;
    }
};
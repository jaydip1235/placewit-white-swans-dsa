
class Solution
{
public:
    int atoi(string str)
    {
        int ans;
        vector<int> v;
        int flag = 0;

        if (str[0] == '-')
        {
            flag = 1;
        }

        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] == '-' && i == 0)
            {
                continue;
            }
            char x = str[i];
            if (x >= '0' && x <= '9')
            {
                v.push_back(str[i] - '0');
            }
            else
            {
                return -1;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            ans = (ans * 10) + v[i];
        }

        if (flag == 1)
        {
            ans = ans * (-1);
        }
        return ans;
    }
};
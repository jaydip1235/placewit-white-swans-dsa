class Solution
{
public:
    int celebrity(vector<vector<int>> &arr, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() >= 2)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (arr[a][b])
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int pos = s.top();
        for (int i = 0; i < n; i++)
        {
            if (i != pos)
            {
                if (arr[i][pos] == 0 || arr[pos][i] == 1)
                    return -1;
            }
        }
        return pos;
    }
};
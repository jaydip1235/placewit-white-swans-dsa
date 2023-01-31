class Solution
{
public:
    int findMinDifference(vector<string> &arr)
    {
        vector<int> v(arr.size());

        for (int i = 0; i < arr.size(); i++)
        {
            string time = arr[i];
            int h = stoi(time.substr(0, 2)) * 60;
            int m = stoi(time.substr(3, 2));
            v[i] = h + m;
        }
        sort(v.begin(), v.end());
        int mini = INT_MAX;
        for (int i = 1; i < arr.size(); i++)
        {
            mini = min(mini, v[i] - v[i - 1]);
        }
        mini = min(mini, 1440 - v[v.size() - 1] + v[0]);
        return mini;
    }
};
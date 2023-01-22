class Solution
{
public:
    int maxi(vector<int> &arr, int length)
    {
        sort(arr.begin(), arr.end());
        arr.push_back(length);
        arr.insert(arr.begin(), 0);
        int ans = INT_MIN;
        for (int i = 1; i < arr.size(); i++)
        {
            ans = max(ans, arr[i] - arr[i - 1]);
        }
        return ans;
    }

    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        long x = maxi(horizontalCuts, h);
        long y = maxi(verticalCuts, w);
        return (x * y) % 1000000007;
    }
};
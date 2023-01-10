class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i < j)
        {
            int w = (j - i);
            int h = min(height[i], height[j]);
            ans = max(ans, h * w);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};
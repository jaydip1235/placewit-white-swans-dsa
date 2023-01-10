class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int i = 0;
        int j = nums.size() - 1;
        int pos = nums.size() - 1;
        while (i <= j)
        {
            if ((nums[i] * nums[i]) < (nums[j] * nums[j]))
            {
                ans[pos] = nums[j] * nums[j];
                j--;
            }
            else
            {
                ans[pos] = nums[i] * nums[i];
                i++;
            }
            pos--;
        }
        return ans;
    }
};
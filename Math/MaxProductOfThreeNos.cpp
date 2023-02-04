class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
        {
            int val = nums[i];
            if (val >= max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = val;
            }
            else if (val >= max2)
            {
                max3 = max2;
                max2 = val;
            }
            else if (val >= max3)
            {
                max3 = val;
            }

            if (val <= min1)
            {
                min2 = min1;
                min1 = val;
            }
            else if (val <= min2)
            {
                min2 = val;
            }
        }
        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};
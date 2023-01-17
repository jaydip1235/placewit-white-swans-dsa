class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return {-1, -1};

        int start = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (start < nums.size() && nums[start] != target)
            return {-1, -1};

        int end = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (end <= nums.size() && nums[end - 1] != target)
            return {-1, -1};

        return {start, end - 1};
    }
};
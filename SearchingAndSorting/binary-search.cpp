class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi)
        {

            int mid = (lo + hi) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return -1;
    }
};
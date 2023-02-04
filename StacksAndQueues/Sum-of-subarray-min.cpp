class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        int mod = 1e9 + 7;
        vector<int> left(n), right(n);

        stack<int> left_stack;
        left_stack.push(0);
        left[0] = 1;

        for (int i = 1; i < n; i++)
        {
            while (left_stack.size() > 0 && arr[i] < arr[left_stack.top()])
            {
                left_stack.pop();
            }
            if (left_stack.size() == 0)
            {
                left[i] = i + 1;
            }
            else
            {
                left[i] = i - left_stack.top();
            }
            left_stack.push(i);
        }

        stack<int> right_stack;
        right_stack.push(n - 1);
        right[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--)
        {
            while (right_stack.size() > 0 && arr[i] <= arr[right_stack.top()])
            {
                right_stack.pop();
            }
            if (right_stack.size() == 0)
            {
                right[i] = n - i;
            }
            else
            {
                right[i] = right_stack.top() - i;
            }
            right_stack.push(i);
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long prod = (left[i] * right[i]) % mod;
            long long net = arr[i] * prod;
            ans = (ans + net) % mod;
        }
        return ans % mod;
    }
};
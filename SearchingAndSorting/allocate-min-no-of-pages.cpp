
class Solution
{
public:
    bool isPossible(int arr[], int n, int m, int boundary)
    {

        int st = 1;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > boundary)
            {
                return false;
            }

            if (sum + arr[i] > boundary)
            {
                st++;
                sum = arr[i];

                if (st > m)
                    return false;
            }
            else
            {
                sum += arr[i];
            }
        }
        return true;
    }

    int findPages(int A[], int N, int M)
    {
        if (M > N)
            return -1;

        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            sum += A[i];
        }

        int start = 0;
        int end = sum;
        int ans = INT_MAX;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (isPossible(A, N, M, mid))
            {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
class Solution
{
public:
    void bubbleSort(int arr[], int n)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
    }
};
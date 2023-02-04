class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = tickets[k];
        for (int i = 0; i < tickets.size(); i++)
        {
            if (i < k)
            {
                ans += min(tickets[i], tickets[k]);
            }
            if (i > k)
            {
                ans += min(tickets[i], tickets[k] - 1);
            }
        }
        return ans;
    }
};
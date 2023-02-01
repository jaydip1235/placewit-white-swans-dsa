class Solution
{
public:
    vector<int> finalPrices(vector<int> &p)
    {

        stack<int> st;
        vector<int> ans;
        for (int i = p.size() - 1; i >= 0; i--)
        {
            int e = p[i];
            while (!st.empty() && st.top() > e)
            {
                st.pop();
            }
            if (st.empty())
            {
                ans.insert(ans.begin(), p[i]);
            }
            else
            {
                ans.insert(ans.begin(), p[i] - st.top());
            }
            st.push(e);
        }
        return ans;
    }
};
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        map<int, int> mp;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            int e = nums2[i];
            while (!st.empty() && st.top() <= e)
            {
                st.pop();
            }
            if (st.empty())
            {
                mp[e] = -1;
            }
            else
            {
                mp[e] = st.top();
            }
            st.push(e);
        }
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
class Solution
{
public:
    int magic(vector<int> &v)
    {

        int lo = 0;
        int hi = v.size() - 1;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (v[mid] == 0)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return lo;
    }

    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {

            int c = magic(mat[i]);

            v.push_back({c, i});
        }

        sort(v.begin(), v.end());
        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
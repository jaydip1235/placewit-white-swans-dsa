
bool compare(string a, string b)
{
    return a + b > b + a;
}
class Solution
{

public:
    string largestNumber(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        vector<string> str;
        for (int i : nums)
        {
            str.push_back(to_string(i));
        }

        sort(str.begin(), str.end(), compare);
        if (str[0] == "0")
            return "0";
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            ans += str[i];
        }
        return ans;
    }
};
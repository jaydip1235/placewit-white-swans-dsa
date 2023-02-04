class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                st.push(ch);
            }
            // )
            else
            {
                if (st.size() > 0 && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
        }
        return st.size();
    }
};
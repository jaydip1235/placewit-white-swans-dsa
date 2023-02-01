class Solution
{
public:
    int calPoints(vector<string> &o)
    {
        stack<int> s;
        int sum = 0;

        for (int i = 0; i < o.size(); i++)
        {
            if (o[i] == "C")
            {
                s.pop();
            }
            else if (o[i] == "D")
            {
                s.push(2 * s.top());
            }
            else if (o[i] == "+")
            {
                int temp1 = s.top();
                s.pop();
                int temp2 = s.top();
                s.push(temp1);
                s.push(temp1 + temp2);
            }
            else
            {
                s.push(stoi(o[i]));
            }
        }
        while (!s.empty())
        {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};
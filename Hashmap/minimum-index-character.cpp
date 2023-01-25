class Solution
{
public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        map<char, int> mp;

        for (int i = 0; i < patt.size(); i++)
        {
            mp[patt[i]]++;
        }

        for (int i = 0; i < str.length(); i++)
        {

            if (mp.find(str[i]) != mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};
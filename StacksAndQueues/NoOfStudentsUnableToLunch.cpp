class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int size = students.size();
        queue<int> choice;

        for (int i = 0; i < size; i++)
        {
            choice.push(students[i]);
        }

        int rot = 0;
        int i = 0;
        while (choice.size() != 0 && rot < choice.size())
        {
            if (choice.front() == sandwiches[i])
            {
                choice.pop();
                i++;
                rot = 0;
            }
            else
            {
                int c = choice.front();
                choice.pop();
                choice.push(c);
                rot++;
            }
        }

        return choice.size();
    }
};
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> gradingStudents(vector<int> grades)
    {

        for (int i = 0; i < grades.size(); i++)
        {
            if (grades[i] >= 38)
            {
                int nextMultiple = ((grades[i] / 5) * 5) + 5; // find next multiple of 5
                grades[i] = (nextMultiple - grades[i]) < 3 ? nextMultiple : grades[i];
            }
        }

        return grades;
    }
};

int main()
{
    int size;
    cin >> size;

    vector<int> grades(size);

    for (int i = 0; i < size; i++)
    {
        cin >> grades[i];
    }

    Solution ob;
    auto ans = ob.gradingStudents(grades);
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
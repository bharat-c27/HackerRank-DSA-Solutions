// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string dayOfProgrammer(int year)
    {
        string programmerDay = "00.00.0000";
        string newYear = to_string(year);

        if (year == 1918)
        {
            programmerDay = "26.09.";
        }
        else if (year <= 1917)
        {
            programmerDay = (year % 4 == 0) ? "12.09." : "13.09.";
        }
        else if (1918 <= year)
        {
            programmerDay = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "12.09." : "13.09.";
        }
        return programmerDay + newYear;
    }
};

int main()
{
    int year;
    cin >> year;

    Solution ob;
    auto ans = ob.dayOfProgrammer(year);
    cout << ans << endl;
    return 0;
}
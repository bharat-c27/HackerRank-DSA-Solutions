// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string timeConversion(string s)
    {
        // for AM ==> when time 12am
        if (s[8] == 'A' && s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
        // for PM ==> when time other than 12pm
        else if (s[8] == 'P' && !(s[0] == '1' && s[1] == '2'))
        {

            if (s[1] == '8')
            {
                s[0] = '2';
                s[1] = '0';
            }
            else if (s[1] == '9')
            {
                s[0] = '2';
                s[1] = '1';
            }
            else if (!(s[0] == '1' && s[1] == '2'))
            {
                s[0] = s[0] + 49 - '0';
                s[1] = s[1] + 50 - '0';
            }
        }

        // s.erase(8,2);
        s.pop_back();
        s.pop_back();
        return s;
    }
};

int main()
{
    string clockFormat;
    cin >> clockFormat;
    Solution ob;
    auto ans = ob.timeConversion(clockFormat);
    cout << ans << endl;
    return 0;
}
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void staircase(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
};

int main()
{
    int size;
    cin >> size;

    Solution ob;
    ob.staircase(size);
    return 0;
}
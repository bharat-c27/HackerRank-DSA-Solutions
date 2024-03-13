// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string kangaroo(int x1, int v1, int x2, int v2)
    {
        if (v1 > v2 && ((x1 - x2) % (v2 - v1)) == 0)
            return "YES";
        return "NO";
    }
};

int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    Solution ob;
    auto ans = ob.kangaroo(x1, v1, x2, v2);
    cout << ans << endl;
    return 0;
}
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // greatest common divisor
    int gcd(int dividend, int divisor)
    {
        if (divisor == 0)
            return dividend;
        return gcd(divisor, dividend % divisor);
    }
    // least common mulitple
    int lcm(int num1, int num2)
    {
        return ((num1 * num2) / (gcd(num1, num2)));
    }
    int getTotalX(vector<int> a, vector<int> b)
    {
        int countTotalNumbers = 0;
        int result = a[0];

        for (int i = 1; i < a.size(); i++)
        {
            result = lcm(result, a[i]);
        }

        int start = result;
        result = b[0];
        for (int i = 1; i < b.size(); i++)
        {
            result = gcd(result, b[i]);
        }

        int end = result;
        for (int i = start; i <= end; i += start)
        {
            if (end % i == 0)
                countTotalNumbers++;
        }
        return countTotalNumbers;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    Solution ob;
    auto ans = ob.getTotalX(a, b);
    cout << ans << endl;
    return 0;
}
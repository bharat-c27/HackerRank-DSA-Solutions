// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> compareTriplets(vector<int> a, vector<int> b)
    {

        vector<int> sum(2, 0);

        int alicePoints, bobPoints;

        sum[0] = (a[0] <= b[0] ? 0 : 1) + (a[1] <= b[1] ? 0 : 1) + (a[2] <= b[2] ? 0 : 1);
        sum[1] = (b[0] <= a[0] ? 0 : 1) + (b[1] <= a[1] ? 0 : 1) + (b[2] <= a[2] ? 0 : 1);

        return sum;
    }
};

int main()
{
    vector<int> a(3), b(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    Solution ob;
    auto ans = ob.compareTriplets(a, b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
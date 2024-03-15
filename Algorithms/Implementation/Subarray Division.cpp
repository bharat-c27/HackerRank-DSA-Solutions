// Bharat Choudhary

// Problem: link

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int birthday(vector<int> s, int d, int m)
    {
        int countWays = 0, sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += s[i];
        }
        if (sum == d)
            countWays++;
        for (int i = 1; i <= s.size() - m; i++)
        {
            sum = sum - s[i - 1] + s[i + m - 1];
            if (sum == d)
                countWays++;
        }
        return countWays;
    }
};

int main()
{
    int d, m, size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cin >> d >> m;

    Solution ob;
    auto ans = ob.birthday(arr, d, m);
    cout << ans << endl;
    return 0;
}
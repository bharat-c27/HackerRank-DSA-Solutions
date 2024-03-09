// Problem: https://www.hackerrank.com/challenges/simple-array-sum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int simpleArraySum(vector<int> ar)
    {
        int sum = 0;
        int size = ar.size();
        set<int> st(ar.begin(), ar.end());

        for (int i = 0; i < size; i++)
        {
            sum += ar[i];
        }
        return sum;
    }
};

int main()
{
    int size;
    cin >> size;
    vector<int> vec(size);

    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    Solution ob;
    auto ans = ob.simpleArraySum(vec);
    cout << ans << "\n";
    return 0;
}
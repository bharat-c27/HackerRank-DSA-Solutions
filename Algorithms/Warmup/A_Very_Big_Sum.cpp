// Bharat Choudhary

// Problem: link

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long aVeryBigSum(vector<long> ar)
    {

        long sum = 0;

        for (int i = 0; i < ar.size(); i++)
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

    vector<long> ar(size);

    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    Solution ob;
    long ans = ob.aVeryBigSum(ar);
    cout << ans << endl;
    return 0;
}
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int migratoryBirds(vector<int> arr)
    {
        vector<int> freq(5);

        for (int i = 1; i <= 5; i++)
        {
            freq[i] = 0;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        int currMax = freq[1];
        int currIndex;

        for (int i = 1; i <= 5; i++)
        {
            if (freq[i] > currMax)
            {
                currMax = freq[i];
                currIndex = i;
            }
        }
        return currIndex;
    }
};

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Solution ob;
    auto ans = ob.migratoryBirds(arr);
    cout << ans << endl;
    return 0;
}
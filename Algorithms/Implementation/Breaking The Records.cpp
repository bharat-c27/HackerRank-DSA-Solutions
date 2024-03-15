// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> breakingRecords(vector<int> scores)
    {
        int max = scores[0], min = scores[0];
        vector<int> newRecords(2, 0);

        for (int i = 1; i < scores.size(); i++)
        {

            if (scores[i] > max)
            {
                newRecords[0]++;
                max = scores[i];
            }
            if (scores[i] < min)
            {
                newRecords[1]++;
                min = scores[i];
            }
        }
        return newRecords;
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
    auto ans = ob.breakingRecords(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
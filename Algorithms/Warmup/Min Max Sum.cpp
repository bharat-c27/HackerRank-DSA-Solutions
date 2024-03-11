// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void miniMaxSum(vector<int> arr)
    {

        int sum = 0, max = 0;
        auto result = minmax_element(arr.begin(), arr.end());

        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        cout << (sum - *result.second) << " " << (sum - *result.first);
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
    ob.miniMaxSum(arr);
    return 0;
}
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void plusMinus(vector<int> arr)
    {
        float countPositive = 0, countNegative = 0, countZeroes = 0;
        int size = arr.size();

        for (int i = 0; i < size; i++)
        {
            if (arr[i] > 0)
                countPositive++;
            else if (arr[i] < 0)
                countNegative++;
            else
                countZeroes++;
        }

        cout << fixed << countPositive / size << endl;
        cout << countNegative / size << endl;
        cout << countZeroes / size << endl;
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
    ob.plusMinus(arr);
    return 0;
}
// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int birthdayCakeCandles(vector<int> candles)
    {
        return count(candles.begin(), candles.end(), *max_element(candles.begin(), candles.end()));
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
    auto ans = ob.birthdayCakeCandles(arr);
    cout << ans << endl;
    return 0;
}
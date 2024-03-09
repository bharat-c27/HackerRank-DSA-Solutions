// Bharat Choudhary

// Problem: https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalDifference(vector<vector<int>> arr)
    {
        int leftDiagonal = 0, rightDiagonal = 0;
        int jColumn = arr.size() - 1;

        for (int i = 0; i < arr.size(); i++)
        {
            leftDiagonal += arr[i][i];

            rightDiagonal += arr[i][jColumn];
            jColumn--;
        }

        return abs(leftDiagonal - rightDiagonal);
    }
};

int main()
{
    int size;
    cin >> size;

    int array[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
    vector<vector<int>> arr(size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i].push_back(array[i][j]);
        }
    }

    Solution ob;
    auto ans = ob.diagonalDifference(arr);
    cout << "\n"
         << ans << endl;
    return 0;
}
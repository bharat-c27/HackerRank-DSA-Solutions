// Bharat Choudhary

// Problem: link

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
    {

        int sum = 0, countApples = 0, countOranges = 0;
        for (int i = 0; i < apples.size(); i++)
        {
            apples[i] += a;
            if (s <= apples[i] && apples[i] <= t)
                countApples++;
        }

        for (int i = 0; i < oranges.size(); i++)
        {
            oranges[i] += b;
            if (s <= oranges[i] && oranges[i] <= t)
                countOranges++;
        }

        cout << countApples << endl
             << countOranges;
    }
};

int main()
{
    int houseStartLocation, houseEndLocation, appleTreeLocation, orangeTreeLocation;
    int m, n;

    cin >> houseStartLocation >> houseEndLocation;
    cout << endl;
    cin >> appleTreeLocation >> orangeTreeLocation;
    cout << endl;
    cin >> m >> n;

    vector<int> apples(m), oranges(n);

    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i];
    }

    Solution ob;
    ob.countApplesAndOranges(houseStartLocation, houseEndLocation, appleTreeLocation, orangeTreeLocation, apples, oranges);
    return 0;
}
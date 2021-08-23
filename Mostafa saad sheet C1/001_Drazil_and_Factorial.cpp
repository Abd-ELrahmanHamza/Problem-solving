#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    int n;
    char c;
    cin >> n;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        int x = c - '0';
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            v2.push_back(x);
        }
        else if (x == 6)
        {
            v2.push_back(3);
            v2.push_back(5);
        }
        else if (x == 4)
        {
            v2.push_back(2);
            v2.push_back(2);
            v2.push_back(3);
        }
        else if (x == 8)
        {
            v2.push_back(7);
            v2.push_back(2);
            v2.push_back(2);
            v2.push_back(2);
        }
        else if (x == 9)
        {
            v2.push_back(3);
            v2.push_back(3);
            v2.push_back(7);
            v2.push_back(2);
        }
    }
    sort(v2.begin(), v2.end(), greater<int>());
    for (auto &x : v2)
        cout << x;
    return 0;
}
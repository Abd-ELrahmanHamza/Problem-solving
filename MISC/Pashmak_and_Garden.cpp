// https://codeforces.com/problemset/problem/459/A
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <numeric>
#include <set>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2)
        if (abs(x2 - x1) != abs(y2 - y1))
        {
            cout << -1;
            return 0;
        }
    if (x1 == x2)
    {
        cout << x1 + abs(y2 - y1) << " " << y1 << " " << x1 + abs(y2 - y1) << " " << y2;
    }
    else if (y1 == y2)
    {
        cout << x1 << " " << abs(x2 - x1) + y1 << " " << x2 << " " << abs(x2 - x1) + y1;
    }
    else
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    return 0;
}
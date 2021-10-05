// https://codeforces.com/contest/285/problem/B
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> v(n);
    vector<bool> visited(n, false);
    for (int &x : v)
        cin >> x;
    int index = s, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (index == t)
        {
            cout << count;
            break;
        }
        if (visited[index])
        {
            cout << -1;
            break;
        }
        visited[index] = true;
        index = v[index - 1];
        count++;
    }

    return 0;
}
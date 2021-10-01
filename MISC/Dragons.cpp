// https://codeforces.com/problemset/problem/230/A
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
    int n, s;
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for (auto &x : v)
        cin >> x.first >> x.second;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
            s += v[i].second;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
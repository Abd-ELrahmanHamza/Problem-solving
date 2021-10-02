// https://codeforces.com/problemset/problem/467/B
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <numeric>
#include <set>
using namespace std;
int BitCount(unsigned int u)
{
    unsigned int uCount;

    uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int &x : v)
        cin >> x;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (BitCount(v.back() ^ v[i]) <= k)
            count++;
    }
    cout << count;
    return 0;
}
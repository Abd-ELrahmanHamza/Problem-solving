#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
#include <sstream>
#include <numeric>
using namespace std;
long long n, d;
bool helpSort(const pair<long long, long long> &p1, const pair<long long, long long> &p2)
{
    return p1.first < p2.first;
}
bool helpUpper(const long long &val, const pair<long long, long long> &p)
{
    return p.first - val >= d;
}
int main()
{
    cin >> n >> d;
    vector<long long> presum(n + 1);
    vector<pair<long long, long long>> v(n);
    for (long long i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }
    sort(v.begin(), v.end(), helpSort);

    for (long long i = 1; i <= n; i++)
        presum[i] += presum[i - 1] + v[i - 1].second;

    long long maxFriend = 0;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        long long upperIndex = upper_bound(v.begin(), v.end(), (*it).first, helpUpper) - v.begin();
        maxFriend = max(maxFriend, presum[upperIndex] - presum[it - v.begin()]);

    }
    cout << maxFriend;
    return 0;
}
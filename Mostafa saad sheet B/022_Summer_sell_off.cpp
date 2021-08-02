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
using namespace std;
bool sortPairs(pair<long long, int> &p1, pair<long long, int> &p2)
{
    long long sold1After = (p1.first * 2 <= p1.second) ? p1.first * 2 : p1.second;
    long long sold1Before = (p1.first <= p1.second) ? p1.first : p1.second;
    long long sold2After = (p2.first * 2 <= p2.second) ? p2.first * 2 : p2.second;
    long long sold2Before = (p2.first <= p2.second) ? p2.first : p2.second;
    return (sold1After - sold1Before) > (sold2After - sold2Before);
}
int main()
{
    long long n, f;
    cin >> n >> f;
    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), sortPairs);

    long long count = 0;
    long long sold = 0;
    for (int i = 0; i < n; i++)
    {
        long long product = v[i].first;
        long long client = v[i].second;
        if (v[i].first != 0 && count < f)
        {
            product *= 2;
            count++;
        }

        sold += (product <= client ? product : client);
    }
    cout << sold;
    return 0;
}

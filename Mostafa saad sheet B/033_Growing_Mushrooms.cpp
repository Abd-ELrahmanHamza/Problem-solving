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
bool sortSec(pair<int, double> &p1, pair<int, double> &p2)
{
    if(p1.second>p2.second)
        return true;
    else if(p1.second==p2.second)
    {
        if(p1.first<p2.first)
            return true;
    }
    return false;
}
int main()
{
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<int, double>> v(n);
    for (int i = 0; i < n; i++)
    {
        double s1, s2;
        cin >> s1 >> s2;
        v[i].second = max(((s1 * t1) - (s1 * t1) * (k / 100.0)) + (s2 * t2), ((s2 * t1) - (s2 * t1) * (k / 100.0)) + (s1 * t2));
        v[i].first = i + 1;
    }
    sort(v.begin(), v.end(), sortSec);
    for (int i = 1; i <= n; i++)
    {
        cout.precision(2);
        cout << fixed << v[i - 1].first << " " << v[i - 1].second;
        if (i != n)
            cout << endl;
    }

    return 0;
}

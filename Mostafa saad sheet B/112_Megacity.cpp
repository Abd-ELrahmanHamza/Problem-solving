#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<pair<unsigned long long, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y >> v[i].second;
        v[i].first = pow(x, 2) + pow(y, 2);
    }
    sort(v.begin(), v.end());
    unsigned long long maxr = 0;
    for (int i = 0; i < n; i++)
    {
        if (s >= 10e5)
            break;
        s += v[i].second;
        maxr = max(maxr, v[i].first);
    }

    if (s >= 10e5)
        cout << fixed << setprecision(8) << sqrt(maxr);
    else
        cout << -1;
    return 0;
}
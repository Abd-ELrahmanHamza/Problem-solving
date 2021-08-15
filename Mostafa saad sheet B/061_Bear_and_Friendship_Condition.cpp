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
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    vector<pair<int, int>> pairs(m);
    for (int i = 1; i <= n; i++)
        v[i].push_back(i);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        pairs[i] = make_pair(x, y);
    }
    for (int i = 1; i <= n; i++)
        sort(v[i].begin(), v[i].end());
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int x : v[i])
    //         cout << x << " ";
    //     cout << endl;
    // }
    for (int i = 0; i < m; i++)
    {
        if (v[pairs[i].first] != v[pairs[i].second])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
#include <set>
#include <cmath>
#include <queue>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double totalDis = 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n - 1; i++)
        totalDis += sqrt(pow(v[i].first - v[i + 1].first, 2) + pow(v[i].second - v[i + 1].second, 2));
    cout << fixed << setprecision(10);
    cout << (totalDis / 50.0) * k;
    return 0;
}
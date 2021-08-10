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
#include <limits.h>
#include <float.h>
using namespace std;
vector<int> v;
int d = INT_MIN;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    v = vector<int>(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int minCount = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int upper = upper_bound(v.begin(), v.end(), 2 * v[i])-v.begin();
        minCount = min(minCount, n-upper+i);
    }
    cout << minCount;
    return 0;
}
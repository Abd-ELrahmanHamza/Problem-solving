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
int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    long long sum = 0;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (count < k && v[i] < 0)
        {
            v[i] = -1 * v[i];
            count++;
        }
    }
    sort(v.begin(), v.end());
    if ((k - count) % 2 == 0)
        sum = v[0];
    else
        sum = -1 * v[0];
    for (int i = 1; i < n; i++)
    {
        sum += v[i];
    }
    cout << sum;
    return 0;
}

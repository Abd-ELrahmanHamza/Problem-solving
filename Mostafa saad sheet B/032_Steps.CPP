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
long long r, c, rc, cc;
long long maxStepsx(long long x)
{
    if (x == 0)
        return LONG_MAX;
    if (x > 0)
        return (r - rc) / x;
    return (rc - 1) / abs(x);
}
long long maxStepsy(long long y)
{
    if (y == 0)
        return LONG_MAX;
    if (y > 0)
        return (c - cc) / y;
    return (cc - 1) / abs(y);
}
int main()
{
    cin >> r >> c >> rc >> cc;
    long long k, x, y, count = 0;
    cin >> k;
    for (long long i = 0; i < k; i++)
    {
        cin >> x >> y;
        long long maxSx = maxStepsx(x);
        long long maxSy = maxStepsy(y);
        long long minStep = min(maxSx, maxSy);
        count += minStep;
        rc += minStep * x;
        cc += minStep * y;
    }
    cout << count;
    return 0;
}

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
double maxElement(int n)
{
    double x, Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Max = max(Max, x);
    }
    return Max;
}
double minElement(int n)
{
    double x, Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Min = min(Min, x);
    }
    return Min;
}
int main()
{
    int n, m, k;
    cin >> n;
    double r1 = maxElement(n);
    cin >> m;
    double po = maxElement(m);
    cin >> k;
    double pi = minElement(k);
    int A, B;
    cin >> A >> B;
    cout.precision(20);
    cout << fixed << (r1 / sqrt((A * pi) / (B * po) + 1));
    return 0;
}

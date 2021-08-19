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
    int n, x;
    cin >> n;
    vector<int> v1, v2;
    unsigned long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            sum1 += x;
            v1.push_back(x);
        }
        else
        {
            sum2 += abs(x);
            v2.push_back(abs(x));
        }
    }
    if (sum1 > sum2)
        cout << "first";
    else if (sum2 > sum1)
        cout << "second";
    else if (lexicographical_compare(v2.begin(), v2.end(), v1.begin(), v1.end()))
        cout << "first";
    else if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
        cout << "second";
    else if (x > 0)
        cout << "first";
    else
        cout << "second";
    return 0;
}
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
    int n, maxCount = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        int count = 1, firstNotEqual = -1 ,lastEqual = i;
        for (int j = lastEqual + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                count++;
                lastEqual = j;
            }
            else if (v[j] == firstNotEqual)
                count++;
            else if (firstNotEqual == -1)
            {
                firstNotEqual = v[j];
                count++;
            }
            else
                break;
        }
        maxCount = max(maxCount, count);
    }
    cout << maxCount;
    return 0;
}
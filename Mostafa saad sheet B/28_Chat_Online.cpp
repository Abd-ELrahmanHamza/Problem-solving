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
    int p, q, l, r, y1, y2;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> x(p), z(q);
    for (int i = 0; i < p; i++)
    {
        cin >> y1 >> y2;
        x[i] = make_pair(y1, y2);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> y1 >> y2;
        z[i] = make_pair(y1, y2);
    }
    int count = 0;
    for (int k = l; k <= r; k++)
    {
        int i = 0, j = 0;
        while (i < p && j < q)
        {
            if ((z[j].first + k >= x[i].first && z[j].first + k <= x[i].second) || (z[j].second + k >= x[i].first && z[j].second + k <= x[i].second) || (x[i].first >= z[j].first + k && x[i].second <= z[j].second + k))
            {
                count++;
                break;
            }
            else if (z[j].first+k < x[i].first)
                j++;
            else
                i++;
        }
    }
    cout << count;
    return 0;
}

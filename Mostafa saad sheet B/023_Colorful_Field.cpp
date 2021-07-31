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
bool getNoWastedbefore(vector<vector<int>> &v, int x, int y, int &count)
{
    for (int i = 1; i <= x; i++)
    {
        if (i != x)
            count += v[i].size();
        else
        {
            for (int j = 1; j <= v[i].size(); j++)
            {
                if (v[i][j - 1] < y)
                    count++;
                if (v[i][j - 1] == y)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    int n, m, k, t;
    string s[3] = {"Grapes", "Carrots", "Kiwis"};
    cin >> n >> m >> k >> t;
    vector<vector<int>> wasted(n + 1);
    int x, y;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        wasted[x].push_back(y);
    }
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int count = 0;
        bool w = getNoWastedbefore(wasted, x, y, count);
        //cout << "count" << count<< " no of elements = " << ((x - 1) * m + y ) << endl;
        if (w)
            cout << "Waste";
        else
            cout << s[((x - 1) * m + y - count) % 3];
        if (i != t - 1)
            cout << endl;
    }

    return 0;
}

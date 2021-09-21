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
    int n, m;
    cin >> n >> m;
    vector<vector<pair<char, bool>>> grid(n, vector<pair<char, bool>>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j].first;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = i + 1; k < n; k++)
                if (grid[k][j].first == grid[i][j].first)
                {
                    grid[k][j].second = true;
                    grid[i][j].second = true;
                }

            for (int k = j + 1; k < m; k++)
                if (grid[i][k].first == grid[i][j].first)
                {
                    grid[i][k].second = true;
                    grid[i][j].second = true;
                }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (!grid[i][j].second)
                cout << grid[i][j].first;
    }
    return 0;
}
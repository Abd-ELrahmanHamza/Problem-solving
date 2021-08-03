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
vector<set<int>> graph;
vector<int> removed;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    graph = vector<set<int>>(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].insert(y);
        graph[y].insert(x);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (graph[i].size() == 1)
            {
                removed.push_back(i);
            }
        }
        if (removed.size() != 0)
            count++;
        for (int j = 0; j < removed.size(); j++)
        {
            auto x = graph[removed[j]].begin();
            if (x != graph[removed[j]].end())
                graph[*x].erase(removed[j]);
            graph[removed[j]].clear();
        }
        removed.clear();
    }

    cout << count;
    return 0;
}

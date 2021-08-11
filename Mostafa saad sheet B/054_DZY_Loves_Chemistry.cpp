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
vector<vector<int>> graph;
vector<bool> visited;
vector<int> maxConnectedv;
int connectedCount;

void dfs(int index)
{
    visited[index] = true;
    connectedCount++;
    for (int i = 0; i < graph[index].size(); i++)
        if (!visited[graph[index][i]])
            dfs(graph[index][i]);
}
void connectedComponent()
{
    for (int i = 1; i < graph.size(); i++)
    {
        if (!visited[i])
        {
            connectedCount = 0;
            dfs(i);
            //cout << "connected count = " << connectedCount << endl;
            maxConnectedv.push_back(connectedCount);
        }
        
    }
}
int main()
{
    int n, m;
    connectedCount = 0;
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    if(m>0)
        connectedComponent();
    unsigned long long result = 1;
    for (int i = 0; i < maxConnectedv.size(); i++)
        result *= pow(2,maxConnectedv[i]-1);
    cout << result;
    return 0;
}
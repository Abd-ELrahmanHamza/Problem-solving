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
vector<vector<int>> v;
vector<bool> visited;
long long NodesNum, EdgesNum;
void dfs(int index)
{
    visited[index] = true;
    NodesNum++;
    for (int i = 0; i < v[index].size(); i++)
    {
        EdgesNum++;
        if (!visited[v[index][i]])
            dfs(v[index][i]);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    v = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1,false);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            NodesNum=0;EdgesNum=0;
            dfs(i);
            if(EdgesNum/2 != (NodesNum*(NodesNum-1))/2)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
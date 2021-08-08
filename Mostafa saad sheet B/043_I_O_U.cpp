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
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y,money;
        cin >> x >> y >> money;
        v[x] -= money;
        v[y] += money;
    }
    int total = 0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]>0)  
            total+=v[i];
    }
    cout<<total;
    return 0;
}

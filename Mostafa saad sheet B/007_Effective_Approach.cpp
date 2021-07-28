#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    int n, m, count = 0;unsigned long long result2 = 0, result1 = 0;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x] = i;
    }
    cin>>m;
    vector<int> q(m);
    for(int &x:q)cin>>x;
    for(int i=0;i<m;i++)
    {
        result1+=v[q[i]];
        result2+=(n+1-v[q[i]]);
    }
    cout << result1 << " " << result2;
    return 0;
}

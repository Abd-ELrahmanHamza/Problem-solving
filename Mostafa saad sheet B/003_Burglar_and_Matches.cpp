#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
using namespace std;
bool sortSec(pair<int, double> &p1, pair<int, double> &p2)
{
    return p1.second>p2.second;
} int main()
{
    long long n,m;
    cin>>n>>m;
    vector<pair<int,double>>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),sortSec);

    long long total=0;
    for(int i=0;i<m;i++)
    {
        long long amount = min((long long)v[i].first,n);
        n-= amount;
        total+=amount*v[i].second;
    }
    cout<<total;
    return 0;
}

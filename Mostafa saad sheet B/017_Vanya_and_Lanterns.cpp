#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include<limits.h>
#include<limits>
using namespace std;
int main()
{
    long long n,l;
    cin>>n>>l;
    vector<int>v(n);
    vector<double>dist(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
        dist[i] = (v[i+1]-v[i])/2.0;
    if(v[0]!=0)
        dist.push_back(v[0]);
    if(v.back()!=l)
        dist.push_back(l-v.back());
    cout.precision(10);
    cout<<*max_element(dist.begin(),dist.end());

    return 0;
}

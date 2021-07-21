#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
int main()
{
    long long x;
    cin>>x;
    while(x!=0)
    {
        cout<<((sqrt(x) == ceil(sqrt(x)))? "yes":"no");
        cin>>x;
        if(x!=0) cout<<endl;
    }
    return 0;
}

/*
    vector<pair<long long, long long>> v;
    pair<long long, bool> x;
    cin >> x.first;
    int n=0;
    while (x.first != 0)
    {
        x.second = false;
        v.push_back(x);
        cin>>x.first;
        n++;
    }
    for(int i=0;i<n;i++)
    {
        for (int j = 1; j <= v[i].first; j++)
            if(v[i].first%j==0)
                v[i].second=!v[i].second;
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].second ==0)
            cout<<"no";
        else 
            cout<<"yes";
        if(i!=n-1)
            cout<<endl;
    }
*/
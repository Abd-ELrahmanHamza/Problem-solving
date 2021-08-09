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
using namespace std;
int main()
{
    int n,ones=0;
    cin>>n;
    vector<int>v(n);
    for(int &x:v)
    {
        cin >> x;
        if(x==1)ones++;
    }    
    unsigned long long i=0,count=1,tempCount=1;
    while(v[i]==0 && i<n)
        i++;
    while(i<n)
    {
        if(v[i]==1)
        {
            count*=tempCount;
            tempCount=1;
        }
        else 
            tempCount++;
        i++;
    }

    if(ones==0)
        cout<<0;
    else
        cout<<count;
    return 0;
}
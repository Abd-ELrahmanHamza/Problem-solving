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
#include<limits.h>
#include<float.h>
using namespace std;
int main()
{
    int n,x0,y0;
    set<double>s;
    cin>>n>>x0>>y0;
    for(int i=0;i<n;i++)
    {
        double x,y;
        cin>>x>>y;
        if(x==x0)
            s.insert(DBL_MAX);
        else
            s.insert((y-y0)/(x-x0));
    }
    cout<<s.size();
    return 0;
}
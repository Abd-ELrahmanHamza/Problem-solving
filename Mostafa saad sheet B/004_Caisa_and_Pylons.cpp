#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
using namespace std;
int main()
{
    int n,x1,x2;
    long long Max=0;
    cin>>n;
    cin>>x1;
    Max=x1;
    for(int i=0;i<n-1;i++)
    {
        cin>>x2;
        Max=max((long long)x2,Max);
    }
    cout<<Max;
    return 0;
}


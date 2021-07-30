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
    int n;
    cin>>n;
    vector<unsigned long long>origin(n+1),sumOrigin(n+1,0),sumOrdered(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>origin[i];
        sumOrigin[i]=sumOrigin[i-1]+ origin[i];
    }
    sort(origin.begin(), origin.end());
    for (int i = 1; i <= n; i++)
        sumOrdered[i] =sumOrdered[i-1]+ origin[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int q,l,r;
        cin>>q>>l>>r;
        if(q==1)
            cout<<sumOrigin[r]-sumOrigin[l-1];
        else
            cout<<sumOrdered[r]-sumOrdered[l-1];
        if(i!=m-1)
            cout<<endl;
    }
    return 0;
}

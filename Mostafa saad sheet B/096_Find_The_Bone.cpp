#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<bool>v(n+1);
    for(int i=0;i<m;i++)
    {
        int h;
        cin>>h;
        v[h]=1;
    }
    int bonePos= 1;
    for(int i=0;i<k;i++)
    {
        int oldp,newp;
        cin>>oldp>>newp;
        if(v[bonePos])
            break;
        if(bonePos==oldp)
            bonePos = newp;
        else if(bonePos == newp)
            bonePos = oldp;
    }
    cout<<bonePos;
    return 0;
}
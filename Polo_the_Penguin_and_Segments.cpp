#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    pair<int,int> p;
    for(int i=0;i<n;i++)
    {
        cin>>p.first>>p.second;
        sum+=(p.second-p.first)+1;
    }
    if(sum%k == 0)
        cout<<0;
    else
        cout<<k-sum%k;
    return 0;
}
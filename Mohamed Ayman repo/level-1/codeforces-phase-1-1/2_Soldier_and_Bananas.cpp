#include<iostream>
using namespace std;
int main()
{
    int k,n,w,result = 0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
        result+=i*k;
    cout<<(n>=result?0:result-n);
    return 0;
}
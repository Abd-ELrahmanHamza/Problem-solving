#include<iostream>
using namespace std;
int main()
{
    int n,m,z,num=0;
    cin>>n>>m>>z;
    for(int i=1;i<=z/n;i++)
    {
        if((i*n)%m==0)
            num++;
    }
    cout<<num;
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int angle;
        cin>>angle;
        if((360.0/(180-angle)) == ceil(360.0/(180-angle)))
            cout<<"YES";
        else 
            cout<<"NO";
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}
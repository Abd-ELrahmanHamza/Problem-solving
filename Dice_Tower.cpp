#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n,top;
    bool flag = true;
    cin>>n>>top;
    pair<int,int> faces;
    for(int i=0;i<n;i++)
    {
        cin>>faces.first>>faces.second;
        if(faces.first==top || faces.first==7-top || faces.second == top || faces.second==7-top)
        {
            flag = false; break;   
        }
    }
    if(flag)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}
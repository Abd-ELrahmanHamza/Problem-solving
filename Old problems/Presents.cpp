#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    int *result = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        result[arr[i]-1] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i];
        if(i!=n-1)
            cout<<" ";
    }
    return 0;
}
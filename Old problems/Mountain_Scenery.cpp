#include<iostream>
using namespace std;
int main()
{
    int n,k,count = 0;
    cin>>n>>k;
    int *arr = new int[2*n+1];
    for(int i=1;i<=2*n+1;i++)
        cin>>arr[i];
    for(int i=1;i<=2*n+1;i++)
    {
        if(count == k)
            break;
        if(i%2==0 &&arr[i-1]<arr[i]-1 && arr[i+1]<arr[i]-1)
        {
            arr[i] -=1;
            count++;
        }
    }
    for(int i=1;i<=2*n+1;i++)
    {
        cout<<arr[i];
        if(i != 2*n+1)
            cout<<" ";
    }
    return 0;
}
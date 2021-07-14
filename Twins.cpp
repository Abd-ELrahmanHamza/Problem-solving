#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0,tempSum=0,count=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i=n-1;i>=0;i--)
    {
        tempSum+=arr[i];
        count++;
        //cout<<arr[i]<<endl;
        if(tempSum>sum/2)
            break;
    }
    cout<<count;
    return 0;
}
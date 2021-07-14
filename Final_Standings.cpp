#include<iostream>
#include<algorithm>
using namespace std;
struct team{
    int id,rate;
    bool operator<(const team& t) const
    {
        return rate>t.rate;
    }
    bool operator>(const team &t) const
    {
        return rate < t.rate;
    }
};
int main()
{
    int n;
    cin>>n;
    team *arr = new team[n];
    for(int i=0;i<n;i++)
        cin>>arr[i].id>>arr[i].rate;
    stable_sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].id<<" "<<arr[i].rate;
        if(i!=n-1)
            cout<<endl;
    }

    return 0;
}
#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int ,int> *arrPairs;
    int n;
    cin>>n;
    arrPairs = new pair<int,int>[n];
    for(int i=0;i<n;i++)
    {
        cin >> arrPairs[i].first;
        cin >> arrPairs[i].second;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arrPairs[i].second == arrPairs[j].first)
                count++;
        }
    }
    cout<<count;
    return 0;
}
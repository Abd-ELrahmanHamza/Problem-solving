#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n;
    pair<int,int> NewPair,OldPair;
    cin>>n;
    //cout<<"N = "<<n<<endl;
    cin>>OldPair.first>>OldPair.second;
    bool IsRated = false,IsInc = true;
    if(OldPair.first!=OldPair.second)
        IsRated = true;

    for(int i=1;i<n;i++)
    {
        cin>>NewPair.first>>NewPair.second;
        if(NewPair.first!=NewPair.second)
        {
            IsRated = true;
        }
        if(NewPair.first>OldPair.first)
            IsInc = false;
        OldPair = NewPair;
    }
    if(IsRated)
        cout << "rated";
    else if(!IsInc)
        cout << "unrated";
    else
        cout << "maybe";
    return 0;
}
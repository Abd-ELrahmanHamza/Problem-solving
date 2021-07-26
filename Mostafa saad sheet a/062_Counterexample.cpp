#include <iostream>
using namespace std;
int main()
{
    unsigned long long l,r;
    cin>>l>>r;
    if(r-l<=1)
        cout<<-1;
    else if(r-l==2 && l%2 !=0)
        cout<<-1;
    else
    {
        if (l % 2 != 0)
            l++;
        cout<<l<<" "<<l+1<<" "<<l+2; 
    }
        
    return 0;
}